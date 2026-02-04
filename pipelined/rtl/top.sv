module top #(
    parameter WIDTH = 32
)(
    input logic clk, rst,
    output logic [WIDTH-1:0] writedata, dataadr,
    output logic memwrite
);
//----internal signals----\\
//imem sig\\
logic [WIDTH-1:0] pcF, instrF;

//dmem sig\\
logic [WIDTH-1:0] readdataM;

pipelinedprocessor #(
    .WIDTH(WIDTH)
)riscv(
    .clk(clk),
    .rst(rst),
    .instrF(instrF),
    .pcF(pcF),
    .readdataM(readdataM),
    .memwriteM(memwrite),
    .aluresultM(dataadr),
    .writedataM(writedata)
);
imem #(
    .WIDTH(WIDTH)
)imem(
    .a(pcF[7:2]),
    .rd(instrF)
);
dmem #(
    .WIDTH(WIDTH)
)dmem(
    .clk(clk),
    .we(memwrite),
    .a(dataadr),
    .wd(writedata),
    .rd(readdataM)
);
endmodule