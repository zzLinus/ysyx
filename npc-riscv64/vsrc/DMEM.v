module DMEM(
		input mem_w_EN,
		input mem_r_EN,
		input [63:0] addr,
		input [63:0] write_data,
		output [63:0] mem_out
);

// NOTE : e.g addr : 0x80008ff0 -> sd 64 bits
//        --> memory[addr[15:0] >> 6] <= write_data
//        --> memory[addr[15:6]] <= write_data

reg [63:0] memory [575:0]; // stack top -> 0x80009000
int i;

initial begin
		for(i=0; i<565; i=i+1) begin
				memory[i] = 64'b0;
		end
end

always @(*) begin
		if(mem_w_EN)
				memory[addr[15:6]] <= write_data;
end

assign mem_out = mem_r_EN ? memory[addr[15:6]] : 64'b0;

endmodule
