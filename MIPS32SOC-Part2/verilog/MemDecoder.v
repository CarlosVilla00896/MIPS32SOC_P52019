module MemDecoder(
    input memEnable,
    input [31:0] virtualAddress,
    output [10:0] physicalAddress, 
    output invalidAddress   
);

reg [10:0] _physicalAddress;
reg _invalidAddress;
reg [31:0] temp;
reg [31:0] temp2;

assign physicalAddress = _physicalAddress;
assign invalidAddress = _invalidAddress;

always @ (*)
begin
    if(memEnable)
        begin
            if(virtualAddress >=32'h10010000 && virtualAddress <= 32'h10010FFF)
                begin
                    temp = (virtualAddress -  32'h10010000)>>2;
                    _physicalAddress = temp[10:0];
                    _invalidAddress = 1'b0;
                end
            else if(virtualAddress >= 32'h7FFFEFFC && virtualAddress <= 32'h7FFFFFFB)
                begin
                    temp2 = (virtualAddress>>2);
                    _physicalAddress = temp2[10:0];
                    _invalidAddress = 1'b0;
                end
            else
                begin
                    _invalidAddress = 1'b1;
                    _physicalAddress = 11'hz;    
                end
        end
    else
        _invalidAddress = 0;
            
end

endmodule