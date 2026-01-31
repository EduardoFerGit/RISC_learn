module signext #(
    parameter WIDTH = 16,
    parameter OUTWIDTH = 32
)(
    input logic [WIDTH-1:0] a,
    output logic [OUTWIDTH-1:0] y
);
    //takes the msb of input and repicates it 16 times infront of the other bits
    assign y = {{16{a[15]}}, a}; 

endmodule