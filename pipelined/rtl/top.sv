module top #(
    parameter WIDTH = 32
)(
    input logic clk, rst,
    output logic [WIDTH-1:0] writedata, dataadr,
    output logic memwrite
);
pipelinedprocessor #(
    .WIDTH(WIDTH)
)riscv(
    
);


endmodule