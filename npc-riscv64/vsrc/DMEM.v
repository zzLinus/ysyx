import "DPI-C" function void pmem_read(
		input  longint raddr,
		output longint rdata
);

import "DPI-C" function void pmem_write(
		input longint waddr,
		input longint wdata,
		input byte wmask
);

module DMEM (
		input mem_w_EN,
		input mem_r_EN,
		input [63:0] addr,
		input [63:0] write_data,
		output reg [63:0] mem_out
);

// NOTE : e.g addr : 0x80008ff0 -> sd 64 bits
//        --> memory[addr[15:0] >> 6] <= write_data
//        --> memory[addr[15:6]] <= write_data

always @(*) begin
		if(mem_w_EN) pmem_write(addr, write_data, 8'b1);
		$display("\n** DMEM Module **");
		$display("addr    %x", addr);
		$display("mem_out %x", mem_out);
		if(mem_r_EN) pmem_read(addr, mem_out);
		else mem_out= 64'b0;
end

endmodule
