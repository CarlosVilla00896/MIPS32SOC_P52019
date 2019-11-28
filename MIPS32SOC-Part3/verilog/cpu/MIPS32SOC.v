/* verilator lint_off UNUSED */
module MIPS32SOC (
    input clk, // Clock signal
    input rst,  // Reset signal
    // output invAddr,
    // output [2:0] mEn
    output invalidOpcode
);
    wire [31:0] inst /*verilator public*/;
    reg  [31:0] nextPC; // Should be 'reg' because it used in a always block
    reg  [31:0] PC /*verilator public*/; // The PC (Program Counter) register
    wire [31:0] pcPlus4;
    wire [5:0] func;
    wire [4:0] rd /*verilator public*/;
    wire [4:0] rt /*verilator public*/;
    wire [4:0] rs /*verilator public*/;
    wire [5:0] opcode;
    wire aluSrc;
    wire rfWriteEnable; // Register File Write Enable
    wire rfWriteAddrSel; // Register File Write Address Select
    wire [1:0] rfWriteDataSel; // Register File Write Data Select
    wire [4:0] rfWriteAddr; // Register File Write Address
    reg  [31:0] rfWriteData; // Register File Write Data
    wire [31:0] rfData1 /*verilator public*/;
    wire [31:0] rfData2 /*verilator public*/;
    wire [31:0] imm32;
    wire [15:0] imm16;
    wire [7:0] memAddr;
    wire memWrite;
    wire memRead;
    wire [31:0] memData;
    wire [2:0] aluFunc;
    wire [31:0] aluOperand2;
    wire [31:0] aluResult;
    wire [31:0] branchTargetAddr;
    wire [31:0] jmpTarget32;
    wire isJmp /*verilator public*/;
    wire isBeq /*verilator public*/;
    wire isBne /*verilator public*/;
    wire isZero /*verilator public*/;
    wire bitXtend;
    wire invalidOpcode /*verilator public*/;
    reg isBranch; //sera 1 si hay alguna branch instruction
    wire invalidPC /*verilator public*/;
    wire [9:0] physicalPC;
    wire invalidAddr /*verilator public*/;
    wire [12:0] physicalAddress;
    wire [2:0] memEnable;
    wire [1:0] memoryBank;
    wire [1:0] memoryDataSize;
    wire memoryBitExt;
    wire isLui;
    wire [31:0] memoryEncoderWriteData;
    wire [3:0] memoryEncoderMemWrite; 
    wire [31:0] readDataVGA;
    reg [31:0] inData_memRDDecoder;
    wire [31:0] memoryDecoderWriteData;
    wire [2:0] red;
    wire [2:0] green;
    wire [1:0] blue;
    wire hsync;
    wire vsync;
  
    assign func = inst[5:0];
    assign rd = inst[15:11];
    assign rt = inst[20:16];
    assign rs = inst[25:21];
    assign opcode = inst[31:26];
    assign imm16 = inst[15:0];
    assign memAddr = aluResult[9:2];

    assign pcPlus4 = PC + 32'd4;
    assign jmpTarget32 = {pcPlus4[31:28], inst[25:0], 2'b00};
    assign branchTargetAddr = pcPlus4 + {imm32[29:0], 2'b00};

    assign rfWriteAddr = rfWriteAddrSel? rd : rt; // MUX
    assign aluOperand2 = aluSrc? imm32 : rfData2; // MUX
    
    //register file write data select
    always @ (*)
    begin
      if(isLui)
        rfWriteData = {imm16, 16'b0};
      else
        rfWriteData = rfWriteDataSel[0]? memoryDecoderWriteData : aluResult;
    end

    //Memory Bank, indicates the memory bank to acces
    always @ (*)
      begin
        case (memoryBank)
          2'd0: inData_memRDDecoder = memData;
          2'd1: inData_memRDDecoder = readDataVGA;
          2'd2: inData_memRDDecoder = 32'h0;
          2'd3: inData_memRDDecoder = 32'h0;
          default: inData_memRDDecoder = 32'hx;
        endcase
      end
    
    //En este always verifico si hay alguna instruccion del tipo branch
    always @(isBeq, isBne, isZero) begin
      if(isBeq & isZero)
        isBranch = 1'b1;
      else if (isBne & ~isZero)
        isBranch = 1'b1;
      else
        isBranch = 1'b0;
    end

  // Next PC value
    always @ (*) 
    begin
      if(invalidOpcode | invalidAddr | invalidPC)
        nextPC = nextPC;
      else
        begin
          case (isJmp)
                1'b0: 
                  begin
                    case (isBranch)
                      1'b0: nextPC = pcPlus4;
                      1'b1: nextPC = branchTargetAddr; 
                      default: nextPC = 32'bx;
                    endcase
                  end
                1'b1: nextPC = jmpTarget32;
                default: nextPC = 32'bx;
            endcase
        end
    end
    
    // PC
    always @ (posedge clk) begin
        if (rst)
            PC <= 32'h400000;
        else
            PC <= nextPC;
    end
  

    //PC Decoder
    PCDecoder pcDec(
      .virtualPC (PC),
      .physicalPC(physicalPC),
      .invalidPC (invalidPC)
    );

    // Instruction Memory
    InstMemory instMem (
        .addr( physicalPC ),
        .en( 1'b1 ),
        .readData( inst )
    );
    //Memory Decoder
    MemDecoder memDec(
      .memWrite( memWrite ),
      .memRead ( memRead ),
      .virtualAddress(aluResult),
      .physicalAddress( physicalAddress ),
      .memEn( memEnable ),
      .memBank( memoryBank ),
      .invalidAddress( invalidAddr )
    );

    //Memory Write Data Encoder
    MemWriteDataEncoder memWriteDataEncoder(
      .inData(rfData2),
      .offSet( physicalAddress[1:0] ),
      .memWrite( memWrite ),
      .dataSize (memoryDataSize),
      .outData ( memoryEncoderWriteData ),
      .encMW ( memoryEncoderMemWrite )
    );

    // Data Memory
    DataMemory dataMem (
        .clk( clk ),
        .en( memEnable[0] ),
        .memWrite( memoryEncoderMemWrite ),
        .addr( physicalAddress[12:2] ),
        .wdata( memoryEncoderWriteData ),
        .rdata ( memData )
    );

    //Memory Read Data Decoder
    MemReadDataDecoder memReadDataDecoder(
      .inData( inData_memRDDecoder ),
      .offSet( physicalAddress[1:0] ),
      .bitExt( memoryBitExt ),
      .dataSize( memoryDataSize ),
      .outData ( memoryDecoderWriteData)
    );

    VGATextCard vgaTextCard (
      .vclk( clk ),
      .clk( clk ),
      .rst( rst ),
      .en( memEnable[1] ),
      .memWrite( memoryEncoderMemWrite ),
      .addr( physicalAddress [12:2] ),
      .wdata( memoryEncoderWriteData ),
      .rdata ( readDataVGA ),
      .red( red ),
      .green( green ),
      .blue( blue ),
      .hsync( hsync ),
      .vsync( vsync )
    );

    //Register File
    RegisterFile regFile (
        .ra1( rs ),
        .ra2( rt ),
        .wa( rfWriteAddr ),
        .wd( rfWriteData ),
        .we( rfWriteEnable ),
        .clk( clk ),
        .rd1( rfData1 ),
        .rd2( rfData2 )
    );

  // ALU
  ALU alu (
    .a( rfData1 ),
    .b( aluOperand2 ),
    .func( aluFunc ),
    .res( aluResult ),
    .isZero( isZero )
  );

  // BitExtender
  BitExtender BitExtender_i12 (
    .extend( bitXtend ),
    .in( imm16 ),
    .out( imm32 )
  );

  // Control Unit
  ControlUnit controlUnit (
    .opc( opcode ),
    .func( func ),
    .isJmp( isJmp ),
    .isBeq( isBeq ),
    .isBne( isBne ),
    .rfWriteDataSel( rfWriteDataSel ),
    .rfWriteAddrSel( rfWriteAddrSel ),
    .rfWriteEnable( rfWriteEnable ),
    .memWrite( memWrite ),
    .memRead( memRead ),
    .aluSrc( aluSrc ),    
    .aluFunc( aluFunc ),
    .bitXtend( bitXtend ),
    .invOpcode( invalidOpcode ),
    .isLui( isLui ),
    .memDataSize ( memoryDataSize ),
    .memBitExt ( memoryBitExt )
  );
endmodule
