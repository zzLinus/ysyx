module PC #(
	BITS = 64,
	DELTA = 4,
	BASE = 64'h80000000
)(
	input clk,
	input w_en,
	input rst,
	input [BITS-1:0] dpc,
	output reg [BITS-1:0] pc_out
);

always @ (posedge clk) begin
	if (rst) pc_out <= BASE;
	else pc_out <= (w_en) ? dpc : pc_out + DELTA;
end

endmodule;

