module hazardunit (
    //fetch/decode
    input logic [4:0] rs1D, rs2D,
    //execute
    input logic [4:0] rs1E, rs2E, rdE,
    input logic [1:0] resultsrcE,
    input logic pcsrcE,
    //memory
    input logic [4:0] rdM,
    input logic regwriteM,
    //writeback
    input logic [4:0] rdW,
    input logic regwriteW,

    //fetch/decode
    output logic stallF,
    output logic stallD, flushD,
    //execute
    output logic flushE,
    output logic [1:0] forwardAE, forwardBE

);

//stall for lw
logic lwstall;
assign lwstall = (resultsrcE[0] & ((rs1D == rdE)|(rs2D == rdE)));
assign stallF = lwstall;
assign stallD = lwstall;

//flush for branch
assign flushD = pcsrcE;
assign flushE = lwstall|pcsrcE;

//data forwarding
always_comb begin
    forwardAE = 2'b00;
    forwardBE = 2'b00;
        if (((rs1E == rdM) & regwriteM) & (rs1E != 0))
            forwardAE = 2'b10;
        else if (((rs1E == rdW) & regwriteW) & (rs1E != 0)) 
            forwardAE = 2'b01;
    
        if (((rs2E == rdM) & regwriteM) & (rs2E != 0)) 
            forwardBE = 2'b10;
        else if (((rs2E == rdW) & regwriteW) & (rs2E != 0)) 
            forwardBE = 2'b01;
end
endmodule