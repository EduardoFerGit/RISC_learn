module main_decoder (
    input logic [5:0] op,
    output logic memtoreg,
    output logic memwrite,
    output logic branch,
    output logic aluscr,
    output logic regdst,
    output logic regwrite,
    output logic jump,
    output logic [1:0] aluop
);

logic [8:0] controlsig;
assign{memtoreg, memwrite, branch, aluscr, regdst, regwrite, jump, aluop} = controlsig;

always_comb
    case(op)
        6'b000000: controlsig = 9'b000011010;//R-TYPE
        6'b100011: controlsig = 9'b100101000;//LW
        6'b101011: controlsig = 9'b010100000;//SW
        6'b000100: controlsig = 9'b001000001;//BEQ
        6'b001000: controlsig = 9'b000101000;//ADDI
        6'b000010: controlsig = 9'b000000100;//J (jump)
        default:   controlsig = 9'bxxxxxxxxx;//illegal opcode

    endcase
endmodule