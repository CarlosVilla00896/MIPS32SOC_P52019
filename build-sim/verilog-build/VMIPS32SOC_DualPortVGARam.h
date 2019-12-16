// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMIPS32SOC.h for the primary calling header

#ifndef _VMIPS32SOC_DualPortVGARam_H_
#define _VMIPS32SOC_DualPortVGARam_H_

#include "verilated.h"
#include "VMIPS32SOC__Dpi.h"

class VMIPS32SOC__Syms;

//----------

VL_MODULE(VMIPS32SOC_DualPortVGARam) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(__PVT__clka,0,0);
    VL_IN8(__PVT__clkb,0,0);
    VL_IN8(__PVT__enablea,0,0);
    VL_IN8(__PVT__wea,3,0);
    VL_IN16(__PVT__addra,10,0);
    VL_IN16(__PVT__addrb,10,0);
    VL_IN(__PVT__wda,31,0);
    VL_OUT(__PVT__rda,31,0);
    VL_OUT(__PVT__rdb,31,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint  all: 
    VL_SIG(memory[2048],31,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VMIPS32SOC__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMIPS32SOC_DualPortVGARam);  ///< Copying not allowed
  public:
    VMIPS32SOC_DualPortVGARam(const char* name="TOP");
    ~VMIPS32SOC_DualPortVGARam();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VMIPS32SOC__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__MIPS32SOC__vgaTextCard__frameBuff__1(VMIPS32SOC__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
