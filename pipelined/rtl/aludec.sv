
module aludec (
    input logic opb5,
    input logic [2:0] funct3,
    input logic [6:0] funct7,
    input logic [1:0] aluop,
    output logic [3:0] alucontrol
);
logic rsub;
logic funct7b5;
assign funct7b5 = funct7[5];
assign rsub = (funct7b5 & opb5);
always_comb
    case(aluop)
        2'b00: alucontrol = 2; //add
        2'b01: alucontrol = 6; //sub
        2'b11: alucontrol = 7; //slt (slti)
        default:
            case(funct3)
                3'b000: if (rsub) begin 
                            alucontrol = 6; //sub
                        end else begin
                            alucontrol = 2; //add
                        end
                3'b111: alucontrol = 0; //and
                3'b110: alucontrol = 1; //or
                3'b100: alucontrol = 3; //xor
                3'b010: alucontrol = 7; //slt
                3'b001: alucontrol = 4; //sll
                3'b101: if (rsub) begin 
                            alucontrol = 8; //sra
                        end else begin
                            alucontrol = 5; //srl
                        end 
                3'b011: alucontrol = 9;
                default: alucontrol = 4'bxxx; //invalid as of yet
            endcase
    endcase
endmodule