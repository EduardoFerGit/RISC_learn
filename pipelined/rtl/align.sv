module align #(
    parameter WIDTH = 32
)(
    input logic [WIDTH-1:0] a,
    input logic [2:0] funct3,
    input logic [1:0] addr,
    output logic [WIDTH-1:0] y
);

always_comb begin
    case(funct3) 
        3'b000: begin //lb
            case(addr)
                2'b00: y = {{24{a[7]}},a[7:0]}; //byte 0
                2'b01: y = {{24{a[15]}},a[15:8]}; //byte1
                2'b10: y = {{24{a[23]}},a[23:16]}; //byte2
                2'b11: y = {{24{a[31]}},a[31:24]}; //byte3
            endcase
        end 
        3'b001: begin //lh
            case(addr[1])
                1'b0: y = {{16{a[15]}},a[15:0]}; //lower half
                1'b1: y = {{16{a[31]}},a[31:16]}; //upper half
            endcase
        end
        3'b010: y = a; //lw
        3'b100: begin //lb(unsigned)
            case(addr)
                2'b00: y = {24'b0,a[7:0]}; //byte 0
                2'b01: y = {24'b0,a[15:8]}; //byte1
                2'b10: y = {24'b0,a[23:16]}; //byte2
                2'b11: y = {24'b0,a[31:24]}; //byte3
            endcase
        end  
        3'b101: begin //lh(unsigned)
            case(addr[1])
                1'b0: y = {16'b0,a[15:0]}; //lower half
                1'b1: y = {16'b0,a[31:16]}; //upper half
            endcase
        end
        default: y = a;
    endcase
end
endmodule