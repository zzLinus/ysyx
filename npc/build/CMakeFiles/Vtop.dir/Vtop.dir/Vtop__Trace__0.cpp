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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__lookup__DOT__pressing));
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__mu_seg__DOT__segs[0]),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__mu_seg__DOT__segs[1]),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__mu_seg__DOT__segs[2]),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__mu_seg__DOT__segs[3]),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__mu_seg__DOT__segs[4]),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__mu_seg__DOT__segs[5]),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__mu_seg__DOT__segs[6]),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__mu_seg__DOT__segs[7]),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__mu_seg__DOT__segs[8]),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__mu_seg__DOT__segs[9]),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[5]),5);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[6]),5);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[7]),5);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[8]),5);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[8]),4);
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[6]));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[7]));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[8]));
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[8]),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__alu__DOT__tmp),4);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__dec__DOT__i),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__encoder__DOT__i),32);
        bufp->chgWData(oldp+50,(vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut),72);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[1]),8);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[2]),8);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[3]),8);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[4]),8);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[5]),8);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[6]),8);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[7]),8);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[8]),8);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[7]),4);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[8]),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+71,(vlSelf->top__DOT__h_addr),10);
        bufp->chgSData(oldp+72,(vlSelf->top__DOT__v_addr),10);
        bufp->chgCData(oldp+73,((0x7fU & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)))),7);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__font_v),5);
        bufp->chgCData(oldp+75,((0xffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                          >> 1U))),8);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__led1__DOT__count),32);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__led1__DOT__led),8);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__mu_seg__DOT__count),32);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__mu_seg__DOT__offset),3);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__mu_seg__DOT__x),32);
        bufp->chgSData(oldp+81,(vlSelf->top__DOT__my_keyboard__DOT__buffer),10);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__my_keyboard__DOT__sampling));
        bufp->chgSData(oldp+85,(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt),10);
        bufp->chgSData(oldp+86,(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt),10);
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
        bufp->chgSData(oldp+89,(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr),9);
        bufp->chgSData(oldp+90,((0xfU & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr))),12);
        bufp->chgCData(oldp+91,((0xfU & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)))),4);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__timer_1s__DOT__count_clk),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__state_machine__DOT__state_dout),4);
        bufp->chgBit(oldp+94,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+95,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+96,(((IData)(vlSelf->__VdfgTmp_h1c0fb021__0)
                                  ? 0xffffffU : 0U)),24);
        bufp->chgSData(oldp+97,(vlSelf->top__DOT__my_vmem__DOT__font_addr),12);
        bufp->chgSData(oldp+98,(vlSelf->top__DOT__my_vmem__DOT__word),12);
        bufp->chgSData(oldp+99,(vlSelf->top__DOT__my_vmem__DOT__font_data),12);
    }
    bufp->chgBit(oldp+100,(vlSelf->clk));
    bufp->chgBit(oldp+101,(vlSelf->rst));
    bufp->chgCData(oldp+102,(vlSelf->sw),8);
    bufp->chgBit(oldp+103,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+104,(vlSelf->ps2_data));
    bufp->chgCData(oldp+105,(vlSelf->a),8);
    bufp->chgCData(oldp+106,(vlSelf->x),3);
    bufp->chgCData(oldp+107,(vlSelf->ec_x),8);
    bufp->chgCData(oldp+108,(vlSelf->alu_fnselec),3);
    bufp->chgCData(oldp+109,(vlSelf->alu_a),4);
    bufp->chgCData(oldp+110,(vlSelf->alu_b),4);
    bufp->chgBit(oldp+111,(vlSelf->counter_EN));
    bufp->chgBit(oldp+112,(vlSelf->en));
    bufp->chgBit(oldp+113,(vlSelf->rand_in));
    bufp->chgBit(oldp+114,(vlSelf->state_machine_clr));
    bufp->chgBit(oldp+115,(vlSelf->ec_en));
    bufp->chgCData(oldp+116,(vlSelf->s),2);
    bufp->chgIData(oldp+117,(vlSelf->sft_rgtr_data),32);
    bufp->chgCData(oldp+118,(vlSelf->sft_rgtr_shamt),5);
    bufp->chgBit(oldp+119,(vlSelf->sft_rgtr_l_or_r));
    bufp->chgBit(oldp+120,(vlSelf->sft_rgtr_a_or_l));
    bufp->chgSData(oldp+121,(vlSelf->ledr),16);
    bufp->chgBit(oldp+122,(vlSelf->VGA_CLK));
    bufp->chgBit(oldp+123,(vlSelf->VGA_HSYNC));
    bufp->chgBit(oldp+124,(vlSelf->VGA_VSYNC));
    bufp->chgBit(oldp+125,(vlSelf->VGA_BLANK_N));
    bufp->chgCData(oldp+126,(vlSelf->VGA_R),8);
    bufp->chgCData(oldp+127,(vlSelf->VGA_G),8);
    bufp->chgCData(oldp+128,(vlSelf->VGA_B),8);
    bufp->chgCData(oldp+129,(vlSelf->seg0),8);
    bufp->chgCData(oldp+130,(vlSelf->seg1),8);
    bufp->chgCData(oldp+131,(vlSelf->seg2),8);
    bufp->chgCData(oldp+132,(vlSelf->seg3),8);
    bufp->chgCData(oldp+133,(vlSelf->seg4),8);
    bufp->chgCData(oldp+134,(vlSelf->seg5),8);
    bufp->chgCData(oldp+135,(vlSelf->seg6),8);
    bufp->chgCData(oldp+136,(vlSelf->seg7),8);
    bufp->chgIData(oldp+137,(vlSelf->sft_out_q),32);
    bufp->chgCData(oldp+138,(vlSelf->y),2);
    bufp->chgCData(oldp+139,(vlSelf->ec_y),3);
    bufp->chgCData(oldp+140,(vlSelf->y_dec),8);
    bufp->chgCData(oldp+141,(vlSelf->alu_res),4);
    bufp->chgBit(oldp+142,(vlSelf->alu_zero));
    bufp->chgBit(oldp+143,(vlSelf->alu_overflow));
    bufp->chgBit(oldp+144,(vlSelf->alu_carry));
    bufp->chgBit(oldp+145,(vlSelf->state_machine_out));
    bufp->chgCData(oldp+146,(vlSelf->inc_counter_out),8);
    bufp->chgCData(oldp+147,(vlSelf->dec_counter_out),3);
    bufp->chgBit(oldp+148,(vlSelf->timer_out));
    bufp->chgCData(oldp+149,((0xffU & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))),8);
    bufp->chgCData(oldp+150,((0xffU & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))),8);
    bufp->chgCData(oldp+151,(vlSelf->top__DOT__lookup__DOT__ascii),8);
    bufp->chgCData(oldp+152,((0xfU & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))),4);
    bufp->chgCData(oldp+153,((0xfU & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))),4);
    bufp->chgBit(oldp+154,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->chgSData(oldp+155,(vlSelf->top__DOT__my_vmem__DOT__word_count),12);
    bufp->chgCData(oldp+156,(vlSelf->top__DOT__state_machine__DOT__state_din),4);
    bufp->chgCData(oldp+157,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out),4);
    bufp->chgBit(oldp+158,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
