module dmem #(
    parameter WIDTH = 32
)(
    input logic clk, we,
    input logic [WIDTH-1:0] a, 
    input logic [WIDTH-1:0] wd,
    output logic [WIDTH-1:0] rd
);

logic [31:0] RAM[63:0];

logic [5:0] index;
assign index = a[7:2];


assign rd = RAM[index]; //word alligned

always_ff @(posedge clk)
    if (we) begin 
        RAM[index] = wd;
    end
endmodule