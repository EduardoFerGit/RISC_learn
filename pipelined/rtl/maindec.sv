module maindec (
    input logic [6:0] op,
    output logic [1:0] resultsrc,
    output logic regwrite,
    output logic memwrite, 
    output logic jump, 
    output logic branch, alusrc, 
    output logic [1:0] immsrc,
    output logic [1:0] aluop
);
logic [10:0] controlsig;
assign {regwrite, immsrc, alusrc, memwrite, resultsrc, branch, aluop, jump} = controlsig;
always_comb 
    case(op)
    7'b0000011: controlsig = 11'b1_00_1_0_01_0_00_0;//I_TYPE load
    7'b0100011: controlsig = 11'b0_01_1_1_01_0_00_0;//S_TYPE store
    7'b0110011: controlsig = 11'b1_00_0_0_00_0_10_0;//R_TYPE arithm
    7'b1100011: controlsig = 11'b0_10_0_0_00_1_01_0;//B_TYPE beq
    7'b0010011: controlsig = 11'b1_00_1_0_00_0_10_0;//I_TYPE arithmetic
    7'b1101111: controlsig = 11'b1_11_0_0_10_0_00_1;//J_TYPE JAL
    default: controlsig = 11'bx;
    endcase
endmodule