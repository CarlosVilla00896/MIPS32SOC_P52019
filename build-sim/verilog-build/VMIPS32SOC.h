// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMIPS32SOC_H_
#define _VMIPS32SOC_H_

#include "verilated.h"
#include "VMIPS32SOC__Dpi.h"

class VMIPS32SOC__Syms;
class VMIPS32SOC_MIPS32SOC;

//----------

VL_MODULE(VMIPS32SOC) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VMIPS32SOC_MIPS32SOC*	MIPS32SOC;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
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
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__VinpClk__TOP__MIPS32SOC____PVT__slowClk,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__MIPS32SOC____PVT__slowClk,0,0);
    VL_SIG8(__Vchglast__TOP__MIPS32SOC__slowClk,0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VMIPS32SOC__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMIPS32SOC);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VMIPS32SOC(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMIPS32SOC();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VMIPS32SOC__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMIPS32SOC__Syms* symsp, bool first);
  private:
    static QData _change_request(VMIPS32SOC__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VMIPS32SOC__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VMIPS32SOC__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VMIPS32SOC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VMIPS32SOC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VMIPS32SOC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(VMIPS32SOC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
