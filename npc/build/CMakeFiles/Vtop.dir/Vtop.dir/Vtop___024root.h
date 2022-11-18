// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(en,0,0);
        VL_IN8(ec_en,0,0);
        VL_OUT8(timer_out,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(sw,7,0);
        VL_IN8(ps2_clk,0,0);
        VL_IN8(ps2_data,0,0);
        VL_IN8(a,7,0);
        VL_IN8(x,2,0);
        VL_IN8(ec_x,7,0);
        VL_IN8(alu_fnselec,2,0);
        VL_IN8(alu_a,3,0);
        VL_IN8(alu_b,3,0);
        VL_IN8(counter_EN,0,0);
        VL_IN8(rand_in,0,0);
        VL_IN8(state_machine_clr,0,0);
        VL_IN8(s,1,0);
        VL_IN8(sft_rgtr_shamt,4,0);
        VL_IN8(sft_rgtr_l_or_r,0,0);
        VL_IN8(sft_rgtr_a_or_l,0,0);
        VL_OUT8(VGA_CLK,0,0);
        VL_OUT8(VGA_HSYNC,0,0);
        VL_OUT8(VGA_VSYNC,0,0);
        VL_OUT8(VGA_BLANK_N,0,0);
        VL_OUT8(VGA_R,7,0);
        VL_OUT8(VGA_G,7,0);
        VL_OUT8(VGA_B,7,0);
        VL_OUT8(seg0,7,0);
        VL_OUT8(seg1,7,0);
        VL_OUT8(seg2,7,0);
        VL_OUT8(seg3,7,0);
        VL_OUT8(seg4,7,0);
        VL_OUT8(seg5,7,0);
        VL_OUT8(seg6,7,0);
        VL_OUT8(seg7,7,0);
        VL_OUT8(y,1,0);
        VL_OUT8(ec_y,2,0);
        VL_OUT8(y_dec,7,0);
        VL_OUT8(alu_res,3,0);
        VL_OUT8(alu_zero,0,0);
        VL_OUT8(alu_overflow,0,0);
        VL_OUT8(alu_carry,0,0);
        VL_OUT8(state_machine_out,0,0);
        VL_OUT8(inc_counter_out,7,0);
        VL_OUT8(dec_counter_out,2,0);
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__rst;
        CData/*7:0*/ top__DOT____Vtogcov__sw;
        CData/*0:0*/ top__DOT____Vtogcov__ps2_clk;
        CData/*0:0*/ top__DOT____Vtogcov__ps2_data;
        CData/*7:0*/ top__DOT____Vtogcov__a;
        CData/*2:0*/ top__DOT____Vtogcov__x;
        CData/*7:0*/ top__DOT____Vtogcov__ec_x;
        CData/*2:0*/ top__DOT____Vtogcov__alu_fnselec;
        CData/*3:0*/ top__DOT____Vtogcov__alu_a;
        CData/*3:0*/ top__DOT____Vtogcov__alu_b;
        CData/*0:0*/ top__DOT____Vtogcov__counter_EN;
        CData/*0:0*/ top__DOT____Vtogcov__en;
        CData/*0:0*/ top__DOT____Vtogcov__rand_in;
        CData/*0:0*/ top__DOT____Vtogcov__state_machine_clr;
        CData/*0:0*/ top__DOT____Vtogcov__ec_en;
        CData/*1:0*/ top__DOT____Vtogcov__s;
        CData/*4:0*/ top__DOT____Vtogcov__sft_rgtr_shamt;
    };
    struct {
        CData/*0:0*/ top__DOT____Vtogcov__sft_rgtr_l_or_r;
        CData/*0:0*/ top__DOT____Vtogcov__sft_rgtr_a_or_l;
        CData/*0:0*/ top__DOT____Vtogcov__VGA_CLK;
        CData/*0:0*/ top__DOT____Vtogcov__VGA_HSYNC;
        CData/*0:0*/ top__DOT____Vtogcov__VGA_VSYNC;
        CData/*0:0*/ top__DOT____Vtogcov__VGA_BLANK_N;
        CData/*7:0*/ top__DOT____Vtogcov__VGA_R;
        CData/*7:0*/ top__DOT____Vtogcov__seg0;
        CData/*7:0*/ top__DOT____Vtogcov__seg1;
        CData/*7:0*/ top__DOT____Vtogcov__seg2;
        CData/*7:0*/ top__DOT____Vtogcov__seg3;
        CData/*7:0*/ top__DOT____Vtogcov__seg4;
        CData/*7:0*/ top__DOT____Vtogcov__seg5;
        CData/*7:0*/ top__DOT____Vtogcov__seg6;
        CData/*7:0*/ top__DOT____Vtogcov__seg7;
        CData/*1:0*/ top__DOT____Vtogcov__y;
        CData/*2:0*/ top__DOT____Vtogcov__ec_y;
        CData/*7:0*/ top__DOT____Vtogcov__y_dec;
        CData/*3:0*/ top__DOT____Vtogcov__alu_res;
        CData/*0:0*/ top__DOT____Vtogcov__alu_zero;
        CData/*0:0*/ top__DOT____Vtogcov__alu_overflow;
        CData/*0:0*/ top__DOT____Vtogcov__alu_carry;
        CData/*0:0*/ top__DOT____Vtogcov__state_machine_out;
        CData/*7:0*/ top__DOT____Vtogcov__inc_counter_out;
        CData/*2:0*/ top__DOT____Vtogcov__dec_counter_out;
        CData/*0:0*/ top__DOT____Vtogcov__timer_out;
        CData/*5:0*/ top__DOT____Vtogcov__font_h;
        CData/*5:0*/ top__DOT____Vtogcov__font_v;
        CData/*7:0*/ top__DOT____Vtogcov__seg_x;
        CData/*7:0*/ top__DOT____Vtogcov__seg_y;
        CData/*7:0*/ top__DOT__led1__DOT__led;
        CData/*7:0*/ top__DOT__led1__DOT____Vtogcov__led;
        CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__h_valid;
        CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__v_valid;
        CData/*0:0*/ top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid;
        CData/*0:0*/ top__DOT__my_vga_ctrl__DOT____Vtogcov__v_valid;
        CData/*3:0*/ top__DOT__my_keyboard__DOT__count;
        CData/*2:0*/ top__DOT__my_keyboard__DOT__ps2_clk_sync;
        CData/*0:0*/ top__DOT__my_keyboard__DOT__sampling;
        CData/*0:0*/ top__DOT__my_keyboard__DOT____Vtogcov__resetn;
        CData/*3:0*/ top__DOT__my_keyboard__DOT____Vtogcov__count;
        CData/*2:0*/ top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync;
        CData/*0:0*/ top__DOT__my_keyboard__DOT____Vtogcov__sampling;
        CData/*0:0*/ top__DOT__my_keyboard__DOT____Vlvbound_h68ebe97f__0;
        CData/*3:0*/ top__DOT__alu__DOT__tmp;
        CData/*3:0*/ top__DOT__alu__DOT____Vtogcov__tmp;
        CData/*3:0*/ top__DOT__state_machine__DOT__state_din;
        CData/*3:0*/ top__DOT__state_machine__DOT__state_dout;
        CData/*3:0*/ top__DOT__state_machine__DOT____Vtogcov__state_din;
        CData/*3:0*/ top__DOT__state_machine__DOT____Vtogcov__state_dout;
        CData/*0:0*/ top__DOT__state_machine__DOT__outMux__DOT____Vtogcov__default_out;
        CData/*0:0*/ top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__lut_out;
        CData/*0:0*/ top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__hit;
        CData/*3:0*/ top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit;
        CData/*3:0*/ top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out;
        CData/*0:0*/ top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__hit;
        CData/*2:0*/ top__DOT__mu_seg__DOT__offset;
        CData/*2:0*/ top__DOT__mu_seg__DOT____Vtogcov__offset;
        CData/*7:0*/ top__DOT__my_vmem__DOT__word;
        CData/*7:0*/ top__DOT__my_vmem__DOT____Vtogcov__word;
        CData/*0:0*/ __VdfgTmp_h56907fad__0;
    };
    struct {
        CData/*0:0*/ __Vdly__timer_out;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__timer_out;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(ledr,15,0);
        SData/*9:0*/ top__DOT__h_addr;
        SData/*9:0*/ top__DOT__v_addr;
        SData/*8:0*/ top__DOT____Vcellinp__my_vmem__v_addr;
        SData/*15:0*/ top__DOT____Vtogcov__ledr;
        SData/*9:0*/ top__DOT____Vtogcov__h_addr;
        SData/*9:0*/ top__DOT____Vtogcov__v_addr;
        SData/*9:0*/ top__DOT__my_vga_ctrl__DOT__x_cnt;
        SData/*9:0*/ top__DOT__my_vga_ctrl__DOT__y_cnt;
        SData/*9:0*/ top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt;
        SData/*9:0*/ top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt;
        SData/*9:0*/ top__DOT__my_keyboard__DOT__buffer;
        SData/*9:0*/ top__DOT__my_keyboard__DOT____Vtogcov__buffer;
        SData/*15:0*/ top__DOT__my_vmem__DOT__font_addr;
        SData/*8:0*/ top__DOT__my_vmem__DOT____Vtogcov__v_addr;
        SData/*15:0*/ top__DOT__my_vmem__DOT____Vtogcov__font_addr;
        VL_IN(sft_rgtr_data,31,0);
        VL_OUT(sft_out_q,31,0);
        IData/*31:0*/ top__DOT____Vtogcov__sft_rgtr_data;
        IData/*31:0*/ top__DOT____Vtogcov__sft_out_q;
        IData/*23:0*/ top__DOT____Vtogcov__vga_data;
        IData/*31:0*/ top__DOT__led1__DOT__count;
        IData/*31:0*/ top__DOT__led1__DOT____Vtogcov__count;
        IData/*31:0*/ top__DOT__dec__DOT__i;
        IData/*31:0*/ top__DOT__encoder__DOT__i;
        VlWide<3>/*71:0*/ top__DOT__state_machine__DOT____Vcellinp__stateMux__lut;
        VlWide<3>/*71:0*/ top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut;
        IData/*31:0*/ top__DOT__mu_seg__DOT__count;
        IData/*31:0*/ top__DOT__mu_seg__DOT__x;
        IData/*31:0*/ top__DOT__mu_seg__DOT____Vtogcov__count;
        IData/*31:0*/ top__DOT__timer_1s__DOT__count_clk;
        IData/*31:0*/ top__DOT__timer_1s__DOT____Vtogcov__count_clk;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*44:0*/ top__DOT__state_machine__DOT__outMux__DOT____Vtogcov__lut;
        VlUnpacked<CData/*4:0*/, 9> top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 9> top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 9> top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 9> top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list;
        VlUnpacked<CData/*3:0*/, 9> top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list;
        VlUnpacked<CData/*0:0*/, 9> top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list;
        VlUnpacked<CData/*7:0*/, 9> top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 9> top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 9> top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 9> top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list;
        VlUnpacked<CData/*3:0*/, 9> top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list;
        VlUnpacked<CData/*3:0*/, 9> top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list;
        VlUnpacked<CData/*7:0*/, 10> top__DOT__mu_seg__DOT__segs;
        VlUnpacked<CData/*7:0*/, 10> top__DOT__mu_seg__DOT____Vtogcov__segs;
        VlUnpacked<CData/*7:0*/, 2100> top__DOT__my_vmem__DOT__vga_mem;
        VlUnpacked<IData/*23:0*/, 256> top__DOT__my_vmem__DOT__font_rom;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
