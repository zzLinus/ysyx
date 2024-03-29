module DMEM (
		input clk,
		input mem_w_EN,
		input mem_r_EN,
		input [2:0] funct3,
		input [63:0] addr,
		input [63:0] write_data,
		output reg [63:0] mem_out
);

// NOTE : e.g addr : 0x80008ff0 -> sd 64 bits
//        --> memory[addr[15:0] >> 6] <= write_data
//        --> memory[addr[15:6]] <= write_data

// 00054503
// 0000 0000 0000 01010 100 01010 0000011

reg [63:0] tmp;
always @(addr or mem_w_EN or mem_r_EN or edge clk) begin
		if(mem_w_EN) begin
			case(funct3)
				3'b000: pmem_write(addr, write_data, 8'h1);
				3'b001: pmem_write(addr, write_data, 8'h2);
				3'b010: pmem_write(addr, write_data, 8'hf);
				default: pmem_write(addr, write_data, 8'hff); // 64 bit don't need extend
			endcase
				
		end
		if(mem_r_EN == 1'b1) begin
				pmem_read(addr, tmp);
			case(funct3)
				3'b000: mem_out = {tmp[7]  ? {56{1'b1}} : 56'b0, tmp[7:0]};
				3'b001: mem_out = {tmp[15] ? {48{1'b1}} : 48'b0, tmp[15:0]};
				3'b010: mem_out = {tmp[31] ? {32{1'b1}} : 32'b0, tmp[31:0]};
				3'b100: mem_out = {56'b0, tmp[7:0]};
				3'b101: mem_out = {48'b0, tmp[15:0]};
				3'b110: mem_out = {32'b0, tmp[31:0]};
				default: mem_out = tmp; // 64 bit don't need extend
			endcase
		end
		else mem_out= 64'b0;
		$display("\n** DMEM Module **");
		$display("mem_r_EN %x", mem_r_EN);
		$display("addr     %x", addr);
		$display("tmp      %x", tmp);
		$display("mem_out  %x", mem_out);
end

endmodule
