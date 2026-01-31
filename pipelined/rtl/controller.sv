module controller (
    input logic clk, rst,

    //--decode stage--
    input logic [6:0] op,
    input logic [2:0] funct3,
    input logic funct7b5,
    
    output logic [1:0] immsrcD,

    //--execute stage-- 
    input logic flushE,
    input logic zeroE,   

    output logic pcsrcE,
    output logic alusrcE,
    output logic [1:0] resultsrcE,
    output logic [2:0] alucontrolE,
    
    //--memory stage--
    output logic regwriteM,
    output logic memwriteM,

    //--writeback stage--
    output logic regwriteW,
    output logic [1:0] resultsrcW 
);
//internal signal
logic [1:0] aluop;

//--decode register signals--
logic regwriteD;
logic [1:0] resultsrcD;
logic memwriteD;
logic jumpD;
logic branchD;
logic [2:0] alucontrolD;
logic alusrcD;
//logic [1:0] immsrcD;

//--execute register signals--
logic regwriteE;
//logic [1:0] resultsrcE;
logic memwriteE;
logic jumpE;
logic branchE;
//logic [2:0] alucontrolE;
//logic alusrcE;
logic [1:0] immsrcE;

//--memory register signals--
//logic regwriteM;
logic [1:0] resultsrcM;
//logic memwriteM;

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
    .funct7b5(funct7b5),
    .aluop(aluop),
    .alucontrol(alucontrolD)
);

//--execute register--
floprc #(
    .WIDTH(10) 
)regE(
    .clk(clk),
    .rst(rst),
    .clear(flushE),
    .d({regwriteD,resultsrcD,memwriteD,jumpD,branchD,alucontrolD,alusrcD}),
    .q({regwriteE,resultsrcE,memwriteE,jumpE,branchE,alucontrolE,alusrcE})
);
assign pcsrcE = ((zeroE & branchE)|jumpE);

//--memory register--
flopr #(
    .WIDTH(4)
)regM(
    .clk(clk),
    .rst(rst),
    .d({regwriteE,resultsrcE,memwriteE}),
    .q({regwriteM,resultsrcM,memwriteM})
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