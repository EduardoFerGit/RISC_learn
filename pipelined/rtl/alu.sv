module alu #(
    parameter WIDTH = 32
)(
    input logic [WIDTH-1:0] a, b,
    input logic [2:0] f,
    output logic [WIDTH-1:0] y,
    output logic zero
);

always @(f,a,b)
    begin
        case(f)

        0: y <= a & b;

        1: y <= a | b;

        2: y <= a + b;

        6: y <= a + (~b + 1);

        7: begin
            if (a[31] != b[31]) begin
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