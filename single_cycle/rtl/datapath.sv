module datapath #(
    parameter WIDTH = 32,
    parameter PCWIDTH = 8 // for imem addresses
)(
    //sig for control unit
    input logic clk,
    input logic rst,
    input logic jump,
    input logic regwrite,
    input logic regdst,
    input logic memtoreg,
    input logic memwrite,
    input logic [2:0] alucontrol,
    input logic pcsrc, alusrc,
    output logic [5:0] op, funct,
    output logic zero,

    //sig for memory
    input logic [WIDTH-1:0] instruction,
    output logic [PCWIDTH-1:0] currentpc,//input for imem
    output logic [WIDTH-1:0] aluresult,
    output logic [WIDTH-1:0] regout2, // input for datamemory WD
    input logic [WIDTH-1:0] datamemout
);

logic [WIDTH-1:0] pcplus4;
logic [PCWIDTH-1:0] branchmuxout, jumpmuxout;
logic [WIDTH-1:0] pcbranchout;
logic [4:0] wa3;
logic [WIDTH-1:0] immext, ls2out;
logic [WIDTH-1:0] regout1, alumuxout;
logic [WIDTH-1:0] writedatareg;

logic [WIDTH-1:0] currentpc_32;
assign currentpc_32 = {24'b0, currentpc};

logic [WIDTH-1:0] pcjump,jumpls2out;
assign pcjump = {pcplus4[31:28],jumpls2out[27:0]};

assign op = instruction[31:26];
assign funct = instruction[5:0];


//-------------------------------//
//PROGRAM COUNTER MODULES "fetch"//
//-------------------------------//
dflopr #(
    .WIDTH(PCWIDTH)
)pc(
    .clk(clk),
    .rst(rst),
    .d(jumpmuxout),
    .q(currentpc)
);
// instruction_mem #(
//     .WIDTH(PCWIDTH)
// )imem(
//     .a(currentpc[7:2]),
//     .rd(instruction)
// );
adder #(
    .WIDTH(WIDTH)
)pcplus4_inst(
    .a(currentpc_32),
    .b(4),
    .y(pcplus4)
);
mux2_1 #(
    .WIDTH(PCWIDTH)
)branchmux(
    .a(pcplus4[7:0]),
    .b(pcbranchout[7:0]),
    .sel(pcsrc),
    .y(branchmuxout)
);
mux2_1 #(
    .WIDTH(PCWIDTH)
)jumpmux(
    .a(branchmuxout),
    .b(pcjump[7:0]),
    .sel(jump),
    .y(jumpmuxout)
);

//------------------------------//
//REGISTER FILE MODULES "decode"//
//------------------------------//
regfile #(
    .WIDTH(WIDTH)
)rf(
    .clk(clk),
    .we3(regwrite),
    .ra1(instruction[25:21]),
    .ra2(instruction[20:16]),
    .wa3(wa3),
    .wd3(writedatareg),
    .rd1(regout1),
    .rd2(regout2)
);
mux2_1 #(
    .WIDTH(5)
)wregmux(
    .a(instruction[20:16]),
    .b(instruction[15:11]),
    .sel(regdst),
    .y(wa3)
);
signext #(
    .WIDTH(16),
    .OUTWIDTH(WIDTH)
)se(
    .a(instruction[15:0]),
    .y(immext)
);

//---------------------//
//ALU MODULES "execute"//
//---------------------//
alu #(
    .WIDTH(WIDTH)
)alu(
    .a(regout1),
    .b(alumuxout),
    .f(alucontrol),
    .y(aluresult),
    .zero(zero)
);
mux2_1 #(
    .WIDTH(WIDTH)
)alumux(
    .a(regout2),
    .b(immext),
    .sel(alusrc),
    .y(alumuxout)
);
ls2 #(
    .WIDTH(WIDTH)
)signextls2(
    .a(immext),
    .y(ls2out)
);
adder #(
    .WIDTH(WIDTH)
)pcbranch(
    .a(ls2out),
    .b(pcplus4),
    .y(pcbranchout)
);
ls2 #(
    .WIDTH(WIDTH)
)jumpls2_inst(
    .a({6'b0,instruction[25:0]}),
    .y(jumpls2out)
);

//--------------------------------//
//DATA MEMORY MODULES "write back"//
//--------------------------------//
mux2_1 #(
    .WIDTH(WIDTH)
)resultmux(
    .a(aluresult),
    .b(datamemout),
    .sel(memtoreg),
    .y(writedatareg)
);

endmodule
