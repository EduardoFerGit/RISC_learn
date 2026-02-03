module alu #(
    parameter WIDTH = 32
)(
    input logic [WIDTH-1:0] a, b,
    input logic [3:0] f,
    output logic [WIDTH-1:0] y,
    output logic zero
);

always @(f,a,b)
    begin
        case(f)

        0: y <= a & b; //and rs1 & rs2

        1: y <= a | b; //or rs1 | rs2

        2: y <= a + b; //add rd = rs1 + rs2

        3: y <= a ^ b; //xor rs1 ˆ rs2

        4: y <= a >> b; //sll rs1 >> rs2

        5: y <= a << b; //srl rs1 << rs2

        6: y <= a + (~b + 1); //sub rs1 - rs2

        7: begin
            if (a[31] != b[31]) begin //slt
                    if (a[31] > b[31]) begin
                        y <= 1;
                    end else begin
                        y <= 0;
                    end
                end else begin
                    if (a < b)
                    begin
                        y <= 1;
                    end
                    else
                    begin
                        y <= 0;
                    end
                end
           end
        
        8: y <= a <<< b; //sra rs1 <<< rs2

        9: begin
            if (a < b) begin
                y <= 1;
            end else begin
                y <= 0;
            end
            end
	endcase
	end

    always @(y)
        begin
            if (y == 0) begin
                zero <= 1;
            end else begin
                zero <= 0;
            end
        end
endmodule