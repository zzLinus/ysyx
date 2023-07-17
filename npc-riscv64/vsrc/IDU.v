import "DPI-C" function void stop_npc();
import "DPI-C" function void break_npc();

module IDU(
	input clk,
	input [31:0] inst,
	output [4:0] ra,
	output [4:0] rb,
	output [4:0] rw,
	output [6:0] opcode,
	output [6:0] funct7,
	output [2:0] funct3,
	output reg [63:0] imm
);
//  opcode : 0x3b  0111011
//  opcode : 0x33  0110011

always @(inst) begin
    case(inst[6:0])
        // I type instruction
        7'b0000011 : imm = {inst[31] ? {52{1'b1}} : 52'b0, inst[31:20]};
        // I type instruction
        7'b0010011 : imm = {inst[31] ? {52{1'b1}} : 52'b0, inst[31:20]};
        // STORE instruction
        7'b0100011 : imm = {inst[31] ? {52{1'b1}} : 52'b0, inst[31:25], inst[11:7]};
        // AUIPC
        7'b0010111 : imm = {32'b0, {inst[31:12], 12'b0}};
        // J-type instruction
        7'b1101111 : imm = {inst[31] ? {43{1'b1}} : 43'b0, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
        // jalr
        7'b1100111 : imm = {inst[31] ? {52{1'b1}} : 52'b0, inst[31:20]};
				// addw R-type instruction
				7'b0111011 : imm = {64'b0};
				// sub R-type instruction
				7'b0110011 : imm = {64'b0};
				// Conditional Branches (B-type instruction)
				7'b0011011 : imm = {inst[31] ? {52{1'b1}} : 52'b0, inst[31:20]};
				7'b1100011 : imm = {inst[31] ? {51{1'b1}} : 51'b0, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};

        7'b1110011 : stop_npc(); // ebreak
    default    : break_npc();
    endcase

    $display("\n** DECODE Module **");
    $display("opcode    : %d",opcode);
    $display("funct7    : %d",funct7);
    $display("funct3    : %d",funct3);
    $display("imm       : %d",imm);
end

assign ra = inst[19:15]; // rs1
assign rb = inst[24:20]; // rs2
assign rw = inst[11:7];  // rd
assign opcode = inst[6:0];
assign funct7 = inst[31:25];
assign funct3 = inst[14:12];

endmodule;
