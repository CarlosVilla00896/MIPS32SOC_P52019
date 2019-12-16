module MemDecoder(
    input memWrite,
    input memRead,
    input [31:0] virtualAddress,
    output [12:0] physicalAddress, 
    output [2:0] memEn,
    output [1:0] memBank,
    output invalidAddress   
);

reg [12:0] _physicalAddress;
reg _invalidAddress;
reg [31:0] temp;
reg [2:0] _memEn;
reg [1:0] _memBank;

assign physicalAddress = _physicalAddress;
assign invalidAddress = _invalidAddress;
assign memEn = _memEn;
assign memBank = _memBank;

always @ (*)
begin
    _memBank = 0;
    _memEn = 0;
    _invalidAddress = 0;
   // _physicalAddress = 13'h0;

    if(memWrite || memRead)
        begin
            if(virtualAddress >=32'h10010000 && virtualAddress <= 32'h10010FFF)
                begin
                    temp = virtualAddress -  32'h10010000;
                    _physicalAddress = temp[12:0];
                    _memEn = 3'b001;
                    _memBank = 2'b00;
                    _invalidAddress = 1'b0;
                end
            else if(virtualAddress >= 32'h7FFFEFFC && virtualAddress <= 32'h7FFFFFFB)
                begin
                    temp = virtualAddress - 32'h7FFFEFFC;
                    _physicalAddress = temp[12:0];
                    _memEn = 3'b001;
                    _memBank = 2'b00;
                    _invalidAddress = 1'b0;
                end
            else if(virtualAddress >= 32'hB800 && virtualAddress <= 32'hCACF)
                begin
                    temp = virtualAddress - 32'hB800;
                    _physicalAddress = temp[12:0];
                    _memEn = 3'b010;
                    _memBank = 2'b01;
                    _invalidAddress = 1'b0;
                end
            else if(virtualAddress >= 32'hFFFF0000 && virtualAddress <= 32'hFFFF000C)
                begin
                    temp = virtualAddress - 32'hFFFF0000;
                    _physicalAddress = temp[12:0];
                    _memEn = 3'b100;
                    _memBank = 2'b10;
                    _invalidAddress = 1'b0;
                end
            else
                begin
                    _physicalAddress = 13'h0;
                    _memEn = 3'b0;  
                    _memBank = 2'b0;  
                    _invalidAddress = 1'b1;
                end
        end        
end

endmodule