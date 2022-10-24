module adder (
	input c,
	input a,
	input b,
	output reg s,
	output reg c_out
);

reg tmp = (a|b)&(~(a&b));
assign s = (tmp|c)&(~(tmp&c));
assign c_out = (a&b)|(c&tmp);

endmodule
