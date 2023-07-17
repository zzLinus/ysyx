module IFU (
		input clk,
		input [63:0] pc,
		output reg [63:0] inst
);

always @ (posedge clk) begin
		pmem_read(pc, inst);

    $display("\n** FETCH Module **");
    $display("pc : %x",pc);
    $display("inst : %x",inst);
end

endmodule;
