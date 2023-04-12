import "DPI-C" function void stop_npc();

module IDU(
	input clk,
	input inst,
	output [4:0] ra,
	output [4:0] rb,
	output [4:0] rw,
	output [6:0] opcode,
	output [6:0] funct7,
	output [2:0] funct3,
	output [19:0] imm
);

always @(inst) begin
		case(inst[6:0]) // TODO :generate imm number base on opcode
				7'b0000011 : imm = {};
				7'b0010011 : imm = {};
				7'b0100011 : imm = {};
				7'b0010111 : imm = {};
		endcase
end

assign ra = inst[19:15]; // rs1
assign rb = inst[24:20]; // rs2
assign rw = inst[11:7];  // rd
assign opcode = inst[6:0];
assign funct7 = inst[31:25];
assign funct3 = inst[14:12];

endmodule;
