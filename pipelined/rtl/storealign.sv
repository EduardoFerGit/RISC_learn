module storealign #(
    parameter WIDTH = 32
)(
    input  logic [31:0] rs2,    // Original register data
    input  logic [1:0]  addr,       // ALUResult[1:0]
    input  logic [2:0]  funct3,     // Instruction type
    input  logic        memwrite,   // 1-bit signal from Control Unit
    output logic [3:0]  we4,        // 4-bit enable to RAM
    output logic [31:0] data4       // Shifted data to RAM
);

    always_comb begin
        // Default: No writing, no data
        we4 = 4'b0000;
        data4 = 32'b0;

        if (memwrite) begin
            case (funct3)
                3'b000: begin // SB (Store Byte)
                    case (addr)
                        2'b00: begin we4 = 4'b0001; data4[7:0] = rs2[7:0]; end
                        2'b01: begin we4 = 4'b0010; data4[15:8] = rs2[7:0]; end
                        2'b10: begin we4 = 4'b0100; data4[23:16] = rs2[7:0]; end
                        2'b11: begin we4 = 4'b1000; data4[31:24] = rs2[7:0]; end
                    endcase
                end
                
                3'b001: begin // SH (Store Halfword)
                    if (addr[1]) begin 
                        we4 = 4'b1100; data4[31:16] = rs2[15:0]; 
                    end else begin 
                        we4 = 4'b0011; data4[15:0]  = rs2[15:0]; 
                    end
                end
                
                3'b010: begin // SW (Store Word)
                    we4 = 4'b1111;
                    data4 = rs2;
                end
                
                default: begin we4 = 4'b0000; data4 = rs2; end
            endcase
        end
    end
endmodule