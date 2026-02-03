module datapath #(
    parameter WIDTH = 32
)(
    input logic clk, rst,
    
    //--fetch stage--
    input logic pcsrcE,
    input logic stallF,
    input logic [WIDTH-1:0] instrF,

    output logic  [WIDTH-1:0] pcF,

    //--decode stage--
    input logic [1:0] immsrcD,
    input logic stallD, flushD,
    input logic regwriteW,

    output logic [6:0] op,
    output logic [2:0] funct3,
    output logic [6:0] funct7,

    output logic [4:0] rs1D,
    output logic [4:0] rs2D,

    //--execute stage--
    input logic flushE,
    input logic [1:0] forwardAE,
    input logic [1:0] forwardBE,
    input logic [2:0] alucontrolE,
    input logic alusrcE,

    output logic [4:0] rs1E,
    output logic [4:0] rs2E,
    output logic [4:0] rdE,
    output logic zeroE,

    //--memory stage--
    input logic [WIDTH-1:0] readdataM,

    output logic [WIDTH-1:0] aluresultM,
    output logic [WIDTH-1:0] writedataM,
    output logic [4:0] rdM,

    //--writeback stage--
    input logic [1:0] resultsrcW,
    output logic [4:0] rdW  
);
//----internal signals----
//--fetch stage--
logic [WIDTH-1:0] pcnextF;
logic [WIDTH-1:0] pcplus4F;//reg

//--decode stage--
logic [WIDTH-1:0] instrD;
logic [WIDTH-1:0] rd1D, rd2D; //reg
logic [4:0] rdD;
logic [WIDTH-1:0] pcD; //reg
logic [WIDTH-1:0] immextD; //reg
logic [WIDTH-1:0] pcplus4D; //reg

//--execute stage--
logic [WIDTH-1:0] rd1E, rd2E, pcE, immextE;
logic [WIDTH-1:0] pcplus4E;//reg
logic [WIDTH-1:0] srcaE, srcbE;
logic [WIDTH-1:0] fmuxbout;
logic [WIDTH-1:0] writedataE;//reg
logic [WIDTH-1:0] pctargetE;
logic [WIDTH-1:0] aluresultE;//reg

//--memory stage--
logic [WIDTH-1:0] pcplus4M;

//--writeback stage--
logic [WIDTH-1:0] aluresultW, readdataW, pcplus4W;
logic [WIDTH-1:0] resultW;


//----internal blocks----
//fetch stage
mux2 #(
    .WIDTH(WIDTH)
)pcmux(
    .a(pcplus4F),
    .b(pctargetE),
    .sel(pcsrcE),
    .y(pcnextF)
);
flopenr #(
    .WIDTH(WIDTH)
)pc(
    .clk(clk),
    .rst(rst),
    .en(~stallF),
    .d(pcnextF),
    .q(pcF)
);
adder #(
    .WIDTH(WIDTH)
)adderF(
    .a(pcF),
    .b(4),
    .y(pcplus4F)
);

//--decode stage--

flopenrc #(
    .WIDTH(WIDTH)
)regD1(
    .clk(clk),
    .rst(rst),
    .en(~stallD),
    .clear(flushD),
    .d(instrF),
    .q(instrD)
);
assign op = instrD[6:0];
assign funct3 = instrD[14:12];
assign funct7 = instrD[31:25];

assign rs1D = instrD[19:15];
assign rs2D = instrD[24:20];
assign rdD = instrD[11:7];

flopenrc #(
    .WIDTH(WIDTH)
)regD2(
    .clk(clk),
    .rst(rst),
    .en(~stallD),
    .clear(flushD),
    .d(pcF),
    .q(pcD)
);
flopenrc #(
    .WIDTH(WIDTH)
)regD3(
    .clk(clk),
    .rst(rst),
    .en(~stallD),
    .clear(flushD),
    .d(pcplus4F),
    .q(pcplus4D)
);
regfilep #(
    .WIDTH(WIDTH)
)rf(
    .clk(~clk),
    .we3(regwriteW),
    .ra1(instrD[19:15]),
    .ra2(instrD[24:20]),
    .wa3(rdW),  //rdW
    .wd3(resultW),  //resultW
    .rd1(rd1D),
    .rd2(rd2D)
);
extend #(
    .OUTWIDTH(WIDTH)
)ext(
    .instr(instrD[31:7]),
    .immsrc(immsrcD),
    .immext(immextD)
);

//--execute stage--
floprc #(WIDTH) regE1(clk,rst,flushE,rd1D,rd1E);
floprc #(WIDTH) regE2(clk,rst,flushE,rd2D,rd2E);
floprc #(WIDTH) regE3(clk,rst,flushE,pcD,pcE);
floprc #(5) regE4(clk,rst,flushE,rs1D,rs1E);
floprc #(5) regE5(clk,rst,flushE,rs2D,rs2E);
floprc #(5) regE6(clk,rst,flushE,rdD,rdE);
floprc #(WIDTH) regE7(clk,rst,flushE,immextD,immextE);
floprc #(WIDTH) regE8(clk,rst,flushE,pcplus4D,pcplus4E);

mux3 #(
    .WIDTH(WIDTH)
)fmuxa(
    .a(rd1E),
    .b(resultW),//resultW
    .c(aluresultM),//aluresultM
    .sel(forwardAE),
    .y(srcaE)
);
mux3 #(
    .WIDTH(WIDTH)
)fmuxb(
    .a(rd2E),
    .b(resultW),//resultW
    .c(aluresultM),//aluresultM
    .sel(forwardBE),
    .y(fmuxbout)
);
assign writedataE = fmuxbout;
mux2 #(
    .WIDTH(WIDTH)
)alumux(
    .a(fmuxbout),
    .b(immextE),
    .sel(alusrcE),
    .y(srcbE)
);
adder #(
    .WIDTH(WIDTH)
)adderE(
    .a(pcE),
    .b(immextE),
    .y(pctargetE)
);
alu #(
    .WIDTH(WIDTH)
)alu(
    .a(srcaE),
    .b(srcbE),
    .f(alucontrolE),
    .y(aluresultE),
    .zero(zeroE)
);

//--memory stage--
flopr #(WIDTH)regM1(clk,rst,aluresultE,aluresultM);
flopr #(WIDTH)regM2(clk,rst,writedataE,writedataM);
flopr #(5)regM3(clk,rst,rdE,rdM);
flopr #(WIDTH)regM4(clk,rst,pcplus4E,pcplus4M);

//--writeback stage--
flopr #(WIDTH)regW1(clk,rst,aluresultM,aluresultW);
flopr #(WIDTH)regW2(clk,rst,readdataM,readdataW);
flopr #(5)regW3(clk,rst,rdM,rdW);
flopr #(WIDTH)regW4(clk,rst,pcplus4M,pcplus4W);

mux3 #(
    .WIDTH(WIDTH)
)resultmux(
    .a(aluresultW),
    .b(readdataW),
    .c(pcplus4W),
    .sel(resultsrcW),
    .y(resultW)

);
endmodule
