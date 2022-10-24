// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+26,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+28,"sw", false,-1, 7,0);
    tracep->declBit(c+29,"ps2_clk", false,-1);
    tracep->declBit(c+30,"ps2_data", false,-1);
    tracep->declBus(c+31,"a", false,-1, 7,0);
    tracep->declBus(c+32,"x", false,-1, 2,0);
    tracep->declBus(c+33,"ec_x", false,-1, 7,0);
    tracep->declBus(c+34,"seg_x", false,-1, 2,0);
    tracep->declBit(c+35,"en", false,-1);
    tracep->declBit(c+36,"ec_en", false,-1);
    tracep->declBus(c+37,"s", false,-1, 1,0);
    tracep->declBus(c+38,"ledr", false,-1, 15,0);
    tracep->declBit(c+39,"VGA_CLK", false,-1);
    tracep->declBit(c+40,"VGA_HSYNC", false,-1);
    tracep->declBit(c+41,"VGA_VSYNC", false,-1);
    tracep->declBit(c+42,"VGA_BLANK_N", false,-1);
    tracep->declBus(c+43,"VGA_R", false,-1, 7,0);
    tracep->declBus(c+44,"VGA_G", false,-1, 7,0);
    tracep->declBus(c+45,"VGA_B", false,-1, 7,0);
    tracep->declBus(c+46,"seg0", false,-1, 7,0);
    tracep->declBus(c+47,"seg1", false,-1, 7,0);
    tracep->declBus(c+48,"seg2", false,-1, 7,0);
    tracep->declBus(c+49,"seg3", false,-1, 7,0);
    tracep->declBus(c+50,"seg4", false,-1, 7,0);
    tracep->declBus(c+51,"seg5", false,-1, 7,0);
    tracep->declBus(c+52,"seg6", false,-1, 7,0);
    tracep->declBus(c+53,"seg7", false,-1, 7,0);
    tracep->declBus(c+54,"y", false,-1, 1,0);
    tracep->declBus(c+55,"ec_y", false,-1, 2,0);
    tracep->declBus(c+56,"y_dec", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+26,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+28,"sw", false,-1, 7,0);
    tracep->declBit(c+29,"ps2_clk", false,-1);
    tracep->declBit(c+30,"ps2_data", false,-1);
    tracep->declBus(c+31,"a", false,-1, 7,0);
    tracep->declBus(c+32,"x", false,-1, 2,0);
    tracep->declBus(c+33,"ec_x", false,-1, 7,0);
    tracep->declBus(c+34,"seg_x", false,-1, 2,0);
    tracep->declBit(c+35,"en", false,-1);
    tracep->declBit(c+36,"ec_en", false,-1);
    tracep->declBus(c+37,"s", false,-1, 1,0);
    tracep->declBus(c+38,"ledr", false,-1, 15,0);
    tracep->declBit(c+39,"VGA_CLK", false,-1);
    tracep->declBit(c+40,"VGA_HSYNC", false,-1);
    tracep->declBit(c+41,"VGA_VSYNC", false,-1);
    tracep->declBit(c+42,"VGA_BLANK_N", false,-1);
    tracep->declBus(c+43,"VGA_R", false,-1, 7,0);
    tracep->declBus(c+44,"VGA_G", false,-1, 7,0);
    tracep->declBus(c+45,"VGA_B", false,-1, 7,0);
    tracep->declBus(c+46,"seg0", false,-1, 7,0);
    tracep->declBus(c+47,"seg1", false,-1, 7,0);
    tracep->declBus(c+48,"seg2", false,-1, 7,0);
    tracep->declBus(c+49,"seg3", false,-1, 7,0);
    tracep->declBus(c+50,"seg4", false,-1, 7,0);
    tracep->declBus(c+51,"seg5", false,-1, 7,0);
    tracep->declBus(c+52,"seg6", false,-1, 7,0);
    tracep->declBus(c+53,"seg7", false,-1, 7,0);
    tracep->declBus(c+54,"y", false,-1, 1,0);
    tracep->declBus(c+55,"ec_y", false,-1, 2,0);
    tracep->declBus(c+56,"y_dec", false,-1, 7,0);
    tracep->declBus(c+9,"h_addr", false,-1, 9,0);
    tracep->declBus(c+10,"v_addr", false,-1, 9,0);
    tracep->declBus(c+11,"vga_data", false,-1, 23,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+32,"x", false,-1, 2,0);
    tracep->declBit(c+35,"EN", false,-1);
    tracep->declBus(c+56,"y", false,-1, 7,0);
    tracep->declBus(c+57,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("encoder ");
    tracep->declBus(c+33,"x", false,-1, 7,0);
    tracep->declBit(c+36,"EN", false,-1);
    tracep->declBus(c+55,"y", false,-1, 2,0);
    tracep->declBus(c+58,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("led1 ");
    tracep->declBit(c+26,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+28,"sw", false,-1, 7,0);
    tracep->declBus(c+38,"ledr", false,-1, 15,0);
    tracep->declBus(c+12,"count", false,-1, 31,0);
    tracep->declBus(c+13,"led", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mu_seg ");
    tracep->declBit(c+26,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+34,"seg_x", false,-1, 2,0);
    tracep->declBus(c+46,"o_seg0", false,-1, 7,0);
    tracep->declBus(c+47,"o_seg1", false,-1, 7,0);
    tracep->declBus(c+48,"o_seg2", false,-1, 7,0);
    tracep->declBus(c+49,"o_seg3", false,-1, 7,0);
    tracep->declBus(c+50,"o_seg4", false,-1, 7,0);
    tracep->declBus(c+51,"o_seg5", false,-1, 7,0);
    tracep->declBus(c+52,"o_seg6", false,-1, 7,0);
    tracep->declBus(c+53,"o_seg7", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"segs", true,(i+0), 7,0);
    }
    tracep->declBus(c+60,"CLK_NUM", false,-1, 31,0);
    tracep->declBus(c+14,"count", false,-1, 31,0);
    tracep->declBus(c+15,"offset", false,-1, 2,0);
    tracep->declBus(c+16,"x", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+31,"a", false,-1, 7,0);
    tracep->declBus(c+37,"s", false,-1, 1,0);
    tracep->declBus(c+54,"y", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+26,"clk", false,-1);
    tracep->declBit(c+59,"resetn", false,-1);
    tracep->declBit(c+29,"ps2_clk", false,-1);
    tracep->declBit(c+30,"ps2_data", false,-1);
    tracep->declBus(c+17,"buffer", false,-1, 9,0);
    tracep->declBus(c+18,"count", false,-1, 3,0);
    tracep->declBus(c+19,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+20,"sampling", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+26,"pclk", false,-1);
    tracep->declBit(c+27,"reset", false,-1);
    tracep->declBus(c+11,"vga_data", false,-1, 23,0);
    tracep->declBus(c+9,"h_addr", false,-1, 9,0);
    tracep->declBus(c+10,"v_addr", false,-1, 9,0);
    tracep->declBit(c+40,"hsync", false,-1);
    tracep->declBit(c+41,"vsync", false,-1);
    tracep->declBit(c+42,"valid", false,-1);
    tracep->declBus(c+43,"vga_r", false,-1, 7,0);
    tracep->declBus(c+44,"vga_g", false,-1, 7,0);
    tracep->declBus(c+45,"vga_b", false,-1, 7,0);
    tracep->declBus(c+61,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+62,"h_active", false,-1, 31,0);
    tracep->declBus(c+63,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+64,"h_total", false,-1, 31,0);
    tracep->declBus(c+65,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+66,"v_active", false,-1, 31,0);
    tracep->declBus(c+67,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+68,"v_total", false,-1, 31,0);
    tracep->declBus(c+21,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+22,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+23,"h_valid", false,-1);
    tracep->declBit(c+24,"v_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_vmem ");
    tracep->declBus(c+9,"h_addr", false,-1, 9,0);
    tracep->declBus(c+25,"v_addr", false,-1, 8,0);
    tracep->declBus(c+11,"vga_data", false,-1, 23,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__mu_seg__DOT__segs[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__mu_seg__DOT__segs[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__mu_seg__DOT__segs[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__mu_seg__DOT__segs[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__mu_seg__DOT__segs[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__mu_seg__DOT__segs[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__mu_seg__DOT__segs[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__mu_seg__DOT__segs[7]),8);
    bufp->fullSData(oldp+9,(vlSelf->top__DOT__h_addr),10);
    bufp->fullSData(oldp+10,(vlSelf->top__DOT__v_addr),10);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__vga_data),24);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__led1__DOT__count),32);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__led1__DOT__led),8);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__mu_seg__DOT__count),32);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__mu_seg__DOT__offset),3);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__mu_seg__DOT__x),32);
    bufp->fullSData(oldp+17,(vlSelf->top__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__my_keyboard__DOT__sampling));
    bufp->fullSData(oldp+21,(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullSData(oldp+25,((0x1ffU & (IData)(vlSelf->top__DOT__v_addr))),9);
    bufp->fullBit(oldp+26,(vlSelf->clk));
    bufp->fullBit(oldp+27,(vlSelf->rst));
    bufp->fullCData(oldp+28,(vlSelf->sw),8);
    bufp->fullBit(oldp+29,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+30,(vlSelf->ps2_data));
    bufp->fullCData(oldp+31,(vlSelf->a),8);
    bufp->fullCData(oldp+32,(vlSelf->x),3);
    bufp->fullCData(oldp+33,(vlSelf->ec_x),8);
    bufp->fullCData(oldp+34,(vlSelf->seg_x),3);
    bufp->fullBit(oldp+35,(vlSelf->en));
    bufp->fullBit(oldp+36,(vlSelf->ec_en));
    bufp->fullCData(oldp+37,(vlSelf->s),2);
    bufp->fullSData(oldp+38,(vlSelf->ledr),16);
    bufp->fullBit(oldp+39,(vlSelf->VGA_CLK));
    bufp->fullBit(oldp+40,(vlSelf->VGA_HSYNC));
    bufp->fullBit(oldp+41,(vlSelf->VGA_VSYNC));
    bufp->fullBit(oldp+42,(vlSelf->VGA_BLANK_N));
    bufp->fullCData(oldp+43,(vlSelf->VGA_R),8);
    bufp->fullCData(oldp+44,(vlSelf->VGA_G),8);
    bufp->fullCData(oldp+45,(vlSelf->VGA_B),8);
    bufp->fullCData(oldp+46,(vlSelf->seg0),8);
    bufp->fullCData(oldp+47,(vlSelf->seg1),8);
    bufp->fullCData(oldp+48,(vlSelf->seg2),8);
    bufp->fullCData(oldp+49,(vlSelf->seg3),8);
    bufp->fullCData(oldp+50,(vlSelf->seg4),8);
    bufp->fullCData(oldp+51,(vlSelf->seg5),8);
    bufp->fullCData(oldp+52,(vlSelf->seg6),8);
    bufp->fullCData(oldp+53,(vlSelf->seg7),8);
    bufp->fullCData(oldp+54,(vlSelf->y),2);
    bufp->fullCData(oldp+55,(vlSelf->ec_y),3);
    bufp->fullCData(oldp+56,(vlSelf->y_dec),8);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__dec__DOT__i),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__encoder__DOT__i),32);
    bufp->fullBit(oldp+59,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullIData(oldp+60,(0x4c4b40U),32);
    bufp->fullIData(oldp+61,(0x60U),32);
    bufp->fullIData(oldp+62,(0x90U),32);
    bufp->fullIData(oldp+63,(0x310U),32);
    bufp->fullIData(oldp+64,(0x320U),32);
    bufp->fullIData(oldp+65,(2U),32);
    bufp->fullIData(oldp+66,(0x23U),32);
    bufp->fullIData(oldp+67,(0x203U),32);
    bufp->fullIData(oldp+68,(0x20dU),32);
}
