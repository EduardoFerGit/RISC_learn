module control_unit (
    input logic [5:0] op, funct,
    input logic zero, 
    output logic memtoreg,
    output logic memwrite,
    output logic regdst,
    output logic regwrite,
    output logic jump,
    output logic pcsrc, alusrc,
    output logic [2:0] alucontrol
);

logic branch;
logic [1:0] aluop;

//MAIN_DECODER instance
main_decoder main_decoder_inst (
    .op(op),
    .memtoreg(memtoreg),
    .memwrite(memwrite),
    .branch(branch),
    .aluscr(alusrc),
    .regdst(regdst),
    .regwrite(regwrite),
    .jump(jump),
    .aluop(aluop)
);

//ALU_DECODER instance
alu_decoder alu_decoder_inst (
    .funct(funct),
    .aluop(aluop),
    .alucontrol(alucontrol)
);

assign pcsrc = (branch & zero);

endmodule