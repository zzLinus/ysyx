// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__a = vlSelf->a;
    }
    if (((IData)(vlSelf->b) ^ (IData)(vlSelf->top__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__b = vlSelf->b;
    }
    vlSelf->f = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    if (((IData)(vlSelf->f) ^ (IData)(vlSelf->top__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->top__DOT____Vtogcov__f = vlSelf->f;
    }
}
