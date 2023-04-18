module RF(
	input clk,
	input rst,
	input reg_w_EN, // register write enable
	input [4:0] ra,
	input [4:0] rb,
	input [4:0] rw,
	input [63:0] rw_data,
	output [63:0] ra_data,
	output [63:0] rb_data 
);

reg [63:0] regs [31:0];
int i;

always @(negedge clk, posedge rst) begin
		if(rst) begin
				for(i=0;i<31;i=i+1)
						regs[i] = 64'b0;
		end
		else begin
				if(reg_w_EN && (rw != 0)) regs[rw] = rw_data;
		end
		$display("\n** RF Module : **");
		$display("reg_w_EN :  %d", reg_w_EN);
		$display("ra       : %d %x", ra, ra);
		$display("rb       : %d %x", rb, rb);
		$display("rw       : %d %x", rw, rw);
		$display("rw_dta   : %d %x", rw_data, rw_data);
		for(i=0;i<31;i=i+1)
				$display("reg num %d value : %d %x",i,regs[i],regs[i]);
end

assign ra_data = regs[ra];
assign rb_data = regs[rb];

endmodule;
