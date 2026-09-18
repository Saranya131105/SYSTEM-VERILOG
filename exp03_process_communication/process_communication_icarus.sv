`timescale 1ns/1ps

module process_communication_icarus;

    integer data_queue[$];

    task producer();
        $display("[%0t ns] Producer started", $time);

        #10;
        data_queue.push_back(100);
        $display("[%0t ns] Producer sent data = 100", $time);

        #10;
        data_queue.push_back(200);
        $display("[%0t ns] Producer sent data = 200", $time);
    endtask

    task consumer();
        integer data;

        $display("[%0t ns] Consumer started", $time);

        wait(data_queue.size() > 0);
        data = data_queue.pop_front();
        $display("[%0t ns] Consumer received data = %0d",
                 $time, data);

        wait(data_queue.size() > 0);
        data = data_queue.pop_front();
        $display("[%0t ns] Consumer received data = %0d",
                 $time, data);
    endtask

    initial begin
        $display("PROCESS COMMUNICATION EXPERIMENT");

        fork
            producer();
            consumer();
        join

        $display("[%0t ns] Communication completed", $time);

        $finish;
    end

endmodule