// module decoder24(
// 	input [1:0] x,
// 	input EN,
// 	output reg [3:0] y
// );
//
//
// always @(x or EN)
// 	if (EN)
// 	begin // if you want to use multiplu satement in if,you need to use degin && end
// 		case (x)
// 			2'd0 : y = 4'b0001;  // input = 0b0000
// 			2'd1 : y = 4'b0010;  // input = 0b0001
// 			2'd2 : y = 4'b0100;  // input = 0b0010
// 			2'd3 : y = 4'b1000;  // input = 0b0011
// 		endcase
// 	end
// 	else y = 4'b0000;
//
// endmodule

module decoder38(
	input [2:0] x,
	input EN,
	output reg [7:0] y
);

localparam  [2:0] integer i;

always @(x or EN)
	if(EN) begin 
		for( i = 0; i <= 7; i = i+1 )
			if(x == i) // x is 3 bits number range from 0-7
				y[i] = 1;
			else 
				y[i] = 0;
		end
	else
		y = 8'b00000000;

endmodule
