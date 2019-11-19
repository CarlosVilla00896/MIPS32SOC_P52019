module PCDecoder(
    input [31:0] virtualPC,
    output [9:0] physicalPC,
    output invalidPC
);
wire [31:0] virtualSubstraction;
assign physicalPC = virtualSubstraction[9:0];
assign virtualSubstraction = (virtualPC - 32'h400000)>>2;
assign invalidPC = ~(virtualPC >= 32'h400000 && virtualPC <= 32'h400fff);
endmodule