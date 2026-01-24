module data_mem #(
    parameter WIDTH = 32
)(
    input logic clk, we,
    input logic [WIDTH-1:0] a, // input must be [N-1:2] skipping first two bits to be word alligned
    input logic [WIDTH-1:0] wd,
    output logic [WIDTH-1:0] rd
);

    logic [WIDTH-1:0] RAM[63:0]; // |64| 32-bit words as RAM
    assign rd = RAM[a];
    
    always_ff @(posedge clk) begin
        if (we) begin
            RAM[a] <= wd;
        end
    end
endmodule