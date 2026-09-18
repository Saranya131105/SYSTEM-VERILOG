`timescale 1ns/1ps

module tb_nbit_adder;

parameter N = 4;

logic clk;
logic [N-1:0] A, B, Sum;
logic Cin, Cout;

// Clock generation
initial begin
    clk = 0;
    forever #5 clk = ~clk;
end

// DUT
nbit_adder #(.N(N)) dut (
    .A(A),
    .B(B),
    .Cin(Cin),
    .Sum(Sum),
    .Cout(Cout)
);

// VCD waveform
initial begin
    $dumpfile("nbit_adder.vcd");
    $dumpvars(0, tb_nbit_adder);
end


//================================================
// TRANSACTION CLASS
//================================================

class transaction;

    rand bit [N-1:0] A;
    rand bit [N-1:0] B;
    rand bit Cin;

    bit [N-1:0] Sum;
    bit Cout;

    function void display();
        $display(
            "A=%0d B=%0d Cin=%0d | Sum=%0d Cout=%0d",
            A, B, Cin, Sum, Cout
        );
    endfunction

endclass


// Mailboxes
mailbox #(transaction) gen2drv;
mailbox #(transaction) mon2scb;


//================================================
// GENERATOR
//================================================

class generator;

    transaction tr;
    mailbox #(transaction) gen2drv;

    function new(mailbox #(transaction) gen2drv);
        this.gen2drv = gen2drv;
    endfunction

    task run();

        for (int i = 0; i < 20; i++) begin

            tr = new();

            if (tr.randomize() != 0) begin

                $display("[GENERATOR] Transaction %0d", i + 1);

                tr.display();

                gen2drv.put(tr);

            end

        end

    endtask

endclass


//================================================
// DRIVER
//================================================

class driver;

    transaction tr;
    mailbox #(transaction) gen2drv;

    function new(mailbox #(transaction) gen2drv);
        this.gen2drv = gen2drv;
    endfunction

    task run();

        repeat (20) begin

            gen2drv.get(tr);

            @(negedge clk);

            A = tr.A;
            B = tr.B;
            Cin = tr.Cin;

            $display(
                "[DRIVER] A=%0d B=%0d Cin=%0d",
                A, B, Cin
            );

        end

    endtask

endclass


//================================================
// MONITOR
//================================================

class monitor;

    transaction tr;
    mailbox #(transaction) mon2scb;

    function new(mailbox #(transaction) mon2scb);
        this.mon2scb = mon2scb;
    endfunction

    task run();

        repeat (20) begin

            @(posedge clk);

            #1;

            tr = new();

            tr.A = A;
            tr.B = B;
            tr.Cin = Cin;

            tr.Sum = Sum;
            tr.Cout = Cout;

            $display(
                "[MONITOR] A=%0d B=%0d Cin=%0d | Sum=%0d Cout=%0d",
                tr.A,
                tr.B,
                tr.Cin,
                tr.Sum,
                tr.Cout
            );

            mon2scb.put(tr);

        end

    endtask

endclass


//================================================
// SCOREBOARD
//================================================

class scoreboard;

    transaction tr;

    mailbox #(transaction) mon2scb;

    integer pass_count;
    integer fail_count;

    bit [N:0] expected;

    function new(mailbox #(transaction) mon2scb);

        this.mon2scb = mon2scb;

        pass_count = 0;
        fail_count = 0;

    endfunction


    task run();

        repeat (20) begin

            mon2scb.get(tr);

            expected = tr.A + tr.B + tr.Cin;

            if ({tr.Cout, tr.Sum} == expected) begin

                $display(
                    "[SCOREBOARD] PASS | Expected=%0d Actual=%0d",
                    expected,
                    {tr.Cout, tr.Sum}
                );

                pass_count++;

            end
            else begin

                $display(
                    "[SCOREBOARD] FAIL | Expected=%0d Actual=%0d",
                    expected,
                    {tr.Cout, tr.Sum}
                );

                fail_count++;

            end

        end

    endtask

endclass


//================================================
// ENVIRONMENT
//================================================

class environment;

    generator gen;
    driver drv;
    monitor mon;
    scoreboard scb;

    function new();

        gen2drv = new();
        mon2scb = new();

        gen = new(gen2drv);
        drv = new(gen2drv);
        mon = new(mon2scb);
        scb = new(mon2scb);

    endfunction


    task run();

        fork

            gen.run();
            drv.run();
            mon.run();
            scb.run();

        join

    endtask

endclass


//================================================
// TOP TESTBENCH
//================================================

environment env;

initial begin

    A = 0;
    B = 0;
    Cin = 0;

    $display("");
    $display("======================================");
    $display("     N-BIT ADDER VERIFICATION");
    $display("     N = %0d", N);
    $display("======================================");
    $display("");

    env = new();

    env.run();

    $display("");
    $display("======================================");
    $display("          TEST SUMMARY");
    $display("======================================");

    $display("PASS = %0d", env.scb.pass_count);
    $display("FAIL = %0d", env.scb.fail_count);

    if (env.scb.fail_count == 0)
        $display("RESULT = ALL TESTS PASSED");
    else
        $display("RESULT = SOME TESTS FAILED");

    $display("======================================");

    $finish;

end

endmodule
