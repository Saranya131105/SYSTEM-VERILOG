`timescale 1ns/1ps

module tb_full_adder;

    // ------------------------------------------------
    // DUT signals
    // ------------------------------------------------
    logic a, b, cin;
    logic sum, cout;

    // Full Adder DUT
    full_adder dut (
        .a(a),
        .b(b),
        .cin(cin),
        .sum(sum),
        .cout(cout)
    );

    // ------------------------------------------------
    // Transaction class
    // ------------------------------------------------
    class transaction;

        rand bit a;
        rand bit b;
        rand bit cin;

        bit sum;
        bit cout;

        function void display();
            $display("[TRANSACTION] A=%0d B=%0d Cin=%0d",
                     a, b, cin);
        endfunction

    endclass


    // ------------------------------------------------
    // Mailboxes
    // ------------------------------------------------
    mailbox #(transaction) gen2drv;
    mailbox #(transaction) mon2scb;


    // ------------------------------------------------
    // Functional Coverage
    // 8 combinations for A, B and Cin
    // ------------------------------------------------
    bit coverage[8];
    integer coverage_count;


    // ------------------------------------------------
    // Generator Class
    // ------------------------------------------------
    class generator;

        transaction tr;
        mailbox #(transaction) gen2drv;

        function new(mailbox #(transaction) gen2drv);
            this.gen2drv = gen2drv;
        endfunction

        task run();

            for (int i = 0; i < 8; i++) begin

                tr = new();

                // Generate all 8 input combinations
                tr.a   = (i >> 2) & 1;
                tr.b   = (i >> 1) & 1;
                tr.cin = i & 1;

                $display("[GENERATOR] Transaction %0d", i + 1);

                tr.display();

                gen2drv.put(tr);

            end

        endtask

    endclass


    // ------------------------------------------------
    // Driver Class
    // ------------------------------------------------
    class driver;

        transaction tr;
        mailbox #(transaction) gen2drv;

        function new(mailbox #(transaction) gen2drv);
            this.gen2drv = gen2drv;
        endfunction

        task run();

            repeat (8) begin

                gen2drv.get(tr);

                a   = tr.a;
                b   = tr.b;
                cin = tr.cin;

                #10;

                $display("[DRIVER] A=%0d B=%0d Cin=%0d",
                         a, b, cin);

            end

        endtask

    endclass


    // ------------------------------------------------
    // Monitor Class
    // ------------------------------------------------
    class monitor;

        transaction tr;
        mailbox #(transaction) mon2scb;

        function new(mailbox #(transaction) mon2scb);
            this.mon2scb = mon2scb;
        endfunction

        task run();

            repeat (8) begin

                #1;

                tr = new();

                tr.a   = a;
                tr.b   = b;
                tr.cin = cin;

                tr.sum  = sum;
                tr.cout = cout;

                // Functional coverage
                coverage[tr.a*4 + tr.b*2 + tr.cin] = 1'b1;

                $display("[MONITOR] A=%0d B=%0d Cin=%0d | Sum=%0d Cout=%0d",
                         tr.a,
                         tr.b,
                         tr.cin,
                         tr.sum,
                         tr.cout);

                mon2scb.put(tr);

                #9;

            end

        endtask

    endclass


    // ------------------------------------------------
    // Scoreboard Class
    // ------------------------------------------------
    class scoreboard;

        transaction tr;
        mailbox #(transaction) mon2scb;

        integer pass_count;
        integer fail_count;

        bit expected_sum;
        bit expected_cout;

        function new(mailbox #(transaction) mon2scb);

            this.mon2scb = mon2scb;

            pass_count = 0;
            fail_count = 0;

        endfunction


        task run();

            repeat (8) begin

                mon2scb.get(tr);

                // Golden reference model
                expected_sum  = tr.a ^ tr.b ^ tr.cin;

                expected_cout = (tr.a & tr.b) |
                                (tr.b & tr.cin) |
                                (tr.a & tr.cin);

                // Compare DUT output with expected output
                if ((tr.sum == expected_sum) &&
                    (tr.cout == expected_cout)) begin

                    pass_count++;

                    $display("[SCOREBOARD] PASS | A=%0d B=%0d Cin=%0d | Expected Sum=%0d Cout=%0d | Actual Sum=%0d Cout=%0d",
                             tr.a,
                             tr.b,
                             tr.cin,
                             expected_sum,
                             expected_cout,
                             tr.sum,
                             tr.cout);

                end
                else begin

                    fail_count++;

                    $display("[SCOREBOARD] FAIL | A=%0d B=%0d Cin=%0d | Expected Sum=%0d Cout=%0d | Actual Sum=%0d Cout=%0d",
                             tr.a,
                             tr.b,
                             tr.cin,
                             expected_sum,
                             expected_cout,
                             tr.sum,
                             tr.cout);

                end

            end

        endtask

    endclass


    // ------------------------------------------------
    // Environment Class
    // ------------------------------------------------
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


    // ------------------------------------------------
    // Environment Object
    // ------------------------------------------------
    environment env;


    // ------------------------------------------------
    // Main Test
    // ------------------------------------------------
    initial begin

        // Initialize inputs
        a   = 0;
        b   = 0;
        cin = 0;

        // Initialize coverage
        for (int i = 0; i < 8; i++)
            coverage[i] = 1'b0;


        $display("");
        $display("==================================================");
        $display(" EXPERIMENT 06: MONITOR + SCOREBOARD + COVERAGE");
        $display("                FULL ADDER");
        $display("==================================================");
        $display("");


        // Create environment
        env = new();

        // Run complete environment
        env.run();


        // ------------------------------------------------
        // Test Summary
        // ------------------------------------------------
        $display("");
        $display("==================================================");
        $display(" TEST SUMMARY");
        $display("==================================================");

        $display("PASS = %0d", env.scb.pass_count);
        $display("FAIL = %0d", env.scb.fail_count);


        // ------------------------------------------------
        // Functional Coverage
        // ------------------------------------------------
        coverage_count = 0;

        for (int i = 0; i < 8; i++) begin

            if (coverage[i])
                coverage_count++;

        end


        $display("");
        $display("==================================================");
        $display(" FUNCTIONAL COVERAGE");
        $display("==================================================");

        $display("Covered combinations = %0d / 8",
                 coverage_count);

        $display("Coverage = %0.2f%%",
                 (coverage_count * 100.0) / 8.0);


        $display("");
        $display("A B Cin | Covered");
        $display("-----------------");

        for (int i = 0; i < 8; i++) begin

            $display("%0d %0d %0d | %0d",
                     (i >> 2) & 1,
                     (i >> 1) & 1,
                     i & 1,
                     coverage[i]);

        end


        $display("");
        $display("==================================================");
        $display(" VERIFICATION COMPLETED");
        $display("==================================================");
        $display("");

        $finish;

    end

endmodule
