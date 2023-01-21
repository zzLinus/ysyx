module IDU(
	input clk,
	input [31:0] inst,
	output reg regWr,
	output reg [4:0] ra,
	output reg [4:0] rb,
	output reg [4:0] rw,
	output reg [19:0] valC
);

reg [2:0] funct3;
reg [6:0] funct7;

always @(posedge clk) begin 
	case(inst[6:0])
		7'b0010011:begin
			rw = inst[11:7];
			funct3 = inst[14:12];
			ra = inst[19:15];
			rb = 5'b11111;
			valC[11:0] = inst[31:20];
			regWr = 1'b1;
		end
	default:;
	endcase
	$display("idu ra id : ",ra);
	$display("idu rb id : ",rb);
	$display("idu rw id : ",rw);
	$display("idu regWr : ",regWr);
	$display("idu valc  : ",valC);
end

endmodule;
