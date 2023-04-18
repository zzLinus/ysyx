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

always @ (negedge clk) begin
	if (rst) pc_out = BASE;
	else begin 
			pc_out = (w_en) ? dpc : pc_out + DELTA;
	end

	$display("\n** PC Module **");
	$display("pc_out : 0x%x", pc_out);
end

endmodule;

