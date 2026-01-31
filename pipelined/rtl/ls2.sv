module ls2 #(
    parameter WIDTH = 32
)(
    input logic [WIDTH-1:0] a,
    output logic [WIDTH-1:0] y

);

//performs a leftshit twice which is equivalent to multiplying by 4
assign y = {a[WIDTH-3:0], 2'b00};

endmodule