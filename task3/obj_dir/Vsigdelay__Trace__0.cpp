// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsigdelay__Syms.h"


void Vsigdelay___024root__trace_chg_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_chg_top_0\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsigdelay___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsigdelay___024root__trace_chg_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & (IData)(vlSelf->sigdelay__DOT____Vcellout__addrCounter__count))));
        bufp->chgSData(oldp+1,(vlSelf->sigdelay__DOT____Vcellout__addrCounter__count),9);
        bufp->chgSData(oldp+2,((1U & (IData)(vlSelf->sigdelay__DOT____Vcellout__addrCounter__count))),9);
    }
    bufp->chgBit(oldp+3,(vlSelf->clk));
    bufp->chgBit(oldp+4,(vlSelf->rst));
    bufp->chgBit(oldp+5,(vlSelf->en));
    bufp->chgBit(oldp+6,(vlSelf->wr_enable));
    bufp->chgBit(oldp+7,(vlSelf->rd_enable));
    bufp->chgCData(oldp+8,(vlSelf->din),8);
    bufp->chgSData(oldp+9,(vlSelf->incr),9);
    bufp->chgCData(oldp+10,(vlSelf->phase_offset),8);
    bufp->chgCData(oldp+11,(vlSelf->dout),8);
    bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->sigdelay__DOT____Vcellout__addrCounter__count) 
                                 + (IData)(vlSelf->phase_offset)))));
    bufp->chgSData(oldp+13,((1U & ((IData)(vlSelf->sigdelay__DOT____Vcellout__addrCounter__count) 
                                   + (IData)(vlSelf->phase_offset)))),9);
}

void Vsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_cleanup\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
