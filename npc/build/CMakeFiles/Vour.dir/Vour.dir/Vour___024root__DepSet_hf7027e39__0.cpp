// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour.h for the primary calling header

#include "verilated.h"

#include "Vour__Syms.h"
#include "Vour___024root.h"

VL_INLINE_OPT void Vour___024root___combo__TOP__0(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___combo__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->a) ^ (IData)(vlSelf->our__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->our__DOT____Vtogcov__a = vlSelf->a;
    }
    if (((IData)(vlSelf->b) ^ (IData)(vlSelf->our__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->our__DOT____Vtogcov__b = vlSelf->b;
    }
    vlSelf->f = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    if (((IData)(vlSelf->f) ^ (IData)(vlSelf->our__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->our__DOT____Vtogcov__f = vlSelf->f;
    }
}
