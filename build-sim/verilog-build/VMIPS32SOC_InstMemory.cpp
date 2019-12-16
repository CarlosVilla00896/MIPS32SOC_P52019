// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS32SOC.h for the primary calling header

#include "VMIPS32SOC_InstMemory.h"
#include "VMIPS32SOC__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS32SOC_InstMemory) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VMIPS32SOC_InstMemory::__Vconfigure(VMIPS32SOC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS32SOC_InstMemory::~VMIPS32SOC_InstMemory() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VMIPS32SOC_InstMemory::_sequent__TOP__MIPS32SOC__instMem__1(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMIPS32SOC_InstMemory::_sequent__TOP__MIPS32SOC__instMem__1\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/InstMemory.v:10
    vlSymsp->TOP__MIPS32SOC__instMem.__PVT__rdata = 
	vlSymsp->TOP__MIPS32SOC__instMem.memory[(0x7ffU 
						 & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT___physicalPC) 
						    >> 2U))];
}

void VMIPS32SOC_InstMemory::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMIPS32SOC_InstMemory::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__en = VL_RAND_RESET_I(1);
    __PVT__addr = VL_RAND_RESET_I(11);
    __PVT__rdata = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
	    memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
