module DMEM(
		input mem_w_EN,
		input mem_r_EN,
		input [8:0] addr,
		input [31:0] write_data,
		output [31:0] mem_out
);

reg [31:0] memory [127:0];
int i;

initial begin
		for(i=0; i<128; i=i+1)begin
				memory[i] = 32'b0;
		end
end

always @(*) begin
		if(mem_w_EN)
				memory[addr[6:0]] <= write_data;
end

assign mem_out = mem_r_EN ? memory[addr[6:0]] : 32'b0;

endmodule
