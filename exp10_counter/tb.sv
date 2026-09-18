`timescale 1ns/1ps

module tb_counter;

parameter N = 4;

logic clk;
logic reset;
logic [N-1:0] count;


//====================================================
// Clock Generation
//====================================================

initial begin
    clk = 0;
    forever #5 clk = ~clk;
end


//====================================================
// DUT
//====================================================

counter #(.N(N)) dut (
    .clk   (clk),
    .reset (reset),
    .count (count)
);


//====================================================
// Waveform
//====================================================

initial begin
    $dumpfile("counter.vcd");
    $dumpvars(0, tb_counter);
end


//====================================================
// Transaction Class
//====================================================

class transaction;

    rand bit reset;
    bit [N-1:0] count;

    function void display();
        $display("RESET=%0d", reset);
    endfunction

endclass


//====================================================
// Mailboxes
//====================================================

mailbox #(transaction) gen2drv;
mailbox #(transaction) mon2scb;


//====================================================
// Generator Class
//====================================================

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


//====================================================
// Driver Class
//====================================================

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

            reset = tr.reset;

            $display("[DRIVER] RESET=%0d", reset);

        end

    endtask

endclass


//====================================================
// Monitor Class
//====================================================

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

            tr.reset = reset;
            tr.count = count;

            $display("[MONITOR] RESET=%0d | COUNT=%0d",
                     tr.reset, tr.count);

            mon2scb.put(tr);

        end

    endtask

endclass


//====================================================
// Scoreboard Class
//====================================================

class scoreboard;

    transaction tr;
    mailbox #(transaction) mon2scb;

    integer pass_count;
    integer fail_count;

    bit [N-1:0] expected_count;

    function new(mailbox #(transaction) mon2scb);

        this.mon2scb = mon2scb;

        pass_count = 0;
        fail_count = 0;

        expected_count = 0;

    endfunction


    task run();

        repeat (20) begin

            mon2scb.get(tr);

            if (tr.reset)
                expected_count = 0;
            else
                expected_count = expected_count + 1'b1;

            if (tr.count == expected_count) begin

                $display("[SCOREBOARD] PASS | Expected=%0d Actual=%0d",
                         expected_count, tr.count);

                pass_count++;

            end
            else begin

                $display("[SCOREBOARD] FAIL | Expected=%0d Actual=%0d",
                         expected_count, tr.count);

                fail_count++;

            end

        end

    endtask

endclass


//====================================================
// Environment Class
//====================================================

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


//====================================================
// Top Testbench
//====================================================

environment env;

initial begin

    reset = 1'b1;

    $display("");
    $display("====================================");
    $display("     4-BIT COUNTER VERIFICATION");
    $display("====================================");
    $display("");

    env = new();

    env.run();

    $display("");
    $display("====================================");
    $display("          TEST SUMMARY");
    $display("====================================");

    $display("PASS = %0d", env.scb.pass_count);
    $display("FAIL = %0d", env.scb.fail_count);

    if (env.scb.fail_count == 0)
        $display("RESULT = ALL TESTS PASSED");
    else
        $display("RESULT = SOME TESTS FAILED");

    $display("");

    $finish;

end

endmodule
