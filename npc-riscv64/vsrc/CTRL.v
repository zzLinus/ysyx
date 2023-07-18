module CTRLER (
		input [6:0] op_code,
		input [2:0] func3,
		input [63:0] reg1,
		input [63:0] reg2,
		output reg alu_src,
		output reg mem2reg,
		output reg spc2reg,
		output reg reg_w,
		output reg need_sext,
		output reg mem_w,
		output reg mem_r,
		output reg [1:0] alu_op,
		output reg [1:0] has_funct,
		output reg jump,
		output reg pc2imm
);

wire reg1_reg2_eq;
wire reg1_reg2_ne;
wire reg1_reg2_lt;
wire reg1_reg2_ge;
wire reg1_reg2_ltu;
wire reg1_reg2_geu;

assign reg1_reg2_eq = (reg1 == reg2);
assign reg1_reg2_ne = !reg1_reg2_eq;
assign reg1_reg2_lt = ($signed(reg1) < $signed(reg2));
assign reg1_reg2_ltu = (reg1 < reg2);
assign reg1_reg2_ge = ($signed(reg1) >= $signed(reg2));
assign reg1_reg2_geu = (reg1>= reg2);


// NOTE : alu_src 0 : reg_value
//                1 : imm_value
always @(*) begin
		case(op_code)
				7'b0000011 : begin // opcode for load word
						mem2reg   = 1'b1;
						has_funct = 2'b01;
						pc2imm    = 1'b0;
						spc2reg   = 1'b0;
						jump      = 1'b0;
						mem_w     = 1'b0;
						mem_r     = 1'b1;
						alu_src   = 1'b1;
						reg_w     = 1'b1;
						alu_op    = 2'b01;
						need_sext = 1'b0;
				end

				7'b0100011 : begin // opcode for store word
						mem2reg   = 1'b0;
						has_funct = 2'b01;
						pc2imm    = 1'b0;
						jump      = 1'b0;
						spc2reg   = 1'b0;
						mem_w     = 1'b1;
						mem_r     = 1'b0;
						alu_src   = 1'b1;
						reg_w     = 1'b0;
						alu_op    = 2'b00;
						need_sext = 1'b0;
				end

				7'b0010011 : begin // opcode for I-type Instruction
						mem2reg   = 1'b0;
						has_funct = 2'b01;
						pc2imm    = 1'b0;
						jump      = 1'b0;
						spc2reg   = 1'b0;
						mem_w     = 1'b0;
						mem_r     = 1'b0;
						alu_src   = 1'b1;
						reg_w     = 1'b1;
						alu_op    = 2'b00;
						need_sext = 1'b0;
				end

				7'b0110011 : begin // opcode for (R-type Instruction)
						mem2reg   = 1'b0;
						has_funct = 2'b11;
						pc2imm    = 1'b0;
						jump      = 1'b0;
						spc2reg   = 1'b0;
						mem_w     = 1'b0;
						mem_r     = 1'b0;
						alu_src   = 1'b0;
						reg_w     = 1'b1;
						alu_op    = 2'b10;
						need_sext = 1'b0;
				end

				7'b0010111 : begin // opcode for AUIPC
						mem2reg   = 1'b0;
						has_funct = 2'b00;
						pc2imm    = 1'b1;
						jump      = 1'b0;
						spc2reg   = 1'b0;
						mem_w     = 1'b0;
						mem_r     = 1'b0;
						alu_src   = 1'b1;
						reg_w     = 1'b1;
						alu_op    = 2'b10;
						need_sext = 1'b0;
				end
				
				7'b1101111 : begin // opcode for J-type insrtuction
						mem2reg   = 1'b0;
						has_funct = 2'b00;
						pc2imm    = 1'b1;
						jump      = 1'b1;
						spc2reg   = 1'b1;
						mem_w     = 1'b0;
						mem_r     = 1'b0;
						alu_src   = 1'b1;
						reg_w     = 1'b1;
						alu_op    = 2'b10;
						need_sext = 1'b0;
				end

				7'b1100111 : begin  // opcode for jalr
						mem2reg   = 1'b0;
						has_funct = 2'b01;
						pc2imm    = 1'b0;
						jump      = 1'b1;
						spc2reg   = 1'b1;
						mem_w     = 1'b0;
						mem_r     = 1'b0;
						alu_src   = 1'b0;
						reg_w     = 1'b1;
						alu_op    = 2'b10;
						need_sext = 1'b0;
				end

				7'b0111011 : begin // opcode for addw (R-type instruction)
						mem2reg   = 1'b0;
						has_funct = 2'b11;
						pc2imm    = 1'b0;
						jump      = 1'b0;
						spc2reg   = 1'b0;
						mem_w     = 1'b0;
						mem_r     = 1'b0;
						alu_src   = 1'b0; // NOTE: alu_src(0=>reg_value ,1=>imm_value)
						reg_w     = 1'b1;
						alu_op    = 2'b10;
						need_sext = 1'b1;
				end

				7'b0011011 : begin    // NOTE: ADDIW
						mem2reg   = 1'b0;
						has_funct = 2'b01;
						pc2imm    = 1'b0;
						jump      = 1'b0;
						spc2reg   = 1'b0;
						mem_w     = 1'b0;
						mem_r     = 1'b0;
						alu_src   = 1'b1;
						reg_w     = 1'b1;
						alu_op    = 2'b10;
						need_sext = 1'b1;
				end

				7'b1100011 : begin // TODO: opcode for conditional branch instruction
						mem2reg   = 1'b0;
						has_funct = 2'b01;
						pc2imm    = 1'b1;
						case(func3)
								3'b000 : jump = {reg1_reg2_eq  ? 1'b1 : 1'b0}; // BEQ
								3'b001 : jump = {reg1_reg2_ne  ? 1'b1 : 1'b0}; // BNE
								3'b100 : jump = {reg1_reg2_lt  ? 1'b1 : 1'b0}; // BLT
								3'b101 : jump = {reg1_reg2_ge  ? 1'b1 : 1'b0}; // BGE
								3'b110 : jump = {reg1_reg2_ltu ? 1'b1 : 1'b0}; // BLTU
								3'b111 : jump = {reg1_reg2_geu ? 1'b1 : 1'b0}; // BGEU
								default : jump = 0;
						endcase
						spc2reg   = 1'b0;
						mem_w     = 1'b0;
						mem_r     = 1'b0;
						alu_src   = 1'b1;
						reg_w     = 1'b0;
						alu_op    = 2'b10;
						need_sext = 1'b0;
				end

				default    : begin // set all signal to 0
						mem2reg   = 1'b0;
						has_funct = 2'b00;
						pc2imm    = 1'b0;
						jump      = 1'b0;
						spc2reg   = 1'b0;
						mem_w     = 1'b0;
						mem_r     = 1'b0;
						alu_src   = 1'b0;
						reg_w     = 1'b0;
						alu_op    = 2'b00;
						need_sext = 1'b0;
				end
		endcase

		$display("\n** CTRL Module **");
		$display("reg1  %d", reg1);
		$display("reg2  %d", reg2);

		$display("alu_src %d", alu_src);
		$display("mem2reg %d", mem2reg);
		$display("spc2reg %d", spc2reg);
		$display("reg_w   %d", reg_w);
		$display("mem_w   %d", mem_w);
		$display("mem_r   %d", mem_r);
		$display("alu_op  %d", alu_op);

		$display("has_fucnt : %d",has_funct);
		$display("pc2imm    : %d",pc2imm);
		$display("jump      : %d",jump);
end

endmodule
