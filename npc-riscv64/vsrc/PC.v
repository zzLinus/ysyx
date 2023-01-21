module PC #(
	BITS = 64,
	DELTA = 1,
	BASE = 0
)(
	input clk,
	input w_en,
	input rst,
	input [BITS-1:0] pc_j,
	output reg [BITS-1:0] pc_out
);

always @ (posedge clk) begin
	if (rst) pc_out <= BASE;
	else begin
		if (w_en) pc_out <= pc_j;
		else pc_out <= pc_out + DELTA;
	end
end

endmodule;
