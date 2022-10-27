// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->sw = VL_RAND_RESET_I(8);
    vlSelf->ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->ps2_data = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->x = VL_RAND_RESET_I(3);
    vlSelf->ec_x = VL_RAND_RESET_I(8);
    vlSelf->seg_x = VL_RAND_RESET_I(3);
    vlSelf->alu_fnselec = VL_RAND_RESET_I(3);
    vlSelf->alu_a = VL_RAND_RESET_I(4);
    vlSelf->alu_b = VL_RAND_RESET_I(4);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->ec_en = VL_RAND_RESET_I(1);
    vlSelf->s = VL_RAND_RESET_I(2);
    vlSelf->ledr = VL_RAND_RESET_I(16);
    vlSelf->VGA_CLK = VL_RAND_RESET_I(1);
    vlSelf->VGA_HSYNC = VL_RAND_RESET_I(1);
    vlSelf->VGA_VSYNC = VL_RAND_RESET_I(1);
    vlSelf->VGA_BLANK_N = VL_RAND_RESET_I(1);
    vlSelf->VGA_R = VL_RAND_RESET_I(8);
    vlSelf->VGA_G = VL_RAND_RESET_I(8);
    vlSelf->VGA_B = VL_RAND_RESET_I(8);
    vlSelf->seg0 = VL_RAND_RESET_I(8);
    vlSelf->seg1 = VL_RAND_RESET_I(8);
    vlSelf->seg2 = VL_RAND_RESET_I(8);
    vlSelf->seg3 = VL_RAND_RESET_I(8);
    vlSelf->seg4 = VL_RAND_RESET_I(8);
    vlSelf->seg5 = VL_RAND_RESET_I(8);
    vlSelf->seg6 = VL_RAND_RESET_I(8);
    vlSelf->seg7 = VL_RAND_RESET_I(8);
    vlSelf->y = VL_RAND_RESET_I(2);
    vlSelf->ec_y = VL_RAND_RESET_I(3);
    vlSelf->y_dec = VL_RAND_RESET_I(8);
    vlSelf->alu_res = VL_RAND_RESET_I(4);
    vlSelf->alu_zero = VL_RAND_RESET_I(1);
    vlSelf->alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->alu_carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__h_addr = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__v_addr = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__vga_data = VL_RAND_RESET_I(24);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__sw = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ps2_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__a = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__x = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__ec_x = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg_x = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__alu_fnselec = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__alu_a = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____Vtogcov__alu_b = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____Vtogcov__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ec_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__s = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__ledr = VL_RAND_RESET_I(16);
    vlSelf->top__DOT____Vtogcov__VGA_CLK = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__VGA_HSYNC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__VGA_VSYNC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__VGA_BLANK_N = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__VGA_R = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__VGA_G = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__VGA_B = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__y = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__ec_y = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__y_dec = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__alu_res = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____Vtogcov__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__alu_carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__h_addr = VL_RAND_RESET_I(10);
    vlSelf->top__DOT____Vtogcov__v_addr = VL_RAND_RESET_I(10);
    vlSelf->top__DOT____Vtogcov__vga_data = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__led1__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__led1__DOT__led = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__led1__DOT____Vtogcov__count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__led1__DOT____Vtogcov__led = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dec__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__encoder__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__v_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_keyboard__DOT__buffer = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__my_keyboard__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_keyboard__DOT__sampling = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__resetn = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__sampling = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h658e4cf0__0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu__DOT__tmp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__alu__DOT____Vtogcov__tmp = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__mu_seg__DOT__segs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__mu_seg__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mu_seg__DOT__offset = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mu_seg__DOT__x = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<524288; ++__Vi0) {
        vlSelf->top__DOT__my_vmem__DOT__vga_mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
