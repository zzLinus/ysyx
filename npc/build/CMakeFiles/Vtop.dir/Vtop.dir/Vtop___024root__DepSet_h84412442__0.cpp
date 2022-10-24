// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    if ((0U == (IData)(vlSelf->s))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->y = (3U & (IData)(vlSelf->a));
    } else {
        vlSelf->y = (3U & ((1U == (IData)(vlSelf->s))
                            ? ((IData)(vlSelf->a) >> 2U)
                            : ((2U == (IData)(vlSelf->s))
                                ? ((IData)(vlSelf->a) 
                                   >> 4U) : ((3U == (IData)(vlSelf->s))
                                              ? ((IData)(vlSelf->a) 
                                                 >> 6U)
                                              : 0U))));
    }
    if ((0U != (IData)(vlSelf->s))) {
        if ((1U == (IData)(vlSelf->s))) {
            ++(vlSymsp->__Vcoverage[254]);
        }
        if ((1U != (IData)(vlSelf->s))) {
            if ((2U == (IData)(vlSelf->s))) {
                ++(vlSymsp->__Vcoverage[255]);
            }
            if ((2U != (IData)(vlSelf->s))) {
                if ((3U == (IData)(vlSelf->s))) {
                    ++(vlSymsp->__Vcoverage[256]);
                }
                if ((3U != (IData)(vlSelf->s))) {
                    ++(vlSymsp->__Vcoverage[257]);
                }
            }
        }
    }
    if (vlSelf->en) {
        ++(vlSymsp->__Vcoverage[261]);
        ++(vlSymsp->__Vcoverage[261]);
        ++(vlSymsp->__Vcoverage[261]);
        ++(vlSymsp->__Vcoverage[261]);
        ++(vlSymsp->__Vcoverage[261]);
        ++(vlSymsp->__Vcoverage[261]);
        ++(vlSymsp->__Vcoverage[261]);
        ++(vlSymsp->__Vcoverage[261]);
        ++(vlSymsp->__Vcoverage[262]);
        if ((6U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[259]);
        }
        if ((5U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[259]);
        }
        if ((4U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[260]);
        }
        if ((4U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[259]);
        }
        if ((3U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[260]);
        }
        if ((3U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[259]);
        }
        if ((6U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[260]);
        }
        if ((0U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[259]);
        }
        if ((0U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[260]);
        }
        if ((5U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[260]);
        }
        if ((1U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[259]);
        }
        if ((1U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[260]);
        }
        if ((2U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[259]);
        }
        if ((2U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[260]);
        }
        if ((7U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[259]);
        }
        if ((7U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[260]);
        }
        vlSelf->top__DOT__dec__DOT__i = 8U;
        vlSelf->y_dec = ((0xf8U & (IData)(vlSelf->y_dec)) 
                         | (((2U == (IData)(vlSelf->x)) 
                             << 2U) | (((1U == (IData)(vlSelf->x)) 
                                        << 1U) | (0U 
                                                  == (IData)(vlSelf->x)))));
        vlSelf->y_dec = ((0xc7U & (IData)(vlSelf->y_dec)) 
                         | (((5U == (IData)(vlSelf->x)) 
                             << 5U) | (((4U == (IData)(vlSelf->x)) 
                                        << 4U) | ((3U 
                                                   == (IData)(vlSelf->x)) 
                                                  << 3U))));
        vlSelf->y_dec = ((0x3fU & (IData)(vlSelf->y_dec)) 
                         | (((7U == (IData)(vlSelf->x)) 
                             << 7U) | ((6U == (IData)(vlSelf->x)) 
                                       << 6U)));
    } else {
        vlSelf->y_dec = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->en)))) {
        ++(vlSymsp->__Vcoverage[263]);
    }
    if (vlSelf->ec_en) {
        ++(vlSymsp->__Vcoverage[267]);
        ++(vlSymsp->__Vcoverage[267]);
        ++(vlSymsp->__Vcoverage[267]);
        ++(vlSymsp->__Vcoverage[267]);
        ++(vlSymsp->__Vcoverage[267]);
        ++(vlSymsp->__Vcoverage[267]);
        ++(vlSymsp->__Vcoverage[267]);
        ++(vlSymsp->__Vcoverage[267]);
        ++(vlSymsp->__Vcoverage[268]);
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 4U)))) {
            ++(vlSymsp->__Vcoverage[266]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 3U)))) {
            ++(vlSymsp->__Vcoverage[266]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 1U)))) {
            ++(vlSymsp->__Vcoverage[266]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 5U)))) {
            ++(vlSymsp->__Vcoverage[266]);
        }
        if ((1U & (~ (IData)(vlSelf->ec_x)))) {
            ++(vlSymsp->__Vcoverage[266]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 6U)))) {
            ++(vlSymsp->__Vcoverage[266]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 2U)))) {
            ++(vlSymsp->__Vcoverage[266]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 7U)))) {
            ++(vlSymsp->__Vcoverage[266]);
        }
        vlSelf->top__DOT__encoder__DOT__i = 8U;
        vlSelf->ec_y = 0U;
        if ((1U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[265]);
            vlSelf->ec_y = 0U;
        }
        if ((2U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[265]);
            vlSelf->ec_y = 1U;
        }
        if ((4U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[265]);
            vlSelf->ec_y = 2U;
        }
        if ((8U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[265]);
            vlSelf->ec_y = 3U;
        }
        if ((0x10U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[265]);
            vlSelf->ec_y = 4U;
        }
        if ((0x20U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[265]);
            vlSelf->ec_y = 5U;
        }
        if ((0x40U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[265]);
            vlSelf->ec_y = 6U;
        }
        if ((0x80U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[265]);
            vlSelf->ec_y = 7U;
        }
    } else {
        vlSelf->ec_y = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ec_en)))) {
        ++(vlSymsp->__Vcoverage[269]);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__rst = vlSelf->rst;
    }
    if (((IData)(vlSelf->ps2_clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__ps2_clk))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->top__DOT____Vtogcov__ps2_clk = vlSelf->ps2_clk;
    }
    if (((IData)(vlSelf->ps2_data) ^ (IData)(vlSelf->top__DOT____Vtogcov__ps2_data))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->top__DOT____Vtogcov__ps2_data = vlSelf->ps2_data;
    }
    if (((IData)(vlSelf->alu_c) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_c))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__alu_c = vlSelf->alu_c;
    }
    if (((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__alu_a = vlSelf->alu_a;
    }
    if (((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__alu_b = vlSelf->alu_b;
    }
    if (((IData)(vlSelf->en) ^ (IData)(vlSelf->top__DOT____Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__en = vlSelf->en;
    }
    if (((IData)(vlSelf->ec_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_en))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__ec_en = vlSelf->ec_en;
    }
    if ((1U ^ ((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__resetn)))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__resetn 
            = (1U & (~ (IData)(vlSelf->rst)));
    }
    if ((1U & ((IData)(vlSelf->s) ^ (IData)(vlSelf->top__DOT____Vtogcov__s)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__s = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__s)) 
                                          | (1U & (IData)(vlSelf->s)));
    }
    if ((2U & ((IData)(vlSelf->s) ^ (IData)(vlSelf->top__DOT____Vtogcov__s)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__s = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__s)) 
                                          | (2U & (IData)(vlSelf->s)));
    }
    if ((1U & ((IData)(vlSelf->x) ^ (IData)(vlSelf->top__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->top__DOT____Vtogcov__x = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__x)) 
                                          | (1U & (IData)(vlSelf->x)));
    }
    if ((2U & ((IData)(vlSelf->x) ^ (IData)(vlSelf->top__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->top__DOT____Vtogcov__x = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__x)) 
                                          | (2U & (IData)(vlSelf->x)));
    }
    if ((4U & ((IData)(vlSelf->x) ^ (IData)(vlSelf->top__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->top__DOT____Vtogcov__x = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__x)) 
                                          | (4U & (IData)(vlSelf->x)));
    }
    if ((1U & ((IData)(vlSelf->seg_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (1U 
                                                 & (IData)(vlSelf->seg_x)));
    }
    if ((2U & ((IData)(vlSelf->seg_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (2U 
                                                 & (IData)(vlSelf->seg_x)));
    }
    if ((4U & ((IData)(vlSelf->seg_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (4U 
                                                 & (IData)(vlSelf->seg_x)));
    }
    vlSelf->VGA_CLK = vlSelf->clk;
    if ((1U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->top__DOT____Vtogcov__sw = ((0xfeU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (1U & (IData)(vlSelf->sw)));
    }
    if ((2U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->top__DOT____Vtogcov__sw = ((0xfdU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (2U & (IData)(vlSelf->sw)));
    }
    if ((4U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->top__DOT____Vtogcov__sw = ((0xfbU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (4U & (IData)(vlSelf->sw)));
    }
    if ((8U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->top__DOT____Vtogcov__sw = ((0xf7U & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (8U & (IData)(vlSelf->sw)));
    }
    if ((0x10U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->top__DOT____Vtogcov__sw = ((0xefU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (0x10U 
                                              & (IData)(vlSelf->sw)));
    }
    if ((0x20U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->top__DOT____Vtogcov__sw = ((0xdfU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (0x20U 
                                              & (IData)(vlSelf->sw)));
    }
    if ((0x40U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->top__DOT____Vtogcov__sw = ((0xbfU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (0x40U 
                                              & (IData)(vlSelf->sw)));
    }
    if ((0x80U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->top__DOT____Vtogcov__sw = ((0x7fU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (0x80U 
                                              & (IData)(vlSelf->sw)));
    }
    if ((1U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfeU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (1U & (IData)(vlSelf->a)));
    }
    if ((2U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfdU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (2U & (IData)(vlSelf->a)));
    }
    if ((4U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfbU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (4U & (IData)(vlSelf->a)));
    }
    if ((8U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->top__DOT____Vtogcov__a = ((0xf7U & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (8U & (IData)(vlSelf->a)));
    }
    if ((0x10U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->top__DOT____Vtogcov__a = ((0xefU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (0x10U 
                                             & (IData)(vlSelf->a)));
    }
    if ((0x20U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->top__DOT____Vtogcov__a = ((0xdfU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (0x20U 
                                             & (IData)(vlSelf->a)));
    }
    if ((0x40U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->top__DOT____Vtogcov__a = ((0xbfU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (0x40U 
                                             & (IData)(vlSelf->a)));
    }
    if ((0x80U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->top__DOT____Vtogcov__a = ((0x7fU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (0x80U 
                                             & (IData)(vlSelf->a)));
    }
    if ((1U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (1U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((2U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (2U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((4U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (4U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((8U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (8U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((0x10U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((0x20U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((0x40U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((0x80U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->ec_x)));
    }
    vlSelf->alu_s = (((IData)(vlSelf->top__DOT__adder__DOT__tmp) 
                      | (IData)(vlSelf->alu_c)) & (~ 
                                                   ((IData)(vlSelf->top__DOT__adder__DOT__tmp) 
                                                    & (IData)(vlSelf->alu_c))));
    vlSelf->alu_c_out = (((IData)(vlSelf->alu_a) & (IData)(vlSelf->alu_b)) 
                         | ((IData)(vlSelf->alu_c) 
                            & (IData)(vlSelf->top__DOT__adder__DOT__tmp)));
    if (((IData)(vlSelf->VGA_CLK) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_CLK))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__VGA_CLK = vlSelf->VGA_CLK;
    }
    if ((1U & ((IData)(vlSelf->y) ^ (IData)(vlSelf->top__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT____Vtogcov__y = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__y)) 
                                          | (1U & (IData)(vlSelf->y)));
    }
    if ((2U & ((IData)(vlSelf->y) ^ (IData)(vlSelf->top__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT____Vtogcov__y = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__y)) 
                                          | (2U & (IData)(vlSelf->y)));
    }
    if ((1U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (1U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if ((2U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (2U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if ((4U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (4U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if ((1U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (1U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((2U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (2U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((4U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (4U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((8U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (8U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x10U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x20U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x40U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x80U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if (((IData)(vlSelf->alu_s) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_s))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT____Vtogcov__alu_s = vlSelf->alu_s;
    }
    if (((IData)(vlSelf->alu_c_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_c_out))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT____Vtogcov__alu_c_out = vlSelf->alu_c_out;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__top__DOT__led1__DOT__led;
    IData/*31:0*/ __Vdly__top__DOT__led1__DOT__count;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    CData/*3:0*/ __Vdly__top__DOT__my_keyboard__DOT__count;
    IData/*31:0*/ __Vdly__top__DOT__mu_seg__DOT__count;
    CData/*2:0*/ __Vdly__top__DOT__mu_seg__DOT__offset;
    // Body
    __Vdly__top__DOT__my_keyboard__DOT__count = vlSelf->top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__mu_seg__DOT__offset = vlSelf->top__DOT__mu_seg__DOT__offset;
    __Vdly__top__DOT__mu_seg__DOT__count = vlSelf->top__DOT__mu_seg__DOT__count;
    __Vdly__top__DOT__led1__DOT__led = vlSelf->top__DOT__led1__DOT__led;
    __Vdly__top__DOT__led1__DOT__count = vlSelf->top__DOT__led1__DOT__count;
    __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt;
    __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt;
    ++(vlSymsp->__Vcoverage[252]);
    ++(vlSymsp->__Vcoverage[299]);
    ++(vlSymsp->__Vcoverage[318]);
    ++(vlSymsp->__Vcoverage[328]);
    ++(vlSymsp->__Vcoverage[434]);
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[251]);
        ++(vlSymsp->__Vcoverage[298]);
        ++(vlSymsp->__Vcoverage[327]);
        ++(vlSymsp->__Vcoverage[433]);
        if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__sampling)))) {
            ++(vlSymsp->__Vcoverage[325]);
        }
        if (vlSelf->top__DOT__my_keyboard__DOT__sampling) {
            ++(vlSymsp->__Vcoverage[324]);
            if ((0xaU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                ++(vlSymsp->__Vcoverage[322]);
                if ((((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                               >> 1U))))) {
                    ++(vlSymsp->__Vcoverage[320]);
                }
                if ((1U & (~ (((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                               & (IData)(vlSelf->ps2_data)) 
                              & VL_REDXOR_32((0x1ffU 
                                              & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                                 >> 1U))))))) {
                    ++(vlSymsp->__Vcoverage[321]);
                }
            }
            if ((0xaU != (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                ++(vlSymsp->__Vcoverage[323]);
            }
        }
        if ((0U == vlSelf->top__DOT__led1__DOT__count)) {
            ++(vlSymsp->__Vcoverage[248]);
        }
        if ((0U != vlSelf->top__DOT__led1__DOT__count)) {
            ++(vlSymsp->__Vcoverage[249]);
        }
        if ((0x4c4b40U == vlSelf->top__DOT__mu_seg__DOT__count)) {
            ++(vlSymsp->__Vcoverage[430]);
        }
        if ((0x4c4b40U != vlSelf->top__DOT__mu_seg__DOT__count)) {
            ++(vlSymsp->__Vcoverage[431]);
        }
        if ((0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
            ++(vlSymsp->__Vcoverage[295]);
            if ((0x20dU == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))) {
                ++(vlSymsp->__Vcoverage[293]);
            }
            if ((0x20dU != (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))) {
                ++(vlSymsp->__Vcoverage[294]);
            }
        }
        if ((0x320U != (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
            ++(vlSymsp->__Vcoverage[296]);
        }
    }
    vlSelf->top__DOT__mu_seg__DOT__x = vlSelf->seg_x;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[250]);
        ++(vlSymsp->__Vcoverage[297]);
        ++(vlSymsp->__Vcoverage[326]);
        ++(vlSymsp->__Vcoverage[432]);
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
    } else if (vlSelf->top__DOT__my_keyboard__DOT__sampling) {
        if ((0xaU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
            if (VL_UNLIKELY((((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                              & (IData)(vlSelf->ps2_data)) 
                             & VL_REDXOR_32((0x1ffU 
                                             & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                                >> 1U)))))) {
                VL_WRITEF("receive %x\n",8,(0xffU & 
                                            ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                             >> 1U)));
            }
            __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
        } else {
            vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h658e4cf0__0 
                = vlSelf->ps2_data;
            if ((9U >= (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                vlSelf->top__DOT__my_keyboard__DOT__buffer 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) 
                        & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                       | (0x3ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h658e4cf0__0) 
                                    << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))));
            }
            __Vdly__top__DOT__my_keyboard__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mu_seg__DOT__count = 0U;
        __Vdly__top__DOT__mu_seg__DOT__offset = 0U;
        __Vdly__top__DOT__led1__DOT__led = 1U;
        __Vdly__top__DOT__led1__DOT__count = 0U;
        __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
    } else {
        if ((0x4c4b40U == vlSelf->top__DOT__mu_seg__DOT__count)) {
            __Vdly__top__DOT__mu_seg__DOT__offset = 
                (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
            __Vdly__top__DOT__mu_seg__DOT__count = 0U;
        } else {
            __Vdly__top__DOT__mu_seg__DOT__count = 
                ((IData)(1U) + vlSelf->top__DOT__mu_seg__DOT__count);
        }
        if ((0U == vlSelf->top__DOT__led1__DOT__count)) {
            __Vdly__top__DOT__led1__DOT__led = ((0xfeU 
                                                 & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                                                      >> 7U)));
        }
        __Vdly__top__DOT__led1__DOT__count = ((0xc350U 
                                               <= vlSelf->top__DOT__led1__DOT__count)
                                               ? 0U
                                               : ((IData)(1U) 
                                                  + vlSelf->top__DOT__led1__DOT__count));
        if ((0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
            __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt 
                = ((0x20dU == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))
                    ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))));
            __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
        } else {
            __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
        }
    }
    vlSelf->seg0 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [(7U & vlSelf->top__DOT__mu_seg__DOT__x)]));
    vlSelf->top__DOT__my_keyboard__DOT__count = __Vdly__top__DOT__my_keyboard__DOT__count;
    vlSelf->top__DOT__mu_seg__DOT__offset = __Vdly__top__DOT__mu_seg__DOT__offset;
    vlSelf->top__DOT__mu_seg__DOT__count = __Vdly__top__DOT__mu_seg__DOT__count;
    vlSelf->top__DOT__led1__DOT__led = __Vdly__top__DOT__led1__DOT__led;
    vlSelf->top__DOT__led1__DOT__count = __Vdly__top__DOT__led1__DOT__count;
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    if ((1U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((2U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((4U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((8U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x10U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x20U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x40U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x80U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((5U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((3U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    vlSelf->top__DOT__my_keyboard__DOT__sampling = (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))));
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xeU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xdU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xbU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((7U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                   ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                   ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((6U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((5U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((3U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (4U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (1U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (2U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (4U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffff7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (8U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffff7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x100U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffeffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x100U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x200U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffdffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x200U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x400U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffbffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x400U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x800U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffff7ffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x800U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x1000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffefffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x1000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x2000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffdfffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x2000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x4000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffbfffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x4000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x8000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffff7fffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x8000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffeffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffdffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffbffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x80000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfff7ffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x100000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffefffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x100000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x200000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffdfffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x200000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x400000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffbfffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x400000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x800000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xff7fffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x800000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfeffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x1000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfdffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x2000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfbffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x4000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xf7ffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x8000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xefffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xdfffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xbfffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if (((vlSelf->top__DOT__mu_seg__DOT__count ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0x7fffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfeU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (1U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfdU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (2U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfbU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (4U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xf7U & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (8U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xefU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x10U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xdfU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x20U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xbfU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x40U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0x7fU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x80U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((1U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffeU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (1U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((2U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffdU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (2U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((4U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffbU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (4U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((8U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffff7U & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (8U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffefU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffdfU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffbfU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x80U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffff7fU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x100U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffeffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x100U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x200U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffdffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x200U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x400U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffbffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x400U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x800U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffff7ffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x800U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x1000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffefffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x1000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x2000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffdfffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x2000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x4000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffbfffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x4000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x8000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffff7fffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x8000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffeffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffdffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffbffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x80000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfff7ffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x100000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffefffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x100000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x200000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffdfffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x200000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x400000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffbfffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x400000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x800000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xff7fffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x800000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x1000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfeffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x1000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x2000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfdffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x2000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x4000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfbffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x4000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x8000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xf7ffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x8000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xefffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xdfffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xbfffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if (((vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0x7fffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    if ((1U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = (
                                                   (0x23U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                                   & (0x203U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    if ((1U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid = (
                                                   (0x90U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                                   & (0x310U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    if (((IData)(vlSelf->top__DOT__my_keyboard__DOT__sampling) 
         ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__sampling))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__sampling 
            = vlSelf->top__DOT__my_keyboard__DOT__sampling;
    }
    if (((IData)(vlSelf->VGA_VSYNC) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_VSYNC))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__VGA_VSYNC = vlSelf->VGA_VSYNC;
    }
    if (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid) 
         ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__v_valid))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__v_valid 
            = vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid;
    }
    vlSelf->top__DOT__v_addr = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                              - (IData)(0x24U)))
                                 : 0U);
    if (((IData)(vlSelf->VGA_HSYNC) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_HSYNC))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__VGA_HSYNC = vlSelf->VGA_HSYNC;
    }
    if (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid) 
         ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid 
            = vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid;
    }
    if (vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid) {
        vlSelf->VGA_BLANK_N = vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid;
        vlSelf->top__DOT__h_addr = (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)));
    } else {
        vlSelf->VGA_BLANK_N = 0U;
        vlSelf->top__DOT__h_addr = 0U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3feU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3fdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3fbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3f7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3efU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3dfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3bfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x37fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__v_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x2ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__v_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x1ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if (((IData)(vlSelf->VGA_BLANK_N) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_BLANK_N))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__VGA_BLANK_N = vlSelf->VGA_BLANK_N;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3feU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3fdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3fbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3f7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3efU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3dfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3bfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x37fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__h_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x2ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__h_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x1ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    vlSelf->top__DOT__vga_data = vlSelf->top__DOT__my_vmem__DOT__vga_mem
        [(((IData)(vlSelf->top__DOT__h_addr) << 9U) 
          | (0x1ffU & (IData)(vlSelf->top__DOT__v_addr)))];
    if ((1U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffeU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (1U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((2U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffdU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (2U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((4U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffbU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (4U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((8U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffff7U 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (8U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x10U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffefU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x10U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x20U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffdfU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x20U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x40U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffbfU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x40U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x80U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffff7fU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x80U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x100U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffeffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x100U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x200U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffdffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x200U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x400U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffbffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x400U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x800U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfff7ffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x800U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffefffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x1000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffdfffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x2000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffbfffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x4000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xff7fffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x8000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfeffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x10000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfdffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x20000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfbffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x40000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xf7ffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x80000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xefffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x100000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xdfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x200000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xbfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x400000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0x7fffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x800000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    vlSelf->VGA_R = (0xffU & (vlSelf->top__DOT__vga_data 
                              >> 0x10U));
    vlSelf->VGA_G = (0xffU & (vlSelf->top__DOT__vga_data 
                              >> 8U));
    vlSelf->VGA_B = (0xffU & vlSelf->top__DOT__vga_data);
    if ((1U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (1U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((2U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (2U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((4U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (4U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((8U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (8U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x10U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x20U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x40U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x80U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((1U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (1U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((2U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (2U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((4U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (4U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((8U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (8U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x10U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x20U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x40U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x80U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((1U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (1U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((2U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (2U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((4U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (4U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((8U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (8U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x10U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x20U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x40U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x80U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->ledr = (((IData)(vlSelf->top__DOT__led1__DOT__led) 
                     << 8U) | (IData)(vlSelf->sw));
    if ((1U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (1U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((2U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (2U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((4U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (4U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((8U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfff7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (8U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x10U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x20U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x40U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x80U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xff7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x100U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfeffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x100U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x200U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfdffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x200U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x400U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfbffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x400U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x800U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xf7ffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x800U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x1000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xefffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x1000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x2000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xdfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x2000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x4000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xbfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x4000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x8000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0x7fffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->ledr)));
    }
}
