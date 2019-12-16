// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS32SOC.h for the primary calling header

#include "VMIPS32SOC.h"
#include "VMIPS32SOC__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS32SOC) {
    VMIPS32SOC__Syms* __restrict vlSymsp = __VlSymsp = new VMIPS32SOC__Syms(this, name());
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(MIPS32SOC, VMIPS32SOC_MIPS32SOC);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMIPS32SOC::__Vconfigure(VMIPS32SOC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS32SOC::~VMIPS32SOC() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VMIPS32SOC::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMIPS32SOC::eval\n"); );
    VMIPS32SOC__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VMIPS32SOC::_eval_initial_loop(VMIPS32SOC__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VMIPS32SOC::_settle__TOP__1(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_settle__TOP__1\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->vsync = vlSymsp->TOP__MIPS32SOC__vgaTextCard.__PVT__vsync;
    vlTOPp->hsync = vlSymsp->TOP__MIPS32SOC__vgaTextCard.__PVT__hsync;
    vlTOPp->blue = vlSymsp->TOP__MIPS32SOC__vgaTextCard.__PVT__blue;
    vlTOPp->green = vlSymsp->TOP__MIPS32SOC__vgaTextCard.__PVT__green;
    vlTOPp->red = vlSymsp->TOP__MIPS32SOC__vgaTextCard.__PVT__red;
}

void VMIPS32SOC::_settle__TOP__2(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_settle__TOP__2\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->invalidOpcode = vlSymsp->TOP__MIPS32SOC.invalidOpcode;
    vlTOPp->invalidAddr = vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___invalidAddress;
    vlTOPp->invalidPC = vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT___invalidPC;
}

VL_INLINE_OPT void VMIPS32SOC::_sequent__TOP__3(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_sequent__TOP__3\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->invalidOpcode = vlSymsp->TOP__MIPS32SOC.invalidOpcode;
    vlTOPp->invalidAddr = vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___invalidAddress;
}

VL_INLINE_OPT void VMIPS32SOC::_combo__TOP__4(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_combo__TOP__4\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->invalidPC = vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT___invalidPC;
}

void VMIPS32SOC::_eval(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_eval\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff._sequent__TOP__MIPS32SOC__vgaTextCard__frameBuff__1(vlSymsp);
	vlSymsp->TOP__MIPS32SOC._sequent__TOP__MIPS32SOC__3(vlSymsp);
	vlSymsp->TOP__MIPS32SOC__dataMem._sequent__TOP__MIPS32SOC__dataMem__1(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__MIPS32SOC____PVT__slowClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__MIPS32SOC____PVT__slowClk)))) {
	vlSymsp->TOP__MIPS32SOC._sequent__TOP__MIPS32SOC__4(vlSymsp);
	vlSymsp->TOP__MIPS32SOC__instMem._sequent__TOP__MIPS32SOC__instMem__1(vlSymsp);
	vlSymsp->TOP__MIPS32SOC__regFile._sequent__TOP__MIPS32SOC__regFile__2(vlSymsp);
	vlSymsp->TOP__MIPS32SOC._sequent__TOP__MIPS32SOC__5(vlSymsp);
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlSymsp->TOP__MIPS32SOC._combo__TOP__MIPS32SOC__6(vlSymsp);
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__MIPS32SOC____PVT__slowClk 
	= vlTOPp->__VinpClk__TOP__MIPS32SOC____PVT__slowClk;
    vlTOPp->__VinpClk__TOP__MIPS32SOC____PVT__slowClk 
	= vlSymsp->TOP__MIPS32SOC.__PVT__slowClk;
}

void VMIPS32SOC::_eval_initial(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_eval_initial\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom._initial__TOP__MIPS32SOC__vgaTextCard__palRom__1(vlSymsp);
    vlSymsp->TOP__MIPS32SOC__regFile._initial__TOP__MIPS32SOC__regFile__1(vlSymsp);
    vlSymsp->TOP__MIPS32SOC._initial__TOP__MIPS32SOC__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__MIPS32SOC____PVT__slowClk 
	= vlTOPp->__VinpClk__TOP__MIPS32SOC____PVT__slowClk;
}

void VMIPS32SOC::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::final\n"); );
    // Variables
    VMIPS32SOC__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMIPS32SOC::_eval_settle(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_eval_settle\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__MIPS32SOC._settle__TOP__MIPS32SOC__2(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VMIPS32SOC::_change_request(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_change_request\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__MIPS32SOC.__PVT__slowClk ^ vlTOPp->__Vchglast__TOP__MIPS32SOC__slowClk));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__MIPS32SOC.__PVT__slowClk ^ vlTOPp->__Vchglast__TOP__MIPS32SOC__slowClk))) VL_DBG_MSGF("        CHANGE: /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MIPS32SOC.v:76: slowClk\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__MIPS32SOC__slowClk = vlSymsp->TOP__MIPS32SOC.__PVT__slowClk;
    return __req;
}

#ifdef VL_DEBUG
void VMIPS32SOC::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((resetIn & 0xfeU))) {
	Verilated::overWidthError("resetIn");}
}
#endif // VL_DEBUG

void VMIPS32SOC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetIn = VL_RAND_RESET_I(1);
    keypadIn = VL_RAND_RESET_I(8);
    red = VL_RAND_RESET_I(3);
    green = VL_RAND_RESET_I(3);
    blue = VL_RAND_RESET_I(2);
    hsync = VL_RAND_RESET_I(1);
    vsync = VL_RAND_RESET_I(1);
    invalidAddr = VL_RAND_RESET_I(1);
    invalidOpcode = VL_RAND_RESET_I(1);
    invalidPC = VL_RAND_RESET_I(1);
    __VinpClk__TOP__MIPS32SOC____PVT__slowClk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__MIPS32SOC__slowClk = VL_RAND_RESET_I(1);
}
