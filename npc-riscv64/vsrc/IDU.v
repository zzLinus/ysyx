import "DPI-C" function void stop_npc();

module IDU(
	input clk,
	input [31:0] inst,
	output [4:0] ra,
	output [4:0] rb,
	output [4:0] rw,
	output [6:0] opcode,
	output [6:0] funct7,
	output [2:0] funct3,
	output reg [31:0] imm
);

always @(inst) begin
		case(inst[6:0]) // FIXME :generate imm number base on opcode
				7'b0000011 : imm = {inst[31] ? {20{1'b1}} : 20'b0, inst[31:20]};
				7'b0010011 : imm = {inst[31] ? {20{1'b1}} : 20'b0, inst[31:20]};
				7'b0100011 : imm = {inst[31] ? {20{1'b1}} : 20'b0, inst[31:25], inst[11:7]};
				7'b0010111 : imm = {inst[31:12], 12'b0};
				7'b1110011 : stop_npc();
				default    : imm = 32'b0;
		endcase
end

assign ra = inst[19:15]; // rs1
assign rb = inst[24:20]; // rs2
assign rw = inst[11:7];  // rd
assign opcode = inst[6:0];
assign funct7 = inst[31:25];
assign funct3 = inst[14:12];

endmodule;
