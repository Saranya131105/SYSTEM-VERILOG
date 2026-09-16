`timescale 1ns/1ps

module tb_half_adder;

    logic a, b;

    logic sum_gate, carry_gate;
    logic sum_data, carry_data;
    logic sum_behavioral, carry_behavioral;

    // Gate-level DUT
    half_adder_gate gate_dut (
        .a(a),
        .b(b),
        .sum(sum_gate),
        .carry(carry_gate)
    );

    // Dataflow DUT
    half_adder_dataflow data_dut (
        .a(a),
        .b(b),
        .sum(sum_data),
        .carry(carry_data)
    );

    // Behavioral DUT
    half_adder_behavioral behavioral_dut (
        .a(a),
        .b(b),
        .sum(sum_behavioral),
        .carry(carry_behavioral)
    );

    initial begin

        $dumpfile("half_adder.vcd");
        $dumpvars(0, tb_half_adder);

        $display("HALF ADDER VERIFICATION");
        $display("A B | Gate(S C) | Data(S C) | Beh(S C)");
        $display("------------------------------------------");

        a = 0;
        b = 0;
        #10;

        $display("%0d %0d |    %0d %0d    |    %0d %0d    |   %0d %0d",
                 a, b,
                 sum_gate, carry_gate,
                 sum_data, carry_data,
                 sum_behavioral, carry_behavioral);

        a = 0;
        b = 1;
        #10;

        $display("%0d %0d |    %0d %0d    |    %0d %0d    |   %0d %0d",
                 a, b,
                 sum_gate, carry_gate,
                 sum_data, carry_data,
                 sum_behavioral, carry_behavioral);

        a = 1;
        b = 0;
        #10;

        $display("%0d %0d |    %0d %0d    |    %0d %0d    |   %0d %0d",
                 a, b,
                 sum_gate, carry_gate,
                 sum_data, carry_data,
                 sum_behavioral, carry_behavioral);

        a = 1;
        b = 1;
        #10;

        $display("%0d %0d |    %0d %0d    |    %0d %0d    |   %0d %0d",
                 a, b,
                 sum_gate, carry_gate,
                 sum_data, carry_data,
                 sum_behavioral, carry_behavioral);

        $finish;

    end

endmodule