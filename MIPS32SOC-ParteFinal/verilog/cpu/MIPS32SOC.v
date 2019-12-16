
module MIPS32SOC (
    input clk, // Clock signal
    input resetIn,  // Reset signal
    input [7:0] keypadIn,
    output [2:0] red,
    output [2:0] green,
    output [1:0] blue,
    output hsync,
    output vsync,
    output invalidAddr,
    output invalidOpcode,
    output invalidPC
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
    wire [1:0]aluSrc;
    wire rfWriteEnable; // Register File Write Enable
    wire [1:0] rfWriteAddrSel; // Register File Write Address Select
    wire [1:0] rfWriteDataSel; // Register File Write Data Select
    reg [4:0] rfWriteAddr; // Register File Write Address
    reg  [31:0] rfWriteData; // Register File Write Data
    wire [31:0] rfData1 /*verilator public*/;
    wire [31:0] rfData2 /*verilator public*/;
    wire [31:0] imm32;
    wire [15:0] imm16;
    wire [7:0] memAddr;
    wire memWrite/*verilator public*/;
    wire memRead;
    wire [31:0] memData;
    wire [3:0] aluFunc;
    reg [31:0] aluOperand2;
    reg [31:0] aluOperand1;
    wire [31:0] aluResult/*verilator public*/;
    wire [31:0] branchTargetAddr;
    wire [31:0] jmpTarget32;
    wire isJmp /*verilator public*/;
    wire isBeq /*verilator public*/;
    wire isBne /*verilator public*/;
    wire isZero /*verilator public*/;
    wire bitXtend;

    // wire invalidOpcode /*verilator public*/;
    // wire invalidAddr /*verilator public*/;
    // wire invalidPC /*verilator public*/;

    wire [12:0] physicalPC;
    wire [12:0] physicalAddress;
    wire [2:0] memEn/*verilator public*/;
    wire [1:0] memoryBank;
    wire [1:0] memoryDataSize;
    wire memoryBitExt;
    wire [31:0] memoryEncoderWriteData;
    wire [3:0] memoryEncoderMemWrite; 
    wire [31:0] readDataVGA;
    reg [31:0] inData_memRDDecoder;
    wire [31:0] memoryDecoderWriteData;
    wire branch_taken;
    wire [2:0] branchType;
    wire aluOperand1_source;
    wire isJal;
    wire isJr;
    // wire jump;
    // wire [1:0] j_jr;
    // wire rst;
    // reg reg_reset;
    wire [31:0] msCounter;
    wire [31:0] ioOutData;
    wire slowClk;
    wire fastClk;
    wire vgaClk;
    reg [31:0] nextPC2;
    wire reset;
    wire [7:0] keypad;

    `ifdef SYNTHESIS
      assign reset = ~resetIn;
      assign keypad = ~keypadIn;
    `else
      assign reset = resetIn;
      assign keypad = keypadIn;
    `endif
  
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

    // assign jump = (isJmp | isJal);
    // assign j_jr = {isJr, jump};


    //register file Write Address 
    always @(*) begin
      case (rfWriteAddrSel)
        2'b00: rfWriteAddr = rt;
        2'b01: rfWriteAddr = rd;
        2'b10: rfWriteAddr = 5'd31;
        default: rfWriteAddr = rd;
      endcase
    end

    //register file write data
    always @ (*)
      begin
        case (rfWriteDataSel)
          2'h0: rfWriteData = aluResult;
          2'h1: rfWriteData = memoryDecoderWriteData;
          2'h2: rfWriteData = {imm16, 16'b0};
          2'h3: rfWriteData = pcPlus4;
          default: rfWriteData = aluResult;
        endcase
      end

    //Memory Bank, indicates the memory bank to acces
    always @ (*)
      begin
        case (memoryBank)
          2'd0: inData_memRDDecoder = memData;
          2'd1: inData_memRDDecoder = readDataVGA;
          2'd2: inData_memRDDecoder = ioOutData;
          default: inData_memRDDecoder = 32'h0;
        endcase
      end

    //ALU operand 1
    always @(*) begin
      case (aluOperand1_source)
        1'b0: aluOperand1 = rfData1; //rs
        1'b1: aluOperand1 = rfData2; //rt
        default: aluOperand1 = rfData1;
      endcase

    end

    //ALU operand 2 
    always @(*) begin
      case (aluSrc)
        2'h0: aluOperand2 = rfData2; //rt
        2'h1: aluOperand2 = imm32; 
        2'h2: aluOperand2 = rfData1; //rs 
        2'h3: aluOperand2 = {27'h0, inst[10:6]};
        default: aluOperand2 = rfData2;
      endcase
    end


  always @(*) begin
    if(isJal || isJmp )
      nextPC = jmpTarget32;
    else if(isJr)
      nextPC = rfData1;
    else if(branch_taken)
      nextPC = branchTargetAddr;
    else
      nextPC = pcPlus4;
  end

  always @(*) begin
    if(reset)
        nextPC2= 32'h400000;
    else
      begin
        nextPC2 = nextPC;
      end
  end

    // PC
    always @ (posedge slowClk) begin
      if(invalidAddr || invalidOpcode || invalidPC)
        PC <= PC;
      else
        PC <= nextPC2;  
    end
  
    //milliseconds counter
    MillisCounter millisCounter(
      .clk( fastClk ),
      .reset( reset ),
      .counter( msCounter )
    );
  
    // Clock Generator
    ClockGenerator clkGenerator(
      .clkIn( clk ),
      .fastClk( fastClk),
      .vgaClk( vgaClk ),
      .slowClk( slowClk )
    );

    //PC Decoder
    PCDecoder pcDec(
      .virtualPC (nextPC2),
      .physicalPC(physicalPC),
      .invalidPC (invalidPC)
    );

    // Instruction Memory
    InstMemory instMem (
        .clk(slowClk),
        .en( 1'b1 ),
        .addr( physicalPC[12:2] ),
        .rdata( inst )
    );
    //Memory Decoder
    MemDecoder memDec(
      .memWrite( memWrite ),
      .memRead ( memRead ),
      .virtualAddress(aluResult),
      .physicalAddress( physicalAddress ),
      .memEn( memEn ),
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
        .clk( fastClk ),
        .en( memEn[0] ),
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
      .vclk( vgaClk ),
      .clk( fastClk ),
      .rst( reset ),
      .en( memEn[1] ),
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

    IO io(
      .addr(physicalAddress[12:2]),
      .milliSeconds(msCounter),
      .keypad(keypad),
      .en(memEn[2]),
      .outData(ioOutData)
    );

    //Register File
    RegisterFile regFile (
        // .reg_reset( reg_reset ),
        .ra1( rs ),
        .ra2( rt ),
        .wa( rfWriteAddr ),
        .wd( rfWriteData ),
        .we( rfWriteEnable && ~reset),
        .clk( slowClk ),
        .rd1( rfData1 ),
        .rd2( rfData2 )
    );

    // ALU
    ALU alu (
      .a( aluOperand1 ),
      .b( aluOperand2 ),
      .func( aluFunc ),
      .res( aluResult ),
      .isZero( isZero )
    );
    //Branch Resolver
    BranchResolver branchResolver (
      .branch( branchType ),
      .zero ( isZero ),
      .sign( aluResult[31] ),
      .branchTaken( branch_taken )
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
      .bgez_bltz (rt),
      .isJmp( isJmp ),
      .rfWriteDataSel( rfWriteDataSel ),
      .rfWriteAddrSel( rfWriteAddrSel ),
      .rfWriteEnable( rfWriteEnable ),
      .memWrite( memWrite ),
      .memRead( memRead ),
      .aluSrc( aluSrc ),    
      .aluFunc( aluFunc ),
      .bitXtend( bitXtend ),
      .invOpcode( invalidOpcode ),
      .memDataSize ( memoryDataSize ),
      .memBitExt ( memoryBitExt ),
      .branch( branchType ),
      .aluOp1_source( aluOperand1_source ),
      .isJal( isJal ),
      .isJr( isJr )
    );
endmodule
