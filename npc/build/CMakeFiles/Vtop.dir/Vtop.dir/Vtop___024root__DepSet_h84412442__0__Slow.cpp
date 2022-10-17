// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/top.v", 2, 8, ".top", "v_toggle/top", "a", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/top.v", 3, 8, ".top", "v_toggle/top", "b", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "vsrc/top.v", 4, 9, ".top", "v_toggle/top", "f", "");
}
