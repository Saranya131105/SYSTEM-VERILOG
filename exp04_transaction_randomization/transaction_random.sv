`timescale 1ns/1ps

module transaction_random;

class transaction;
    rand bit a, b, cin;

    function void display();
        $display("A = %0d | B = %0d | Cin = %0d", a, b, cin);
    endfunction
endclass

initial begin
    transaction tr;
    tr = new();

    $display("TRANSACTION RANDOMIZATION");

    for (int i = 0; i < 10; i++) begin
        if (tr.randomize()) begin
            $display("Transaction %0d:", i + 1);
            tr.display();
        end
        else
            $display("Randomization FAILED");
    end

    $display("Randomization completed.");
    $finish;
end

endmodule
