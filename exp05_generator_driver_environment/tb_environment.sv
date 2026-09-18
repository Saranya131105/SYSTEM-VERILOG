`timescale 1ns/1ps

interface half_adder_if;
    logic a;
    logic b;
    logic sum;
    logic carry;
endinterface


module tb_environment;

    half_adder_if ha_if();

    half_adder dut (
        .a(ha_if.a),
        .b(ha_if.b),
        .sum(ha_if.sum),
        .carry(ha_if.carry)
    );


    class transaction;

        rand bit a;
        rand bit b;

        function void display();
            $display("[TRANSACTION] A=%0d B=%0d", a, b);
        endfunction

    endclass


    class generator;

        transaction tr;
        mailbox #(transaction) gen2drv;

        function new(mailbox #(transaction) gen2drv);
            this.gen2drv = gen2drv;
        endfunction

        task run();

            for (int i = 0; i < 10; i++) begin

                tr = new();

                if (tr.randomize()) begin
                    $display("[GENERATOR] Transaction %0d", i + 1);
                    tr.display();
                    gen2drv.put(tr);
                end
                else begin
                    $display("[GENERATOR] Randomization FAILED");
                end

            end

        endtask

    endclass


    class driver;

        transaction tr;
        mailbox #(transaction) gen2drv;
        virtual half_adder_if vif;

        function new(
            mailbox #(transaction) gen2drv,
            virtual half_adder_if vif
        );
            this.gen2drv = gen2drv;
            this.vif = vif;
        endfunction

        task run();

            repeat (10) begin

                gen2drv.get(tr);

                vif.a = tr.a;
                vif.b = tr.b;

                #1;

                $display(
                    "[DRIVER] A=%0d B=%0d | SUM=%0d CARRY=%0d",
                    vif.a, vif.b, vif.sum, vif.carry
                );

            end

        endtask

    endclass


    class environment;

        generator gen;
        driver drv;
        mailbox #(transaction) gen2drv;

        function new(virtual half_adder_if vif);

            gen2drv = new();
            gen = new(gen2drv);
            drv = new(gen2drv, vif);

        endfunction

        task run();

            fork
                gen.run();
                drv.run();
            join

        endtask

    endclass


    environment env;

    initial begin

        ha_if.a = 0;
        ha_if.b = 0;

        $display("========================================");
        $display("GENERATOR + DRIVER + ENVIRONMENT");
        $display("========================================");

        env = new(ha_if);

        env.run();

        $display("========================================");
        $display("TEST COMPLETED");
        $display("========================================");

        $finish;
    end
endmodule
