module REG#(
	BITS = 1,
	RESET_VAL = 0
)(
	input clk,
	input rst,
	input [BITS-1:0] din,
	input wen, // write enable
	output reg [BITS-1:0] dout
);

always @(posedge clk) begin
	if (rst) dout <= RESET_VAL;
	else if (wen) dout <= din;
end

endmodule
