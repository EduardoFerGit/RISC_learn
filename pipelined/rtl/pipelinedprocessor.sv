module pipelinedprocessor #(
    parameter WIDTH = 32
)(
    input logic clk, rst,

    //imem
    input logic [WIDTH-1:0] instrF,
    output logic [WIDTH-1:0] pcF,

    //dmem
    input logic [WIDTH-1:0] readdataM,
    output logic memwriteM,
    output logic [WIDTH-1:0] aluresultM,
    output logic [WIDTH-1:0] writedataM
);
//----internal_signals----
logic [6:0] op;
logic [2:0] funct3;
logic funct7b5;

logic stallF;
logic stallD, flushD;
logic [1:0] immsrcD;
logic [4:0] rs1D, rs2D;
logic zeroE, pcsrcE, alusrcE, flushE;
logic [1:0] resultsrcE, forwardAE, forwardBE;
logic [2:0] alucontrolE;
logic [4:0] rs1E, rs2E, rdE;
logic regwriteM;
logic [4:0] rdM;
logic regwriteW;
logic [1:0] resultsrcW;
logic [4:0] rdW;


//----modules----
datapath #(
    .WIDTH(WIDTH)
)dp(
    .clk(clk),
    .rst(rst),
    .pcsrcE(pcsrcE),
    .stallF(stallF),
    .instrF(instrF),
    .pcF(pcF),
    .immsrcD(immsrcD),
    .stallD(stallD),
    .flushD(flushD),
    .regwriteW(regwriteW),
    .op(op),
    .funct3(funct3),
    .funct7b5(funct7b5),
    .rs1D(rs1D),
    .rs2D(rs2D),
    .flushE(flushE),
    .forwardAE(forwardAE),
    .forwardBE(forwardBE),
    .alucontrolE(alucontrolE),
    .alusrcE(alusrcE),
    .rs1E(rs1E),
    .rs2E(rs2E),
    .rdE(rdE),
    .zeroE(zeroE),
    .readdataM(readdataM),
    .aluresultM(aluresultM),
    .writedataM(writedataM),
    .rdM(rdM),
    .resultsrcW(resultsrcW),
    .rdW(rdW)
);
controller cu(
    .clk(clk),
    .rst(rst),
    .op(op),
    .funct3(funct3),
    .funct7b5(funct7b5),
    .immsrcD(immsrcD),
    .flushE(flushE),
    .zeroE(zeroE),
    .pcsrcE(pcsrcE),
    .alusrcE(alusrcE),
    .resultsrcE(resultsrcE),
    .alucontrolE(alucontrolE),
    .regwriteM(regwriteM),
    .memwriteM(memwriteM),
    .regwriteW(regwriteW),
    .resultsrcW(resultsrcW)
);
hazardunit hu(
    .rs1D(rs1D),
    .rs2D(rs2D),
    .rs1E(rs1E),
    .rs2E(rs2E),
    .rdE(rdE),
    .resultsrcE(resultsrcE),
    .pcsrcE(pcsrcE),
    .rdM(rdM),
    .regwriteM(regwriteM),
    .rdW(rdW),
    .regwriteW(regwriteW),
    .stallF(stallF),
    .stallD(stallD),
    .flushD(flushD),
    .flushE(flushE),
    .forwardAE(forwardAE),
    .forwardBE(forwardBE)
);
endmodule