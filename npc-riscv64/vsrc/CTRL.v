module CTRLER (
		input [6:0] op_code,
		output reg alu_src,
		output reg mem2reg,
		output reg reg_w,
		output reg mem_w,
		output reg mem_r,
		output reg [1:0] alu_op
);

always @(*) begin
		case(op_code)
				7'b0000011 : begin // opcode for load word
						mem2reg = 1'b1;
						mem_w   = 1'b0;
						mem_r   = 1'b1;
						alu_src = 1'b1;
						reg_w   = 1'b1;
						alu_op  = 2'b01;
				end

				7'b0100011 : begin // opcode for store word
						mem2reg = 1'b0;
						mem_w   = 1'b0;
						mem_r   = 1'b0;
						alu_src = 1'b1;
						reg_w   = 1'b1;
						alu_op  = 2'b00;
				end

				7'b0010011 : begin // opcode for I-type Operation
						mem2reg = 1'b0;
						mem_w   = 1'b0;
						mem_r   = 1'b0;
						alu_src = 1'b1;
						reg_w   = 1'b1;
						alu_op  = 2'b00;
				end

				7'b0110011 : begin // opcode for R-type Operation
						mem2reg = 1'b0;
						mem_w   = 1'b0;
						mem_r   = 1'b0;
						alu_src = 1'b0;
						reg_w   = 1'b1;
						alu_op  = 2'b10;
				end

				7'b0010111 : begin // opcode for AUIPC
						mem2reg = 1'b0;
						mem_w   = 1'b0;
						mem_r   = 1'b0;
						alu_src = 1'b1;
						reg_w   = 1'b1;
						alu_op  = 2'b10;
				end

				default    : begin // set all signal to 0
						mem2reg = 1'b0;
						mem_w   = 1'b0;
						mem_r   = 1'b0;
						alu_src = 1'b0;
						reg_w   = 1'b0;
						alu_op  = 2'b00;
				end
		endcase
		$display("\n** CTRL Module **");
		$display("alu_src %d", alu_src);
		$display("mem2reg %d", mem2reg);
		$display("reg_w %d", reg_w);
		$display("mem_w %d", mem_w);
		$display("mem_r %d", mem_r);
		$display("alu_op %d", alu_op);
end

endmodule
