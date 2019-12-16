// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMIPS32SOC.h for the primary calling header

#ifndef _VMIPS32SOC_MIPS32SOC_H_
#define _VMIPS32SOC_MIPS32SOC_H_

#include "verilated.h"
#include "VMIPS32SOC__Dpi.h"

class VMIPS32SOC__Syms;
class VMIPS32SOC_InstMemory;
class VMIPS32SOC_DataMemory;
class VMIPS32SOC_VGATextCard;
class VMIPS32SOC_RegisterFile;

//----------

VL_MODULE(VMIPS32SOC_MIPS32SOC) {
  public:
    // CELLS
    VMIPS32SOC_InstMemory*	instMem;
    VMIPS32SOC_DataMemory*	dataMem;
    VMIPS32SOC_VGATextCard*	vgaTextCard;
    VMIPS32SOC_RegisterFile*	regFile;
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(clk,0,0);
    VL_IN8(resetIn,0,0);
    VL_IN8(keypadIn,7,0);
    VL_OUT8(red,2,0);
    VL_OUT8(green,2,0);
    VL_OUT8(blue,1,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(invalidAddr,0,0);
    VL_OUT8(invalidOpcode,0,0);
    VL_OUT8(invalidPC,0,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint  all: 
    VL_SIG8(__PVT__slowClk,0,0);
    VL_SIG8(rd,4,0);
    VL_SIG8(rt,4,0);
    VL_SIG8(rs,4,0);
    VL_SIG8(__PVT__aluSrc,1,0);
    VL_SIG8(__PVT__rfWriteEnable,0,0);
    VL_SIG8(__PVT__rfWriteAddrSel,1,0);
    VL_SIG8(__PVT__rfWriteDataSel,1,0);
    VL_SIG8(memWrite,0,0);
    VL_SIG8(__PVT__memRead,0,0);
    VL_SIG8(__PVT__aluFunc,3,0);
    VL_SIG8(isJmp,0,0);
    VL_SIG8(isBeq,0,0);
    VL_SIG8(isBne,0,0);
    VL_SIG8(isZero,0,0);
    VL_SIG8(__PVT__bitXtend,0,0);
    VL_SIG8(memEn,2,0);
    VL_SIG8(__PVT__memoryDataSize,1,0);
    VL_SIG8(__PVT__memoryBitExt,0,0);
    VL_SIG8(__PVT__branchType,2,0);
    VL_SIG8(__PVT__aluOperand1_source,0,0);
    VL_SIG8(__PVT__isJal,0,0);
    VL_SIG8(__PVT__isJr,0,0);
    VL_SIG8(__PVT__pcDec__DOT___invalidPC,0,0);
    VL_SIG8(__PVT__memDec__DOT___invalidAddress,0,0);
    VL_SIG8(__PVT__memDec__DOT___memEn,2,0);
    VL_SIG8(__PVT__memDec__DOT___memBank,1,0);
    VL_SIG8(__PVT__memWriteDataEncoder__DOT___encMW,3,0);
    VL_SIG16(__PVT__pcDec__DOT___physicalPC,12,0);
    VL_SIG16(__PVT__memDec__DOT___physicalAddress,12,0);
    VL_SIG(inst,31,0);
    VL_SIG(PC,31,0);
    VL_SIG(rfData1,31,0);
    VL_SIG(rfData2,31,0);
    VL_SIG(__PVT__aluOperand2,31,0);
    VL_SIG(__PVT__aluOperand1,31,0);
    VL_SIG(aluResult,31,0);
    VL_SIG(__PVT__inData_memRDDecoder,31,0);
    VL_SIG(__PVT__nextPC2,31,0);
    VL_SIG(__PVT__millisCounter__DOT__ms_count,31,0);
    VL_SIG(__PVT__pcDec__DOT__temp,31,0);
    VL_SIG(__PVT__memDec__DOT__temp,31,0);
    VL_SIG(__PVT__memWriteDataEncoder__DOT___outData,31,0);
    VL_SIG(__PVT__memReadDataDecoder__DOT___outData,31,0);
    VL_SIG(__PVT__BitExtender_i12__DOT___out,31,0);
    
    // LOCAL VARIABLES
    // Begin mtask footprint  all: 
    VL_SIG(__Vdly__PC,31,0);
    
    // INTERNAL VARIABLES
  private:
    VMIPS32SOC__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMIPS32SOC_MIPS32SOC);  ///< Copying not allowed
  public:
    VMIPS32SOC_MIPS32SOC(const char* name="TOP");
    ~VMIPS32SOC_MIPS32SOC();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VMIPS32SOC__Syms* symsp, bool first);
    void __Vdpiimwrap_millisCounter__DOT__millis_TOP__MIPS32SOC(IData& millis__Vfuncrtn);
    static void _combo__TOP__MIPS32SOC__6(VMIPS32SOC__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__MIPS32SOC__1(VMIPS32SOC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _sequent__TOP__MIPS32SOC__3(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void _sequent__TOP__MIPS32SOC__4(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void _sequent__TOP__MIPS32SOC__5(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void _settle__TOP__MIPS32SOC__2(VMIPS32SOC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
