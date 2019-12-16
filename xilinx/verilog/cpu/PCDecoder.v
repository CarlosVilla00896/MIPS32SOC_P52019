module PCDecoder(
    input [31:0] virtualPC,
    output [12:0] physicalPC,
    output invalidPC
);
reg [12:0] _physicalPC;
reg _invalidPC;
reg [31:0] temp;

assign physicalPC = _physicalPC;
assign invalidPC = _invalidPC;

always @(virtualPC) begin
    _invalidPC = 1'b0;
    //_physicalPC = 13'h0;
    if (virtualPC >= 32'h400000 && virtualPC <= 32'h401fff)
        begin
            temp = virtualPC - 32'h400000;
            _physicalPC = temp[12:0];
            _invalidPC = 1'b0;
        end
    else 
        begin
         //   _physicalPC = 13'd0;
            _invalidPC =  1'b1;
        end
end
endmodule