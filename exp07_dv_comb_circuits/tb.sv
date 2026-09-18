`timescale 1ns/1ps

module tb;

logic A, B, Cin;

logic HA_Sum, HA_Carry;
logic FA_Sum, FA_Cout;

// Half Adder
half_adder HA (
    .A(A),
    .B(B),
    .Sum(HA_Sum),
    .Carry(HA_Carry)
);

// Full Adder
full_adder FA (
    .A(A),
    .B(B),
    .Cin(Cin),
    .Sum(FA_Sum),
    .Cout(FA_Cout)
);

initial begin

    // Waveform
    $dumpfile("wave.vcd");
    $dumpvars(0, tb);

    // -------------------------
    // HALF ADDER
    // -------------------------

    $display("\n===== HALF ADDER =====");
    $display("A B | Sum Carry");
    $display("----------------");

    A = 0; B = 0;
    #10;
    $display("%b %b |  %b    %b", A, B, HA_Sum, HA_Carry);

    A = 0; B = 1;
    #10;
    $display("%b %b |  %b    %b", A, B, HA_Sum, HA_Carry);

    A = 1; B = 0;
    #10;
    $display("%b %b |  %b    %b", A, B, HA_Sum, HA_Carry);

    A = 1; B = 1;
    #10;
    $display("%b %b |  %b    %b", A, B, HA_Sum, HA_Carry);


    // -------------------------
    // FULL ADDER
    // -------------------------

    $display("\n===== FULL ADDER =====");
    $display("A B Cin | Sum Cout");
    $display("------------------");

    A = 0; B = 0; Cin = 0;
    #10;
    $display("%b %b  %b  |  %b    %b", A, B, Cin, FA_Sum, FA_Cout);

    A = 0; B = 0; Cin = 1;
    #10;
    $display("%b %b  %b  |  %b    %b", A, B, Cin, FA_Sum, FA_Cout);

    A = 0; B = 1; Cin = 0;
    #10;
    $display("%b %b  %b  |  %b    %b", A, B, Cin, FA_Sum, FA_Cout);

    A = 0; B = 1; Cin = 1;
    #10;
    $display("%b %b  %b  |  %b    %b", A, B, Cin, FA_Sum, FA_Cout);

    A = 1; B = 0; Cin = 0;
    #10;
    $display("%b %b  %b  |  %b    %b", A, B, Cin, FA_Sum, FA_Cout);

    A = 1; B = 0; Cin = 1;
    #10;
    $display("%b %b  %b  |  %b    %b", A, B, Cin, FA_Sum, FA_Cout);

    A = 1; B = 1; Cin = 0;
    #10;
    $display("%b %b  %b  |  %b    %b", A, B, Cin, FA_Sum, FA_Cout);

    A = 1; B = 1; Cin = 1;
    #10;
    $display("%b %b  %b  |  %b    %b", A, B, Cin, FA_Sum, FA_Cout);

    $display("\n===== SIMULATION COMPLETED =====");

    $finish;

end

endmodule
