module controller (
    input logic clk, rst,

    //--decode stage--
    input logic [6:0] op,
    input logic [2:0] funct3,
    input logic [6:0] funct7,
    
    output logic [1:0] immsrcD,

    //--execute stage-- 
    input logic flushE,
    input logic zeroE,   

    output logic pcsrcE,
    output logic alusrcE,
    output logic [1:0] resultsrcE,
    output logic [3:0] alucontrolE,
    
    //--memory stage--
    output logic regwriteM,
    output logic memwriteM,
    output logic [2:0] funct3M,

    //--writeback stage--
    output logic regwriteW,
    output logic [1:0] resultsrcW 
);
//internal signal
logic [1:0] aluop;

//--decode register signals--\\
logic regwriteD;
logic [1:0] resultsrcD;
logic memwriteD;
logic jumpD;
logic branchD;
logic [3:0] alucontrolD;
logic alusrcD;
//logic [1:0] immsrcD;

//--execute register signals--\\
logic regwriteE;
//logic [1:0] resultsrcE;
logic memwriteE;
logic jumpE;
logic branchE;
//logic [2:0] alucontrolE;
//logic alusrcE;
logic [1:0] immsrcE;
logic [2:0] funct3E;

//--memory register signals--\\
//logic regwriteM;
logic [1:0] resultsrcM;
//logic memwriteM;
//logic [2:0] funct3M;

//--writeback signals--
//logic regwriteW;
//logic [1:0] resultsrcW;

maindec md(
    .op(op),
    .resultsrc(resultsrcD),
    .regwrite(regwriteD),
    .memwrite(memwriteD),
    .jump(jumpD),
    .branch(branchD),
    .alusrc(alusrcD),
    .immsrc(immsrcD),
    .aluop(aluop)
);
aludec ad(
    .opb5(op[5]),
    .funct3(funct3),
    .funct7(funct7),
    .aluop(aluop),
    .alucontrol(alucontrolD)
);

//--execute register--
floprc #(
    .WIDTH(14)//plus funct3
)regE(
    .clk(clk),
    .rst(rst),
    .clear(flushE),
    .d({regwriteD,resultsrcD,memwriteD,jumpD,branchD,alucontrolD,alusrcD,funct3}),
    .q({regwriteE,resultsrcE,memwriteE,jumpE,branchE,alucontrolE,alusrcE,funct3E})
);
assign pcsrcE = ((zeroE & branchE)|jumpE);

//--memory register--
flopr #(
    .WIDTH(7)
)regM(
    .clk(clk),
    .rst(rst),
    .d({regwriteE,resultsrcE,memwriteE,funct3E}),
    .q({regwriteM,resultsrcM,memwriteM,funct3M})
);

//--writeback register--
flopr #(
    .WIDTH(3)
)regW(
    .clk(clk),
    .rst(rst),
    .d({regwriteM,resultsrcM}),
    .q({regwriteW,resultsrcW})
);
endmodule