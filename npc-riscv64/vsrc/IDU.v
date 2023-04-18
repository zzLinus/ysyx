import "DPI-C" function void stop_npc();

module IDU(
	input clk,
	input [31:0] inst,
	output reg pc2imm,
	output reg jump,
	output [4:0] ra,
	output [4:0] rb,
	output [4:0] rw,
	output [6:0] opcode,
	output [6:0] funct7,
	output [2:0] funct3,
	output reg [63:0] imm,
	output reg [1:0] has_funct
);


// TODO : move has_funct , pc2imm to CTRL Module
always @(inst) begin
		case(inst[6:0])
				// I type instruction
				7'b0000011 : begin
				imm       = {inst[31] ? {52{1'b1}} : 52'b0, inst[31:20]};
				has_funct = 2'b01;
				pc2imm    = 1'b0;
				jump      = 1'b0;
				end
				// I type instruction
				7'b0010011 : begin
				imm       = {inst[31] ? {52{1'b1}} : 52'b0, inst[31:20]};
				has_funct = 2'b01;
				pc2imm    = 1'b0;
				jump      = 1'b0;
				end
				// STORE instruction
				7'b0100011 : begin
				imm       = {inst[31] ? {52{1'b1}} : 52'b0, inst[31:25], inst[11:7]};
				has_funct = 2'b01;
				pc2imm    = 1'b0;
				jump      = 1'b0;
				end
				// AUIPC
				7'b0010111 : begin
				imm       = {32'b0, {inst[31:12], 12'b0}};
				has_funct = 2'b00;
				pc2imm    = 1'b1;
				jump      = 1'b0;
				end
				// J-type instruction
				7'b1101111 : begin
				imm       = {inst[31] ? {43{1'b1}} : 43'b0, inst[31], inst[19:12], inst[20], inst[30:21],1'b0};
				has_funct = 2'b00;
				pc2imm    = 1'b1;
				jump      = 1'b1;
				end
				7'b1110011 : stop_npc();
				default    : begin
				imm       = 64'b0;
				has_funct = 2'b00;
				pc2imm    = 1'b0;
				jump      = 1'b0;
				end
		endcase

		$display("\n** DECODE Module **");
		$display("opcode    : %d",opcode);
		$display("funct7    : %d",funct7);
		$display("funct3    : %d",funct3);
		$display("imm       : %d",imm);
		$display("has_fucnt : %d",has_funct);
end

assign ra = inst[19:15]; // rs1
assign rb = inst[24:20]; // rs2
assign rw = inst[11:7];  // rd
assign opcode = inst[6:0];
assign funct7 = inst[31:25];
assign funct3 = inst[14:12];

endmodule;
