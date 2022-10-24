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
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBus(c+27,"sw", false,-1, 7,0);
    tracep->declBit(c+28,"ps2_clk", false,-1);
    tracep->declBit(c+29,"ps2_data", false,-1);
    tracep->declBus(c+30,"a", false,-1, 7,0);
    tracep->declBus(c+31,"x", false,-1, 2,0);
    tracep->declBus(c+32,"ec_x", false,-1, 3,0);
    tracep->declBit(c+33,"en", false,-1);
    tracep->declBit(c+34,"ec_en", false,-1);
    tracep->declBus(c+35,"s", false,-1, 1,0);
    tracep->declBus(c+36,"ledr", false,-1, 15,0);
    tracep->declBit(c+37,"VGA_CLK", false,-1);
    tracep->declBit(c+38,"VGA_HSYNC", false,-1);
    tracep->declBit(c+39,"VGA_VSYNC", false,-1);
    tracep->declBit(c+40,"VGA_BLANK_N", false,-1);
    tracep->declBus(c+41,"VGA_R", false,-1, 7,0);
    tracep->declBus(c+42,"VGA_G", false,-1, 7,0);
    tracep->declBus(c+43,"VGA_B", false,-1, 7,0);
    tracep->declBus(c+44,"seg0", false,-1, 7,0);
    tracep->declBus(c+45,"seg1", false,-1, 7,0);
    tracep->declBus(c+46,"seg2", false,-1, 7,0);
    tracep->declBus(c+47,"seg3", false,-1, 7,0);
    tracep->declBus(c+48,"seg4", false,-1, 7,0);
    tracep->declBus(c+49,"seg5", false,-1, 7,0);
    tracep->declBus(c+50,"seg6", false,-1, 7,0);
    tracep->declBus(c+51,"seg7", false,-1, 7,0);
    tracep->declBus(c+52,"y", false,-1, 1,0);
    tracep->declBus(c+53,"ec_y", false,-1, 1,0);
    tracep->declBus(c+54,"y_dec", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBus(c+27,"sw", false,-1, 7,0);
    tracep->declBit(c+28,"ps2_clk", false,-1);
    tracep->declBit(c+29,"ps2_data", false,-1);
    tracep->declBus(c+30,"a", false,-1, 7,0);
    tracep->declBus(c+31,"x", false,-1, 2,0);
    tracep->declBus(c+32,"ec_x", false,-1, 3,0);
    tracep->declBit(c+33,"en", false,-1);
    tracep->declBit(c+34,"ec_en", false,-1);
    tracep->declBus(c+35,"s", false,-1, 1,0);
    tracep->declBus(c+36,"ledr", false,-1, 15,0);
    tracep->declBit(c+37,"VGA_CLK", false,-1);
    tracep->declBit(c+38,"VGA_HSYNC", false,-1);
    tracep->declBit(c+39,"VGA_VSYNC", false,-1);
    tracep->declBit(c+40,"VGA_BLANK_N", false,-1);
    tracep->declBus(c+41,"VGA_R", false,-1, 7,0);
    tracep->declBus(c+42,"VGA_G", false,-1, 7,0);
    tracep->declBus(c+43,"VGA_B", false,-1, 7,0);
    tracep->declBus(c+44,"seg0", false,-1, 7,0);
    tracep->declBus(c+45,"seg1", false,-1, 7,0);
    tracep->declBus(c+46,"seg2", false,-1, 7,0);
    tracep->declBus(c+47,"seg3", false,-1, 7,0);
    tracep->declBus(c+48,"seg4", false,-1, 7,0);
    tracep->declBus(c+49,"seg5", false,-1, 7,0);
    tracep->declBus(c+50,"seg6", false,-1, 7,0);
    tracep->declBus(c+51,"seg7", false,-1, 7,0);
    tracep->declBus(c+52,"y", false,-1, 1,0);
    tracep->declBus(c+53,"ec_y", false,-1, 1,0);
    tracep->declBus(c+54,"y_dec", false,-1, 7,0);
    tracep->declBus(c+9,"h_addr", false,-1, 9,0);
    tracep->declBus(c+10,"v_addr", false,-1, 9,0);
    tracep->declBus(c+11,"vga_data", false,-1, 23,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+31,"x", false,-1, 2,0);
    tracep->declBit(c+33,"EN", false,-1);
    tracep->declBus(c+54,"y", false,-1, 7,0);
    tracep->declBus(c+55,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("encoder ");
    tracep->declBus(c+32,"x", false,-1, 3,0);
    tracep->declBit(c+34,"EN", false,-1);
    tracep->declBus(c+53,"y", false,-1, 1,0);
    tracep->declBus(c+56,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("led1 ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBus(c+27,"sw", false,-1, 7,0);
    tracep->declBus(c+36,"ledr", false,-1, 15,0);
    tracep->declBus(c+12,"count", false,-1, 31,0);
    tracep->declBus(c+13,"led", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mu_seg ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBus(c+44,"o_seg0", false,-1, 7,0);
    tracep->declBus(c+45,"o_seg1", false,-1, 7,0);
    tracep->declBus(c+46,"o_seg2", false,-1, 7,0);
    tracep->declBus(c+47,"o_seg3", false,-1, 7,0);
    tracep->declBus(c+48,"o_seg4", false,-1, 7,0);
    tracep->declBus(c+49,"o_seg5", false,-1, 7,0);
    tracep->declBus(c+50,"o_seg6", false,-1, 7,0);
    tracep->declBus(c+51,"o_seg7", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"segs", true,(i+0), 7,0);
    }
    tracep->declBus(c+58,"CLK_NUM", false,-1, 31,0);
    tracep->declBus(c+14,"count", false,-1, 31,0);
    tracep->declBus(c+15,"offset", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+30,"a", false,-1, 7,0);
    tracep->declBus(c+35,"s", false,-1, 1,0);
    tracep->declBus(c+52,"y", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+57,"resetn", false,-1);
    tracep->declBit(c+28,"ps2_clk", false,-1);
    tracep->declBit(c+29,"ps2_data", false,-1);
    tracep->declBus(c+16,"buffer", false,-1, 9,0);
    tracep->declBus(c+17,"count", false,-1, 3,0);
    tracep->declBus(c+18,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+19,"sampling", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+25,"pclk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->declBus(c+11,"vga_data", false,-1, 23,0);
    tracep->declBus(c+9,"h_addr", false,-1, 9,0);
    tracep->declBus(c+10,"v_addr", false,-1, 9,0);
    tracep->declBit(c+38,"hsync", false,-1);
    tracep->declBit(c+39,"vsync", false,-1);
    tracep->declBit(c+40,"valid", false,-1);
    tracep->declBus(c+41,"vga_r", false,-1, 7,0);
    tracep->declBus(c+42,"vga_g", false,-1, 7,0);
    tracep->declBus(c+43,"vga_b", false,-1, 7,0);
    tracep->declBus(c+59,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+60,"h_active", false,-1, 31,0);
    tracep->declBus(c+61,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+62,"h_total", false,-1, 31,0);
    tracep->declBus(c+63,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+64,"v_active", false,-1, 31,0);
    tracep->declBus(c+65,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+66,"v_total", false,-1, 31,0);
    tracep->declBus(c+20,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+21,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+22,"h_valid", false,-1);
    tracep->declBit(c+23,"v_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_vmem ");
    tracep->declBus(c+9,"h_addr", false,-1, 9,0);
    tracep->declBus(c+24,"v_addr", false,-1, 8,0);
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
    bufp->fullSData(oldp+16,(vlSelf->top__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__my_keyboard__DOT__sampling));
    bufp->fullSData(oldp+20,(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullSData(oldp+21,(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullSData(oldp+24,((0x1ffU & (IData)(vlSelf->top__DOT__v_addr))),9);
    bufp->fullBit(oldp+25,(vlSelf->clk));
    bufp->fullBit(oldp+26,(vlSelf->rst));
    bufp->fullCData(oldp+27,(vlSelf->sw),8);
    bufp->fullBit(oldp+28,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+29,(vlSelf->ps2_data));
    bufp->fullCData(oldp+30,(vlSelf->a),8);
    bufp->fullCData(oldp+31,(vlSelf->x),3);
    bufp->fullCData(oldp+32,(vlSelf->ec_x),4);
    bufp->fullBit(oldp+33,(vlSelf->en));
    bufp->fullBit(oldp+34,(vlSelf->ec_en));
    bufp->fullCData(oldp+35,(vlSelf->s),2);
    bufp->fullSData(oldp+36,(vlSelf->ledr),16);
    bufp->fullBit(oldp+37,(vlSelf->VGA_CLK));
    bufp->fullBit(oldp+38,(vlSelf->VGA_HSYNC));
    bufp->fullBit(oldp+39,(vlSelf->VGA_VSYNC));
    bufp->fullBit(oldp+40,(vlSelf->VGA_BLANK_N));
    bufp->fullCData(oldp+41,(vlSelf->VGA_R),8);
    bufp->fullCData(oldp+42,(vlSelf->VGA_G),8);
    bufp->fullCData(oldp+43,(vlSelf->VGA_B),8);
    bufp->fullCData(oldp+44,(vlSelf->seg0),8);
    bufp->fullCData(oldp+45,(vlSelf->seg1),8);
    bufp->fullCData(oldp+46,(vlSelf->seg2),8);
    bufp->fullCData(oldp+47,(vlSelf->seg3),8);
    bufp->fullCData(oldp+48,(vlSelf->seg4),8);
    bufp->fullCData(oldp+49,(vlSelf->seg5),8);
    bufp->fullCData(oldp+50,(vlSelf->seg6),8);
    bufp->fullCData(oldp+51,(vlSelf->seg7),8);
    bufp->fullCData(oldp+52,(vlSelf->y),2);
    bufp->fullCData(oldp+53,(vlSelf->ec_y),2);
    bufp->fullCData(oldp+54,(vlSelf->y_dec),8);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__dec__DOT__i),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__encoder__DOT__i),32);
    bufp->fullBit(oldp+57,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullIData(oldp+58,(0x4c4b40U),32);
    bufp->fullIData(oldp+59,(0x60U),32);
    bufp->fullIData(oldp+60,(0x90U),32);
    bufp->fullIData(oldp+61,(0x310U),32);
    bufp->fullIData(oldp+62,(0x320U),32);
    bufp->fullIData(oldp+63,(2U),32);
    bufp->fullIData(oldp+64,(0x23U),32);
    bufp->fullIData(oldp+65,(0x203U),32);
    bufp->fullIData(oldp+66,(0x20dU),32);
}
