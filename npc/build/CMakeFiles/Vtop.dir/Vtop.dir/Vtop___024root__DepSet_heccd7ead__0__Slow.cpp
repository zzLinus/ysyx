// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__top__DOT__my_keyboard__DOT__keycode 
        = vlSelf->top__DOT__my_keyboard__DOT__keycode;
    vlSelf->__Vtrigrprev__TOP__timer_out = vlSelf->timer_out;
    vlSelf->__Vtrigrprev__TOP__top__DOT__lookup__DOT__ascii 
        = vlSelf->top__DOT__lookup__DOT__ascii;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if ((0x64U < vlSelf->__VstlIterCount)) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] top.my_keyboard.keycode)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge timer_out)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] top.lookup.ascii)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] top.my_keyboard.keycode)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge timer_out)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] top.lookup.ascii)\n");
    }
}
#endif  // VL_DEBUG

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
    vlSelf->alu_fnselec = VL_RAND_RESET_I(3);
    vlSelf->alu_a = VL_RAND_RESET_I(4);
    vlSelf->alu_b = VL_RAND_RESET_I(4);
    vlSelf->counter_EN = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->rand_in = VL_RAND_RESET_I(1);
    vlSelf->state_machine_clr = VL_RAND_RESET_I(1);
    vlSelf->ec_en = VL_RAND_RESET_I(1);
    vlSelf->s = VL_RAND_RESET_I(2);
    vlSelf->sft_rgtr_data = VL_RAND_RESET_I(32);
    vlSelf->sft_rgtr_shamt = VL_RAND_RESET_I(5);
    vlSelf->sft_rgtr_l_or_r = VL_RAND_RESET_I(1);
    vlSelf->sft_rgtr_a_or_l = VL_RAND_RESET_I(1);
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
    vlSelf->sft_out_q = VL_RAND_RESET_I(32);
    vlSelf->y = VL_RAND_RESET_I(2);
    vlSelf->ec_y = VL_RAND_RESET_I(3);
    vlSelf->y_dec = VL_RAND_RESET_I(8);
    vlSelf->alu_res = VL_RAND_RESET_I(4);
    vlSelf->alu_zero = VL_RAND_RESET_I(1);
    vlSelf->alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->alu_carry = VL_RAND_RESET_I(1);
    vlSelf->state_machine_out = VL_RAND_RESET_I(1);
    vlSelf->inc_counter_out = VL_RAND_RESET_I(8);
    vlSelf->dec_counter_out = VL_RAND_RESET_I(3);
    vlSelf->timer_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__h_addr = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__v_addr = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__font_v = VL_RAND_RESET_I(5);
    vlSelf->top__DOT____Vcellinp__my_vmem__v_addr = VL_RAND_RESET_I(9);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__sw = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ps2_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__a = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__x = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__ec_x = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__alu_fnselec = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__alu_a = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____Vtogcov__alu_b = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____Vtogcov__counter_EN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__rand_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__state_machine_clr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ec_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__s = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__sft_rgtr_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt = VL_RAND_RESET_I(5);
    vlSelf->top__DOT____Vtogcov__sft_rgtr_l_or_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__sft_rgtr_a_or_l = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ledr = VL_RAND_RESET_I(16);
    vlSelf->top__DOT____Vtogcov__VGA_CLK = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__VGA_HSYNC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__VGA_VSYNC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__VGA_BLANK_N = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__VGA_R = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__sft_out_q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__y = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__ec_y = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__y_dec = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__alu_res = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____Vtogcov__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__alu_carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__state_machine_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__inc_counter_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__dec_counter_out = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__timer_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__h_addr = VL_RAND_RESET_I(10);
    vlSelf->top__DOT____Vtogcov__v_addr = VL_RAND_RESET_I(10);
    vlSelf->top__DOT____Vtogcov__font_h = VL_RAND_RESET_I(7);
    vlSelf->top__DOT____Vtogcov__font_v = VL_RAND_RESET_I(5);
    vlSelf->top__DOT____Vtogcov__vga_data = VL_RAND_RESET_I(24);
    vlSelf->top__DOT____Vtogcov__seg_x = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__seg_y = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__key_code = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vtogcov__ascii_code = VL_RAND_RESET_I(8);
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
    vlSelf->top__DOT__my_keyboard__DOT__keycode = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__my_keyboard__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_keyboard__DOT__sampling = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__resetn = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__sampling = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h68ebe97f__0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu__DOT__tmp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__alu__DOT____Vtogcov__tmp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__state_machine__DOT__state_din = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__state_machine__DOT__state_dout = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(72, vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut);
    vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT____Vtogcov__default_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT____Vtogcov__lut = VL_RAND_RESET_Q(45);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top__DOT__mu_seg__DOT__segs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__mu_seg__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mu_seg__DOT__offset = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mu_seg__DOT__x = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2100; ++__Vi0) {
        vlSelf->top__DOT__my_vmem__DOT__vga_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__my_vmem__DOT__font_rom[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->top__DOT__my_vmem__DOT__word_count = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__my_vmem__DOT__font_addr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__my_vmem__DOT__word = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__my_vmem__DOT__font_data = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__my_vmem__DOT____Vlvbound_he230faa8__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__my_vmem__DOT____VdfgTmp_h751f7d61__0 = 0;
    vlSelf->top__DOT__timer_1s__DOT__count_clk = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lookup__DOT__ascii = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__lookup__DOT__pressing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lookup__DOT____Vtogcov__pressing = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h1c0fb021__0 = 0;
    vlSelf->__Vdly__top__DOT__my_keyboard__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__top__DOT__my_keyboard__DOT__buffer = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__timer_out = VL_RAND_RESET_I(1);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__VicoIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__top__DOT__my_keyboard__DOT__keycode = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__timer_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__top__DOT__lookup__DOT__ascii = VL_RAND_RESET_I(8);
    vlSelf->__VactDidInit = 0;
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
