`timescale 1ns/1ps

module tb_crc8;

    logic       clk;
    logic       rst;
    logic       start;
    logic [7:0] data_in;

    logic [7:0] crc_out;
    logic       done;


    //================================================
    // DUT
    //================================================

    crc8_generator DUT (
        .clk     (clk),
        .rst     (rst),
        .start   (start),
        .data_in (data_in),
        .crc_out (crc_out),
        .done    (done)
    );


    //================================================
    // CLOCK GENERATION
    //================================================

    initial begin

        clk = 1'b0;

        forever #5 clk = ~clk;

    end


    //================================================
    // VCD WAVEFORM
    //================================================

    initial begin

        $dumpfile("crc8_waveform.vcd");
        $dumpvars(0, tb_crc8);

    end


    //================================================
    // TEST SEQUENCE
    //================================================

    initial begin

        // Initial values
        rst     = 1'b1;
        start   = 1'b0;
        data_in = 8'h00;

        // Reset
        #20;

        rst = 1'b0;


        //================================================
        // TEST 1 : A5
        //================================================

        data_in = 8'hA5;

        #10;

        start = 1'b1;

        #10;

        start = 1'b0;

        wait(done == 1'b1);

        #1;

        $display("-----------------------------------------------");
        $display("TEST 1");
        $display("Input Data : %h", data_in);
        $display("CRC Output : %h", crc_out);
        $display("DONE       : %b", done);
        $display("-----------------------------------------------");


        //================================================
        // TEST 2 : 3C
        //================================================

        #20;

        data_in = 8'h3C;

        #10;

        start = 1'b1;

        #10;

        start = 1'b0;

        wait(done == 1'b1);

        #1;

        $display("-----------------------------------------------");
        $display("TEST 2");
        $display("Input Data : %h", data_in);
        $display("CRC Output : %h", crc_out);
        $display("DONE       : %b", done);
        $display("-----------------------------------------------");


        #20;

        $display("Simulation completed.");

        $finish;

    end

endmodule
