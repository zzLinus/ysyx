// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour.h for the primary calling header

#include "verilated.h"

#include "Vour__Syms.h"
#include "Vour___024root.h"

VL_ATTR_COLD void Vour___024root___configure_coverage(Vour___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/our.v", 2, 8, ".our", "v_toggle/our", "a", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/our.v", 3, 8, ".our", "v_toggle/our", "b", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "vsrc/our.v", 4, 9, ".our", "v_toggle/our", "f", "");
}
