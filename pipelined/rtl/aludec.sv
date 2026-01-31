
module aludec (
    input logic opb5,
    input logic [2:0] funct3,
    input logic funct7b5,
    input logic [1:0] aluop,
    output logic [2:0] alucontrol
);
logic rsub;
assign rsub = (funct7b5 & opb5);
always_comb
    case(aluop)
        2'b00: alucontrol = 3'b010; //add
        2'b01: alucontrol = 3'b110; //sub
        2'b11: alucontrol = 3'b111; //slt (slti)
        default:
            case(funct3)
                3'b000: if (rsub) begin 
                            alucontrol = 3'b110; //sub
                        end else begin
                            alucontrol = 3'b010; //add
                        end
                3'b111: alucontrol = 3'b000; //and
                3'b110: alucontrol = 3'b001; //or
                3'b010: alucontrol = 3'b111; //slt
                3'b001: alucontrol = 3'b100; //sll
                3'b101: alucontrol = 3'b101; //srl
                default: alucontrol = 3'bxxx; //invalid as of yet
            endcase
    endcase
endmodule