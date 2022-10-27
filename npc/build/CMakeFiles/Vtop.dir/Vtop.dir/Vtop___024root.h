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
        VL_IN8(rst,0,0);
        VL_IN8(sw,7,0);
        VL_IN8(ps2_clk,0,0);
        VL_IN8(ps2_data,0,0);
        VL_IN8(a,7,0);
        VL_IN8(x,2,0);
        VL_IN8(ec_x,7,0);
        VL_IN8(seg_x,2,0);
        VL_IN8(alu_fnselec,2,0);
        VL_IN8(alu_a,3,0);
        VL_IN8(alu_b,3,0);
        VL_IN8(en,0,0);
        VL_IN8(ec_en,0,0);
        VL_IN8(s,1,0);
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
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__rst;
        CData/*7:0*/ top__DOT____Vtogcov__sw;
        CData/*0:0*/ top__DOT____Vtogcov__ps2_clk;
        CData/*0:0*/ top__DOT____Vtogcov__ps2_data;
        CData/*7:0*/ top__DOT____Vtogcov__a;
        CData/*2:0*/ top__DOT____Vtogcov__x;
        CData/*7:0*/ top__DOT____Vtogcov__ec_x;
        CData/*2:0*/ top__DOT____Vtogcov__seg_x;
        CData/*2:0*/ top__DOT____Vtogcov__alu_fnselec;
        CData/*3:0*/ top__DOT____Vtogcov__alu_a;
        CData/*3:0*/ top__DOT____Vtogcov__alu_b;
        CData/*0:0*/ top__DOT____Vtogcov__en;
        CData/*0:0*/ top__DOT____Vtogcov__ec_en;
        CData/*1:0*/ top__DOT____Vtogcov__s;
        CData/*0:0*/ top__DOT____Vtogcov__VGA_CLK;
        CData/*0:0*/ top__DOT____Vtogcov__VGA_HSYNC;
        CData/*0:0*/ top__DOT____Vtogcov__VGA_VSYNC;
        CData/*0:0*/ top__DOT____Vtogcov__VGA_BLANK_N;
        CData/*7:0*/ top__DOT____Vtogcov__VGA_R;
        CData/*7:0*/ top__DOT____Vtogcov__VGA_G;
        CData/*7:0*/ top__DOT____Vtogcov__VGA_B;
        CData/*7:0*/ top__DOT____Vtogcov__seg0;
        CData/*7:0*/ top__DOT____Vtogcov__seg1;
        CData/*7:0*/ top__DOT____Vtogcov__seg2;
        CData/*7:0*/ top__DOT____Vtogcov__seg3;
        CData/*7:0*/ top__DOT____Vtogcov__seg4;
    };
    struct {
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
        CData/*0:0*/ top__DOT__my_keyboard__DOT____Vlvbound_h658e4cf0__0;
        CData/*2:0*/ top__DOT__mu_seg__DOT__offset;
        CData/*2:0*/ top__DOT__mu_seg__DOT____Vtogcov__offset;
        CData/*0:0*/ __Vclklast__TOP__clk;
        VL_OUT16(ledr,15,0);
        SData/*9:0*/ top__DOT__h_addr;
        SData/*9:0*/ top__DOT__v_addr;
        SData/*15:0*/ top__DOT____Vtogcov__ledr;
        SData/*9:0*/ top__DOT____Vtogcov__h_addr;
        SData/*9:0*/ top__DOT____Vtogcov__v_addr;
        SData/*9:0*/ top__DOT__my_vga_ctrl__DOT__x_cnt;
        SData/*9:0*/ top__DOT__my_vga_ctrl__DOT__y_cnt;
        SData/*9:0*/ top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt;
        SData/*9:0*/ top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt;
        SData/*9:0*/ top__DOT__my_keyboard__DOT__buffer;
        SData/*9:0*/ top__DOT__my_keyboard__DOT____Vtogcov__buffer;
        IData/*23:0*/ top__DOT__vga_data;
        IData/*23:0*/ top__DOT____Vtogcov__vga_data;
        IData/*31:0*/ top__DOT__led1__DOT__count;
        IData/*31:0*/ top__DOT__led1__DOT____Vtogcov__count;
        IData/*31:0*/ top__DOT__dec__DOT__i;
        IData/*31:0*/ top__DOT__encoder__DOT__i;
        IData/*31:0*/ top__DOT__mu_seg__DOT__count;
        IData/*31:0*/ top__DOT__mu_seg__DOT__x;
        IData/*31:0*/ top__DOT__mu_seg__DOT____Vtogcov__count;
        VlUnpacked<CData/*7:0*/, 8> top__DOT__mu_seg__DOT__segs;
        VlUnpacked<CData/*7:0*/, 8> top__DOT__mu_seg__DOT____Vtogcov__segs;
        VlUnpacked<IData/*23:0*/, 524288> top__DOT__my_vmem__DOT__vga_mem;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

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
