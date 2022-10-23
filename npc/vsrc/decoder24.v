module decoder24(
	x,
	en,
	y
);

input [1:0] x;
input EN;
output [3:0] y;

always @(x or en)
	if (en)
	begin // if you want to use multiplu satement in if,you need to use degin && end
		case (x)
			2'd0 : y = 4'b0001;  // input = 0b0000
			2'd1 : y = 4'b0010;  // input = 0b0001
			2'd2 : y = 4'b0100;  // input = 0b0010
			2'd3 : y = 4'b1000;  // input = 0b0011
		endcase
	end
	else y = 4'b0000;

endmodule
