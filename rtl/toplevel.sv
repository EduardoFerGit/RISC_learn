module toplevel #(
    parameter WIDTH = 32,
    parameter PCWIDTH = 8
)(
    input logic clk, rst,
    output logic [WIDTH-1:0] writedata, dataaddr,
    output logic memwrite
);
logic [PCWIDTH-1:0] currentpc;
logic [WIDTH-1:0] instruction, datamemout;

//DATAPATH, CONTROLUNIT & REGFILE//
mips_core #(
    .WIDTH(WIDTH),
    .PCWIDTH(PCWIDTH)
)mips_core(
    .clk(clk),
    .rst(rst),
    .instruction(instruction),
    .datamemout(datamemout),
    .memwrite(memwrite),
    .aluresult(dataaddr),
    .writedata(writedata),
    .currentpc(currentpc)
);

//INSTRUCTION MEMORY//
instruction_mem imem(
    .a(currentpc[7:2]),
    .rd(instruction)
);

//DATA MEMORY//
data_mem #(
    .WIDTH(WIDTH)
)dmem(
    .clk(clk),
    .we(memwrite),
    .a(dataaddr),
    .wd(writedata),
    .rd(datamemout)
);

endmodule