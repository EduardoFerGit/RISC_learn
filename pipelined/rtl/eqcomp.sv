module eqcomp #(
    parameter WIDTH = 32
)(
    input logic [WIDTH-1:0]  a, b,
    output logic y
);

assign y = (a == b) ? 1 : 0;

endmodule