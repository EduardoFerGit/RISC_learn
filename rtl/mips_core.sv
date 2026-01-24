module mips_core #(
    parameter WIDTH = 32,
    parameter PCWIDTH = 8
)(
    input logic clk, rst,
    input logic [WIDTH-1:0] instruction,
    input logic [WIDTH-1:0] datamemout,
    output logic memwrite,
    output logic [WIDTH-1:0] aluresult,
    output logic [WIDTH-1:0] writedata,
    output logic [PCWIDTH-1:0] currentpc
);
logic [5:0] op, funct;
logic zero, jump, regwrite, regdst, memtoreg, pcsrc, alusrc;
logic [2:0] alucontrol;
datapath #(
    .WIDTH(WIDTH),
    .PCWIDTH(PCWIDTH)
)datapath_inst(
    .clk(clk),
    .rst(rst),
    .jump(jump),
    .regwrite(regwrite),
    .regdst(regdst),
    .memtoreg(memtoreg),
    .memwrite(memwrite),
    .alucontrol(alucontrol),
    .pcsrc(pcsrc),
    .alusrc(alusrc),
    .op(op),
    .funct(funct),
    .zero(zero),

    .instruction(instruction),//imem and dmem signals
    .currentpc(currentpc),
    .aluresult(aluresult),
    .datamemout(datamemout),
    .regout2(writedata)
);
control_unit control_unit_inst(
    .op(op),
    .funct(funct),
    .zero(zero),
    .memtoreg(memtoreg),
    .memwrite(memwrite),
    .regdst(regdst),
    .regwrite(regwrite),
    .jump(jump),
    .pcsrc(pcsrc),
    .alusrc(alusrc),
    .alucontrol(alucontrol)
);
endmodule