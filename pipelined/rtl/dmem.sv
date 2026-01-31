module dmem #(
    parameter WIDTH = 32
)(
    input logic clk, we , worb, // word or byte flag for load byte and store byte
    input logic [WIDTH-1:0] a, wd,
    output logic [WIDTH-1:0] rd
);

logic [31:0] RAM[63:0];

assign rd = RAM[a[31:2]]; //word alligned

always @(posedge clk)
    if (we) begin 
        if (worb) begin
            RAM[a[31:2]] [7:0] = wd[7:0];
        end else begin
            RAM[a[31:2]] = wd;
        end
    end
endmodule