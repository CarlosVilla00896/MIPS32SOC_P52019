`include "alu_defines.vh"
`include "mips32_opcodes.vh" 

module ControlUnit(
    input [5:0] opc, //! Opcode
    input [5:0] func, //! Function
    output isJmp, //! Jump signal
    output isBeq, //! BEQ signal
    output isBne, //! BNE signal
    output [1:0] rfWriteDataSel, //! Register File Write Data Select
    output rfWriteAddrSel, //! Register File Write Address Select
    output rfWriteEnable, //! Register Write Enable
    output memWrite, //! Memory Write
    output memRead, //! Memory Read
    output aluSrc, //! ALU source
    output [2:0] aluFunc, //! ALU operation
    output bitXtend, //! Bit extension, 0 = sign extend, 1 = zero extend
    output invOpcode //! Invalid opcode or function
);

endmodule

