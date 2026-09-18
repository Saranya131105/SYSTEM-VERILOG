`timescale 1ns/1ps

module crc8_generator (
    input  logic       clk,
    input  logic       rst,
    input  logic       start,
    input  logic [7:0] data_in,

    output logic [7:0] crc_out,
    output logic       done
);

    logic [7:0] crc_reg;
    logic [2:0] bit_count;
    logic       busy;
    logic       feedback;

    // Feedback = CRC MSB XOR current input bit
    assign feedback = crc_reg[7] ^ data_in[7-bit_count];

    always_ff @(posedge clk or posedge rst) begin

        if (rst) begin

            crc_reg  <= 8'h00;
            crc_out  <= 8'h00;
            bit_count <= 3'd0;
            busy     <= 1'b0;
            done     <= 1'b0;

        end

        else begin

            // DONE is normally low
            done <= 1'b0;

            // Start CRC calculation
            if (start && !busy) begin

                crc_reg   <= 8'h00;
                bit_count <= 3'd0;
                busy      <= 1'b1;

            end

            // CRC calculation
            else if (busy) begin

                if (feedback)
                    crc_reg <= {crc_reg[6:0], 1'b0} ^ 8'h07;
                else
                    crc_reg <= {crc_reg[6:0], 1'b0};

                // Last input bit
                if (bit_count == 3'd7) begin

                    crc_out <= feedback ?
                               ({crc_reg[6:0], 1'b0} ^ 8'h07) :
                               ({crc_reg[6:0], 1'b0});

                    done <= 1'b1;
                    busy <= 1'b0;

                end

                else begin

                    bit_count <= bit_count + 1'b1;

                end

            end

        end

    end

endmodule
