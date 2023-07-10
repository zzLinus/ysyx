module DMEM (
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

reg [63:0] tmp;
always @(addr) begin
		if(mem_w_EN) pmem_write(addr, write_data, 8'b1);
		if(mem_r_EN == 1'b1) begin
				$display("pmem read fuck!");
				pmem_read(addr, tmp);
			case(funct3)
				3'b000: mem_out = {tmp[7]  ? {56{1'b1}} : 56'b0, tmp[7:0]};
				3'b001: mem_out = {tmp[15] ? {48{1'b1}} : 48'b0, tmp[15:0]};
				3'b010: mem_out = {tmp[31] ? {32{1'b1}} : 32'b0, tmp[31:0]};
				3'b011: mem_out = tmp;
				default: mem_out = 64'b0;
			endcase
		end
		else mem_out= 64'b0;
		$display("\n** DMEM Module **");
		$display("mem_r_EN %x", mem_r_EN);
		$display("addr     %x", addr);
		$display("mem_out  %x", mem_out);
end

endmodule
