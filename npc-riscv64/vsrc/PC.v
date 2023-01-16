module PC #(
	BITS = 64,
	DELTA = 1,
	BASE = 0
)(
	input clk,
	input en,
	input rst,
	output reg [BITS-1:0] ctr_out
);

always @ (posedge clk) begin
	if (rst) ctr_out <= BASE;
	else begin
		if (en) ctr_out <= ctr_out + DELTA;
	end
end

endmodule;
