`timescale 1ns/1ps

module tb_d_flipflop;

logic clk, reset, d, q;

initial begin
    clk = 0;
    forever #5 clk = ~clk;
end

d_flipflop dut (
    .clk   (clk),
    .reset (reset),
    .d     (d),
    .q     (q)
);

initial begin
    $dumpfile("d_flipflop.vcd");
    $dumpvars(0, tb_d_flipflop);
end


//====================================================
// Transaction Class
//====================================================

class transaction;

    rand bit reset;
    rand bit d;
    bit q;

    function void display();
        $display("RESET=%0d D=%0d", reset, d);
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
            d     = tr.d;

            $display("[DRIVER] RESET=%0d D=%0d", reset, d);

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
            tr.d     = d;
            tr.q     = q;

            $display("[MONITOR] RESET=%0d D=%0d Q=%0d",
                     tr.reset, tr.d, tr.q);

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

    bit expected_q;

    function new(mailbox #(transaction) mon2scb);

        this.mon2scb = mon2scb;

        pass_count = 0;
        fail_count = 0;

        expected_q = 0;

    endfunction

    task run();

        repeat (20) begin

            mon2scb.get(tr);

            if (tr.reset)
                expected_q = 0;
            else
                expected_q = tr.d;

            if (tr.q == expected_q) begin

                $display("[SCOREBOARD] PASS");

                pass_count++;

            end
            else begin

                $display("[SCOREBOARD] FAIL | Expected=%0d Actual=%0d",
                         expected_q, tr.q);

                fail_count++;

            end

        end

    endtask

endclass


//====================================================
// Environment Class
//====================================================

class environment;

    generator  gen;
    driver     drv;
    monitor    mon;
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

    reset = 1;
    d     = 0;

    $display("");
    $display("====================================");
    $display("     D FLIP-FLOP VERIFICATION");
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
