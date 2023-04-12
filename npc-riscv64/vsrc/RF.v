module RF(
	input clk,
	input rst,
	input reg_w_EN, // register write enable
	input [4:0] ra,
	input [4:0] rb,
	input [4:0] rw,
	input [31:0] rw_data,
	output [31:0] ra_data,
	output [31:0] rb_data 
);

reg [31:0] regs [31:0];
int i;

always @(negedge clk, posedge rst) begin
		if(rst) begin
				for(i=0;i<31;i=i+1)
						regs[i] = 32'b0;
		end
		else begin
				if(reg_w_EN) regs[rw] <= rw_data;
		end
		for(i=0;i<31;i=i+1)
				$display("reg num %d value : %d",i,regs[i]);
end

assign ra_data = regs[ra];
assign rb_data = regs[rb];

endmodule;
