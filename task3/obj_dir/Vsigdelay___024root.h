// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsigdelay.h for the primary calling header

#ifndef VERILATED_VSIGDELAY___024ROOT_H_
#define VERILATED_VSIGDELAY___024ROOT_H_  // guard

#include "verilated.h"

class Vsigdelay__Syms;

class Vsigdelay___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(wr_enable,0,0);
    VL_IN8(rd_enable,0,0);
    VL_IN8(din,7,0);
    VL_IN8(phase_offset,7,0);
    VL_OUT8(dout,7,0);
    VL_IN8(__pinNumber10,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(incr,8,0);
    SData/*8:0*/ sigdelay__DOT__address;
    SData/*8:0*/ sigdelay__DOT____Vcellout__addrCounter__count;
    VlUnpacked<CData/*7:0*/, 512> sigdelay__DOT__sigRam__DOT__ram_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vsigdelay__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsigdelay___024root(Vsigdelay__Syms* symsp, const char* name);
    ~Vsigdelay___024root();
    VL_UNCOPYABLE(Vsigdelay___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
