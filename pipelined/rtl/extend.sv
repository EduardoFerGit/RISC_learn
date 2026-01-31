module extend #(
    parameter OUTWIDTH = 32
)(
    input logic [31:7] instr,
    input logic [1:0] immsrc,
    output logic [OUTWIDTH-1:0] immext
);
//in rv32i the immediate numbers are all jumbled up

always_comb
    case(immsrc)
    2'b00: immext = {{20{instr[31]}}, instr[31:20]}; //I_TYPE LW
    2'b01: immext = {{20{instr[31]}}, instr[31:25], instr[11:7]}; // S_TYPE SW
    2'b10: immext = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0}; //B_TYPE shifted right once
    2'b11: immext = {{12{instr[31]}},instr[19:12], instr[20], instr[30:21], 1'b0}; //J_TYPE jumbled mess
    default: immext = 32'bx;
    endcase


endmodule