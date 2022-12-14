module lookup_table(
	input [7:0] key_code,
	output [7:0] ascii_code
);

reg [7:0] ascii;
reg pressing = 1'b0;

always @(key_code) begin
	if(key_code == 8'hf0)
		pressing = !pressing;
	case(key_code)
			8'h15 : ascii = 8'h51;
			8'h1d : ascii = 8'h57;
			8'h24 : ascii = 8'h45;
			8'h2d : ascii = 8'h52;
			8'h2c : ascii = 8'h54;
			8'h35 : ascii = 8'h59;
			8'h3c : ascii = 8'h55;
			8'h43 : ascii = 8'h49;
			8'h44 : ascii = 8'h4f;
			8'h4d : ascii = 8'h50;
			8'h54 : ascii = 8'h5b;
			8'h5b : ascii = 8'h5d;
			8'h1c : ascii = 8'h41;
			8'h1b : ascii = 8'h53;
			8'h23 : ascii = 8'h44;
			8'h2b : ascii = 8'h46;
			8'h34 : ascii = 8'h47;
			8'h33 : ascii = 8'h48;
			8'h3b : ascii = 8'h4a;
			8'h42 : ascii = 8'h4b;
			8'h4b : ascii = 8'h4c;
			8'h4c : ascii = 8'h3b;
			8'h52 : ascii = 8'h22;
			8'h1a : ascii = 8'h5a;
			8'h22 : ascii = 8'h58;
			8'h21 : ascii = 8'h43;
			8'h2a : ascii = 8'h56;
			8'h32 : ascii = 8'h42;
			8'h31 : ascii = 8'h4e;
			8'h3a : ascii = 8'h4d;
			8'h41 : ascii = 8'h2c;
			8'h49 : ascii = 8'h2e;
			8'h4a : ascii = 8'h2f;
			8'h29 : ascii = 8'h20;
			8'h5a : ascii = 8'ha9;
			8'h16 : ascii = 8'h21;
			8'h66 : ascii = 8'h7f;
			default: ascii = 8'h00;
	endcase
	if(!pressing)
		ascii = 8'h00;
end



assign ascii_code = ascii;

endmodule
