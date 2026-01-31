module regfilep #(
    parameter WIDTH = 32
)(
    input  logic        clk,
    input  logic        we3,           // Write Enable
    input  logic [4:0]  ra1, ra2, wa3, // Read addresses 1 & 2, Write address
    input  logic [WIDTH-1:0] wd3,           // Write Data 
    output logic [WIDTH-1:0] rd1, rd2       // Read Data 1 & 2
);

    // 1. Storage: An array of 32 registers, each 32 bits wide
    logic [31:0] rf [31:0];

    // 2. Write Logic: Only happens on the rising edge of the clock
    always_ff @(negedge clk) begin
        if (we3) begin
            rf[wa3] <= wd3;
        end
    end

    // 3. Read Logic is combinational
    // If address is 0, output 0. Otherwise, output the register value. Register 0 is tied to value of 0
    assign rd1 = (ra1 != 0) ? rf[ra1] : 0;
    assign rd2 = (ra2 != 0) ? rf[ra2] : 0;

endmodule