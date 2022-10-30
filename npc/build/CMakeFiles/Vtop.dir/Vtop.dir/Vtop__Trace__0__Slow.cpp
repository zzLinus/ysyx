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
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+97,"sw", false,-1, 7,0);
    tracep->declBit(c+98,"ps2_clk", false,-1);
    tracep->declBit(c+99,"ps2_data", false,-1);
    tracep->declBus(c+100,"a", false,-1, 7,0);
    tracep->declBus(c+101,"x", false,-1, 2,0);
    tracep->declBus(c+102,"ec_x", false,-1, 7,0);
    tracep->declBus(c+103,"alu_fnselec", false,-1, 2,0);
    tracep->declBus(c+104,"alu_a", false,-1, 3,0);
    tracep->declBus(c+105,"alu_b", false,-1, 3,0);
    tracep->declBit(c+106,"counter_EN", false,-1);
    tracep->declBit(c+107,"en", false,-1);
    tracep->declBit(c+108,"rand_in", false,-1);
    tracep->declBit(c+109,"ec_en", false,-1);
    tracep->declBus(c+110,"s", false,-1, 1,0);
    tracep->declBus(c+111,"sft_rgtr_data", false,-1, 31,0);
    tracep->declBus(c+112,"sft_rgtr_shamt", false,-1, 4,0);
    tracep->declBit(c+113,"sft_rgtr_l_or_r", false,-1);
    tracep->declBit(c+114,"sft_rgtr_a_or_l", false,-1);
    tracep->declBus(c+115,"ledr", false,-1, 15,0);
    tracep->declBit(c+116,"VGA_CLK", false,-1);
    tracep->declBit(c+117,"VGA_HSYNC", false,-1);
    tracep->declBit(c+118,"VGA_VSYNC", false,-1);
    tracep->declBit(c+119,"VGA_BLANK_N", false,-1);
    tracep->declBus(c+120,"VGA_R", false,-1, 7,0);
    tracep->declBus(c+121,"VGA_G", false,-1, 7,0);
    tracep->declBus(c+122,"VGA_B", false,-1, 7,0);
    tracep->declBus(c+123,"seg0", false,-1, 7,0);
    tracep->declBus(c+124,"seg1", false,-1, 7,0);
    tracep->declBus(c+125,"seg2", false,-1, 7,0);
    tracep->declBus(c+126,"seg3", false,-1, 7,0);
    tracep->declBus(c+127,"seg4", false,-1, 7,0);
    tracep->declBus(c+128,"seg5", false,-1, 7,0);
    tracep->declBus(c+129,"seg6", false,-1, 7,0);
    tracep->declBus(c+130,"seg7", false,-1, 7,0);
    tracep->declBus(c+131,"sft_out_q", false,-1, 31,0);
    tracep->declBus(c+132,"y", false,-1, 1,0);
    tracep->declBus(c+133,"ec_y", false,-1, 2,0);
    tracep->declBus(c+134,"y_dec", false,-1, 7,0);
    tracep->declBus(c+135,"alu_res", false,-1, 3,0);
    tracep->declBit(c+136,"alu_zero", false,-1);
    tracep->declBit(c+137,"alu_overflow", false,-1);
    tracep->declBit(c+138,"alu_carry", false,-1);
    tracep->declBit(c+139,"state_machine_out", false,-1);
    tracep->declBus(c+140,"inc_counter_out", false,-1, 7,0);
    tracep->declBus(c+141,"dec_counter_out", false,-1, 2,0);
    tracep->declBit(c+142,"timer_out", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+97,"sw", false,-1, 7,0);
    tracep->declBit(c+98,"ps2_clk", false,-1);
    tracep->declBit(c+99,"ps2_data", false,-1);
    tracep->declBus(c+100,"a", false,-1, 7,0);
    tracep->declBus(c+101,"x", false,-1, 2,0);
    tracep->declBus(c+102,"ec_x", false,-1, 7,0);
    tracep->declBus(c+103,"alu_fnselec", false,-1, 2,0);
    tracep->declBus(c+104,"alu_a", false,-1, 3,0);
    tracep->declBus(c+105,"alu_b", false,-1, 3,0);
    tracep->declBit(c+106,"counter_EN", false,-1);
    tracep->declBit(c+107,"en", false,-1);
    tracep->declBit(c+108,"rand_in", false,-1);
    tracep->declBit(c+109,"ec_en", false,-1);
    tracep->declBus(c+110,"s", false,-1, 1,0);
    tracep->declBus(c+111,"sft_rgtr_data", false,-1, 31,0);
    tracep->declBus(c+112,"sft_rgtr_shamt", false,-1, 4,0);
    tracep->declBit(c+113,"sft_rgtr_l_or_r", false,-1);
    tracep->declBit(c+114,"sft_rgtr_a_or_l", false,-1);
    tracep->declBus(c+115,"ledr", false,-1, 15,0);
    tracep->declBit(c+116,"VGA_CLK", false,-1);
    tracep->declBit(c+117,"VGA_HSYNC", false,-1);
    tracep->declBit(c+118,"VGA_VSYNC", false,-1);
    tracep->declBit(c+119,"VGA_BLANK_N", false,-1);
    tracep->declBus(c+120,"VGA_R", false,-1, 7,0);
    tracep->declBus(c+121,"VGA_G", false,-1, 7,0);
    tracep->declBus(c+122,"VGA_B", false,-1, 7,0);
    tracep->declBus(c+123,"seg0", false,-1, 7,0);
    tracep->declBus(c+124,"seg1", false,-1, 7,0);
    tracep->declBus(c+125,"seg2", false,-1, 7,0);
    tracep->declBus(c+126,"seg3", false,-1, 7,0);
    tracep->declBus(c+127,"seg4", false,-1, 7,0);
    tracep->declBus(c+128,"seg5", false,-1, 7,0);
    tracep->declBus(c+129,"seg6", false,-1, 7,0);
    tracep->declBus(c+130,"seg7", false,-1, 7,0);
    tracep->declBus(c+131,"sft_out_q", false,-1, 31,0);
    tracep->declBus(c+132,"y", false,-1, 1,0);
    tracep->declBus(c+133,"ec_y", false,-1, 2,0);
    tracep->declBus(c+134,"y_dec", false,-1, 7,0);
    tracep->declBus(c+135,"alu_res", false,-1, 3,0);
    tracep->declBit(c+136,"alu_zero", false,-1);
    tracep->declBit(c+137,"alu_overflow", false,-1);
    tracep->declBit(c+138,"alu_carry", false,-1);
    tracep->declBit(c+139,"state_machine_out", false,-1);
    tracep->declBus(c+140,"inc_counter_out", false,-1, 7,0);
    tracep->declBus(c+141,"dec_counter_out", false,-1, 2,0);
    tracep->declBit(c+142,"timer_out", false,-1);
    tracep->declBus(c+74,"h_addr", false,-1, 9,0);
    tracep->declBus(c+75,"v_addr", false,-1, 9,0);
    tracep->declBus(c+76,"vga_data", false,-1, 23,0);
    tracep->declBus(c+143,"seg_x", false,-1, 7,0);
    tracep->declBus(c+144,"seg_y", false,-1, 7,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+103,"alu_fnselec", false,-1, 2,0);
    tracep->declBus(c+104,"alu_a", false,-1, 3,0);
    tracep->declBus(c+105,"alu_b", false,-1, 3,0);
    tracep->declBus(c+135,"alu_res", false,-1, 3,0);
    tracep->declBit(c+136,"alu_zero", false,-1);
    tracep->declBit(c+137,"alu_overflow", false,-1);
    tracep->declBit(c+138,"alu_carry", false,-1);
    tracep->declBus(c+38,"tmp", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+101,"x", false,-1, 2,0);
    tracep->declBit(c+107,"EN", false,-1);
    tracep->declBus(c+134,"y", false,-1, 7,0);
    tracep->declBus(c+39,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_counter ");
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+106,"en", false,-1);
    tracep->declBus(c+141,"out_q", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("encoder ");
    tracep->declBus(c+102,"x", false,-1, 7,0);
    tracep->declBit(c+109,"EN", false,-1);
    tracep->declBus(c+133,"y", false,-1, 2,0);
    tracep->declBus(c+40,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inc_counter ");
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+106,"en", false,-1);
    tracep->declBus(c+140,"out_q", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("led1 ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+97,"sw", false,-1, 7,0);
    tracep->declBus(c+115,"ledr", false,-1, 15,0);
    tracep->declBus(c+77,"count", false,-1, 31,0);
    tracep->declBus(c+78,"led", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mu_seg ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+145,"seg_x", false,-1, 3,0);
    tracep->declBus(c+146,"seg_y", false,-1, 3,0);
    tracep->declBus(c+123,"o_seg0", false,-1, 7,0);
    tracep->declBus(c+124,"o_seg1", false,-1, 7,0);
    tracep->declBus(c+125,"o_seg2", false,-1, 7,0);
    tracep->declBus(c+126,"o_seg3", false,-1, 7,0);
    tracep->declBus(c+127,"o_seg4", false,-1, 7,0);
    tracep->declBus(c+128,"o_seg5", false,-1, 7,0);
    tracep->declBus(c+129,"o_seg6", false,-1, 7,0);
    tracep->declBus(c+130,"o_seg7", false,-1, 7,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1+i*1,"segs", true,(i+0), 7,0);
    }
    tracep->declBus(c+148,"CLK_NUM", false,-1, 31,0);
    tracep->declBus(c+79,"count", false,-1, 31,0);
    tracep->declBus(c+80,"offset", false,-1, 2,0);
    tracep->declBus(c+81,"x", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+100,"a", false,-1, 7,0);
    tracep->declBus(c+110,"s", false,-1, 1,0);
    tracep->declBus(c+132,"y", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+147,"resetn", false,-1);
    tracep->declBit(c+98,"ps2_clk", false,-1);
    tracep->declBit(c+99,"ps2_data", false,-1);
    tracep->declBus(c+82,"buffer", false,-1, 9,0);
    tracep->declBus(c+83,"count", false,-1, 3,0);
    tracep->declBus(c+84,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+85,"sampling", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+95,"pclk", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBus(c+76,"vga_data", false,-1, 23,0);
    tracep->declBus(c+74,"h_addr", false,-1, 9,0);
    tracep->declBus(c+75,"v_addr", false,-1, 9,0);
    tracep->declBit(c+117,"hsync", false,-1);
    tracep->declBit(c+118,"vsync", false,-1);
    tracep->declBit(c+119,"valid", false,-1);
    tracep->declBus(c+120,"vga_r", false,-1, 7,0);
    tracep->declBus(c+121,"vga_g", false,-1, 7,0);
    tracep->declBus(c+122,"vga_b", false,-1, 7,0);
    tracep->declBus(c+149,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+150,"h_active", false,-1, 31,0);
    tracep->declBus(c+151,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+152,"h_total", false,-1, 31,0);
    tracep->declBus(c+153,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+154,"v_active", false,-1, 31,0);
    tracep->declBus(c+155,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+156,"v_total", false,-1, 31,0);
    tracep->declBus(c+86,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+87,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+88,"h_valid", false,-1);
    tracep->declBit(c+89,"v_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_vmem ");
    tracep->declBus(c+74,"h_addr", false,-1, 9,0);
    tracep->declBus(c+90,"v_addr", false,-1, 8,0);
    tracep->declBus(c+76,"vga_data", false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sft_regstr ");
    tracep->declBus(c+111,"data", false,-1, 31,0);
    tracep->declBus(c+112,"shamt", false,-1, 4,0);
    tracep->declBit(c+113,"l_or_r", false,-1);
    tracep->declBit(c+114,"a_or_l", false,-1);
    tracep->declBus(c+131,"out_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("state_machine ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+108,"in", false,-1);
    tracep->declBit(c+157,"reset", false,-1);
    tracep->declBit(c+139,"out", false,-1);
    tracep->declBus(c+158,"S0", false,-1, 3,0);
    tracep->declBus(c+159,"S1", false,-1, 3,0);
    tracep->declBus(c+160,"S2", false,-1, 3,0);
    tracep->declBus(c+161,"S3", false,-1, 3,0);
    tracep->declBus(c+162,"S4", false,-1, 3,0);
    tracep->declBus(c+163,"S5", false,-1, 3,0);
    tracep->declBus(c+164,"S6", false,-1, 3,0);
    tracep->declBus(c+165,"S7", false,-1, 3,0);
    tracep->declBus(c+166,"S8", false,-1, 3,0);
    tracep->declBus(c+41,"state_din", false,-1, 3,0);
    tracep->declBus(c+91,"state_dout", false,-1, 3,0);
    tracep->declBit(c+167,"state_wen", false,-1);
    tracep->pushNamePrefix("outMux ");
    tracep->declBus(c+168,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+169,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+170,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+139,"out", false,-1, 0,0);
    tracep->declBus(c+91,"key", false,-1, 3,0);
    tracep->declBus(c+171,"default_out", false,-1, 0,0);
    tracep->declQuad(c+172,"lut", false,-1, 44,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+168,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+169,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+170,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+170,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+139,"out", false,-1, 0,0);
    tracep->declBus(c+91,"key", false,-1, 3,0);
    tracep->declBus(c+171,"default_out", false,-1, 0,0);
    tracep->declQuad(c+172,"lut", false,-1, 44,0);
    tracep->declBus(c+174,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+11+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+29+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+92,"lut_out", false,-1, 0,0);
    tracep->declBit(c+93,"hit", false,-1);
    tracep->declBus(c+175,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("state ");
    tracep->declBus(c+169,"BITS", false,-1, 31,0);
    tracep->declBit(c+108,"load", false,-1);
    tracep->declBit(c+157,"clr", false,-1);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBus(c+41,"inp", false,-1, 3,0);
    tracep->declBus(c+91,"out_q", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("stateMux ");
    tracep->declBus(c+168,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+169,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+41,"out", false,-1, 3,0);
    tracep->declBus(c+91,"key", false,-1, 3,0);
    tracep->declBus(c+158,"default_out", false,-1, 3,0);
    tracep->declArray(c+42,"lut", false,-1, 71,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+168,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+169,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+170,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+41,"out", false,-1, 3,0);
    tracep->declBus(c+91,"key", false,-1, 3,0);
    tracep->declBus(c+158,"default_out", false,-1, 3,0);
    tracep->declArray(c+42,"lut", false,-1, 71,0);
    tracep->declBus(c+176,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+45+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+54+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+63+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+72,"lut_out", false,-1, 3,0);
    tracep->declBit(c+73,"hit", false,-1);
    tracep->declBus(c+175,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("timer_1s ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+142,"timer_out", false,-1);
    tracep->declBus(c+94,"count_clk", false,-1, 31,0);
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
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__mu_seg__DOT__segs[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__mu_seg__DOT__segs[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[7]),5);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[8]),5);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[8]),4);
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[7]));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[8]));
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__alu__DOT__tmp),4);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__dec__DOT__i),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__encoder__DOT__i),32);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__state_machine__DOT__state_din),4);
    bufp->fullWData(oldp+42,(vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut),72);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[4]),8);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[5]),8);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[6]),8);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[7]),8);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[8]),8);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[8]),4);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+74,(vlSelf->top__DOT__h_addr),10);
    bufp->fullSData(oldp+75,(vlSelf->top__DOT__v_addr),10);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__vga_data),24);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__led1__DOT__count),32);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__led1__DOT__led),8);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__mu_seg__DOT__count),32);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__mu_seg__DOT__offset),3);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__mu_seg__DOT__x),32);
    bufp->fullSData(oldp+82,(vlSelf->top__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__my_keyboard__DOT__sampling));
    bufp->fullSData(oldp+86,(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullSData(oldp+87,(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullSData(oldp+90,((0x1ffU & (IData)(vlSelf->top__DOT__v_addr))),9);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__state_machine__DOT__state_dout),4);
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__timer_1s__DOT__count_clk),32);
    bufp->fullBit(oldp+95,(vlSelf->clk));
    bufp->fullBit(oldp+96,(vlSelf->rst));
    bufp->fullCData(oldp+97,(vlSelf->sw),8);
    bufp->fullBit(oldp+98,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+99,(vlSelf->ps2_data));
    bufp->fullCData(oldp+100,(vlSelf->a),8);
    bufp->fullCData(oldp+101,(vlSelf->x),3);
    bufp->fullCData(oldp+102,(vlSelf->ec_x),8);
    bufp->fullCData(oldp+103,(vlSelf->alu_fnselec),3);
    bufp->fullCData(oldp+104,(vlSelf->alu_a),4);
    bufp->fullCData(oldp+105,(vlSelf->alu_b),4);
    bufp->fullBit(oldp+106,(vlSelf->counter_EN));
    bufp->fullBit(oldp+107,(vlSelf->en));
    bufp->fullBit(oldp+108,(vlSelf->rand_in));
    bufp->fullBit(oldp+109,(vlSelf->ec_en));
    bufp->fullCData(oldp+110,(vlSelf->s),2);
    bufp->fullIData(oldp+111,(vlSelf->sft_rgtr_data),32);
    bufp->fullCData(oldp+112,(vlSelf->sft_rgtr_shamt),5);
    bufp->fullBit(oldp+113,(vlSelf->sft_rgtr_l_or_r));
    bufp->fullBit(oldp+114,(vlSelf->sft_rgtr_a_or_l));
    bufp->fullSData(oldp+115,(vlSelf->ledr),16);
    bufp->fullBit(oldp+116,(vlSelf->VGA_CLK));
    bufp->fullBit(oldp+117,(vlSelf->VGA_HSYNC));
    bufp->fullBit(oldp+118,(vlSelf->VGA_VSYNC));
    bufp->fullBit(oldp+119,(vlSelf->VGA_BLANK_N));
    bufp->fullCData(oldp+120,(vlSelf->VGA_R),8);
    bufp->fullCData(oldp+121,(vlSelf->VGA_G),8);
    bufp->fullCData(oldp+122,(vlSelf->VGA_B),8);
    bufp->fullCData(oldp+123,(vlSelf->seg0),8);
    bufp->fullCData(oldp+124,(vlSelf->seg1),8);
    bufp->fullCData(oldp+125,(vlSelf->seg2),8);
    bufp->fullCData(oldp+126,(vlSelf->seg3),8);
    bufp->fullCData(oldp+127,(vlSelf->seg4),8);
    bufp->fullCData(oldp+128,(vlSelf->seg5),8);
    bufp->fullCData(oldp+129,(vlSelf->seg6),8);
    bufp->fullCData(oldp+130,(vlSelf->seg7),8);
    bufp->fullIData(oldp+131,(vlSelf->sft_out_q),32);
    bufp->fullCData(oldp+132,(vlSelf->y),2);
    bufp->fullCData(oldp+133,(vlSelf->ec_y),3);
    bufp->fullCData(oldp+134,(vlSelf->y_dec),8);
    bufp->fullCData(oldp+135,(vlSelf->alu_res),4);
    bufp->fullBit(oldp+136,(vlSelf->alu_zero));
    bufp->fullBit(oldp+137,(vlSelf->alu_overflow));
    bufp->fullBit(oldp+138,(vlSelf->alu_carry));
    bufp->fullBit(oldp+139,(vlSelf->state_machine_out));
    bufp->fullCData(oldp+140,(vlSelf->inc_counter_out),8);
    bufp->fullCData(oldp+141,(vlSelf->dec_counter_out),3);
    bufp->fullBit(oldp+142,(vlSelf->timer_out));
    bufp->fullCData(oldp+143,((0xffU & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))),8);
    bufp->fullCData(oldp+144,((0xffU & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))),8);
    bufp->fullCData(oldp+145,((0xfU & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))),4);
    bufp->fullCData(oldp+146,((0xfU & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))),4);
    bufp->fullBit(oldp+147,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullIData(oldp+148,(0x4c4b40U),32);
    bufp->fullIData(oldp+149,(0x60U),32);
    bufp->fullIData(oldp+150,(0x90U),32);
    bufp->fullIData(oldp+151,(0x310U),32);
    bufp->fullIData(oldp+152,(0x320U),32);
    bufp->fullIData(oldp+153,(2U),32);
    bufp->fullIData(oldp+154,(0x23U),32);
    bufp->fullIData(oldp+155,(0x203U),32);
    bufp->fullIData(oldp+156,(0x20dU),32);
    bufp->fullBit(oldp+157,(0U));
    bufp->fullCData(oldp+158,(0U),4);
    bufp->fullCData(oldp+159,(1U),4);
    bufp->fullCData(oldp+160,(2U),4);
    bufp->fullCData(oldp+161,(3U),4);
    bufp->fullCData(oldp+162,(4U),4);
    bufp->fullCData(oldp+163,(5U),4);
    bufp->fullCData(oldp+164,(6U),4);
    bufp->fullCData(oldp+165,(7U),4);
    bufp->fullCData(oldp+166,(8U),4);
    bufp->fullBit(oldp+167,(1U));
    bufp->fullIData(oldp+168,(9U),32);
    bufp->fullIData(oldp+169,(4U),32);
    bufp->fullIData(oldp+170,(1U),32);
    bufp->fullBit(oldp+171,(0U));
    bufp->fullQData(oldp+172,(0x110c8531d0ULL),45);
    bufp->fullIData(oldp+174,(5U),32);
    bufp->fullIData(oldp+175,(9U),32);
    bufp->fullIData(oldp+176,(8U),32);
}
