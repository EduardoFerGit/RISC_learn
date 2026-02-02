module imem #(
    parameter WIDTH = 32
)(
    input logic [5:0] a,
    output logic [WIDTH-1:0] rd
);
    logic [WIDTH-1:0] RAM[63:0];
    initial begin
        $readmemh("memfile_p.dat",RAM);
    end
    assign rd = RAM[a];
endmodule