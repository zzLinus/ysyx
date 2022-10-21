// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__mu_seg__DOT__segs[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__mu_seg__DOT__segs[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__mu_seg__DOT__segs[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__mu_seg__DOT__segs[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__mu_seg__DOT__segs[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__mu_seg__DOT__segs[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__mu_seg__DOT__segs[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__mu_seg__DOT__segs[7]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+8,(vlSelf->top__DOT__h_addr),10);
        bufp->chgSData(oldp+9,(vlSelf->top__DOT__v_addr),10);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__vga_data),24);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__led1__DOT__count),32);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__led1__DOT__led),8);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__mu_seg__DOT__count),32);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__mu_seg__DOT__offset),3);
        bufp->chgSData(oldp+15,(vlSelf->top__DOT__my_keyboard__DOT__buffer),10);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__my_keyboard__DOT__sampling));
        bufp->chgSData(oldp+19,(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt),10);
        bufp->chgSData(oldp+20,(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt),10);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
        bufp->chgSData(oldp+23,((0x1ffU & (IData)(vlSelf->top__DOT__v_addr))),9);
    }
    bufp->chgBit(oldp+24,(vlSelf->clk));
    bufp->chgBit(oldp+25,(vlSelf->rst));
    bufp->chgCData(oldp+26,(vlSelf->sw),8);
    bufp->chgBit(oldp+27,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+28,(vlSelf->ps2_data));
    bufp->chgBit(oldp+29,(vlSelf->a));
    bufp->chgBit(oldp+30,(vlSelf->b));
    bufp->chgBit(oldp+31,(vlSelf->s));
    bufp->chgBit(oldp+32,(vlSelf->v));
    bufp->chgSData(oldp+33,(vlSelf->ledr),16);
    bufp->chgBit(oldp+34,(vlSelf->VGA_CLK));
    bufp->chgBit(oldp+35,(vlSelf->VGA_HSYNC));
    bufp->chgBit(oldp+36,(vlSelf->VGA_VSYNC));
    bufp->chgBit(oldp+37,(vlSelf->VGA_BLANK_N));
    bufp->chgCData(oldp+38,(vlSelf->VGA_R),8);
    bufp->chgCData(oldp+39,(vlSelf->VGA_G),8);
    bufp->chgCData(oldp+40,(vlSelf->VGA_B),8);
    bufp->chgCData(oldp+41,(vlSelf->seg0),8);
    bufp->chgCData(oldp+42,(vlSelf->seg1),8);
    bufp->chgCData(oldp+43,(vlSelf->seg2),8);
    bufp->chgCData(oldp+44,(vlSelf->seg3),8);
    bufp->chgCData(oldp+45,(vlSelf->seg4),8);
    bufp->chgCData(oldp+46,(vlSelf->seg5),8);
    bufp->chgCData(oldp+47,(vlSelf->seg6),8);
    bufp->chgCData(oldp+48,(vlSelf->seg7),8);
    bufp->chgBit(oldp+49,(vlSelf->y));
    bufp->chgBit(oldp+50,((1U & (~ (IData)(vlSelf->rst)))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
