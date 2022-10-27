// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[271]);
    ++(vlSymsp->__Vcoverage[277]);
    ++(vlSymsp->__Vcoverage[283]);
    ++(vlSymsp->__Vcoverage[355]);
    vlSelf->top__DOT__mu_seg__DOT__segs[0U] = 0xfdU;
    vlSelf->top__DOT__mu_seg__DOT__segs[1U] = 0x60U;
    vlSelf->top__DOT__mu_seg__DOT__segs[2U] = 0xdaU;
    vlSelf->top__DOT__mu_seg__DOT__segs[3U] = 0xf2U;
    vlSelf->top__DOT__mu_seg__DOT__segs[4U] = 0x66U;
    vlSelf->top__DOT__mu_seg__DOT__segs[5U] = 0xb6U;
    vlSelf->top__DOT__mu_seg__DOT__segs[6U] = 0xbeU;
    vlSelf->top__DOT__mu_seg__DOT__segs[7U] = 0xe0U;
    if ((0U == (IData)(vlSelf->s))) {
        ++(vlSymsp->__Vcoverage[266]);
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
            ++(vlSymsp->__Vcoverage[267]);
        }
        if ((1U != (IData)(vlSelf->s))) {
            if ((2U == (IData)(vlSelf->s))) {
                ++(vlSymsp->__Vcoverage[268]);
            }
            if ((2U != (IData)(vlSelf->s))) {
                if ((3U == (IData)(vlSelf->s))) {
                    ++(vlSymsp->__Vcoverage[269]);
                }
                if ((3U != (IData)(vlSelf->s))) {
                    ++(vlSymsp->__Vcoverage[270]);
                }
            }
        }
    }
    if (vlSelf->en) {
        ++(vlSymsp->__Vcoverage[274]);
        ++(vlSymsp->__Vcoverage[274]);
        ++(vlSymsp->__Vcoverage[274]);
        ++(vlSymsp->__Vcoverage[274]);
        ++(vlSymsp->__Vcoverage[274]);
        ++(vlSymsp->__Vcoverage[274]);
        ++(vlSymsp->__Vcoverage[274]);
        ++(vlSymsp->__Vcoverage[274]);
        ++(vlSymsp->__Vcoverage[275]);
        if ((6U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[272]);
        }
        if ((5U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[272]);
        }
        if ((4U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[273]);
        }
        if ((4U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[272]);
        }
        if ((3U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[273]);
        }
        if ((3U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[272]);
        }
        if ((6U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[273]);
        }
        if ((0U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[272]);
        }
        if ((0U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[273]);
        }
        if ((5U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[273]);
        }
        if ((1U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[272]);
        }
        if ((1U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[273]);
        }
        if ((2U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[272]);
        }
        if ((2U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[273]);
        }
        if ((7U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[272]);
        }
        if ((7U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[273]);
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
        ++(vlSymsp->__Vcoverage[276]);
    }
    if (vlSelf->ec_en) {
        ++(vlSymsp->__Vcoverage[280]);
        ++(vlSymsp->__Vcoverage[280]);
        ++(vlSymsp->__Vcoverage[280]);
        ++(vlSymsp->__Vcoverage[280]);
        ++(vlSymsp->__Vcoverage[280]);
        ++(vlSymsp->__Vcoverage[280]);
        ++(vlSymsp->__Vcoverage[280]);
        ++(vlSymsp->__Vcoverage[280]);
        ++(vlSymsp->__Vcoverage[281]);
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 4U)))) {
            ++(vlSymsp->__Vcoverage[279]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 3U)))) {
            ++(vlSymsp->__Vcoverage[279]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 1U)))) {
            ++(vlSymsp->__Vcoverage[279]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 5U)))) {
            ++(vlSymsp->__Vcoverage[279]);
        }
        if ((1U & (~ (IData)(vlSelf->ec_x)))) {
            ++(vlSymsp->__Vcoverage[279]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 6U)))) {
            ++(vlSymsp->__Vcoverage[279]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 2U)))) {
            ++(vlSymsp->__Vcoverage[279]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 7U)))) {
            ++(vlSymsp->__Vcoverage[279]);
        }
        vlSelf->top__DOT__encoder__DOT__i = 8U;
        vlSelf->ec_y = 0U;
        if ((1U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[278]);
            vlSelf->ec_y = 0U;
        }
        if ((2U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[278]);
            vlSelf->ec_y = 1U;
        }
        if ((4U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[278]);
            vlSelf->ec_y = 2U;
        }
        if ((8U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[278]);
            vlSelf->ec_y = 3U;
        }
        if ((0x10U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[278]);
            vlSelf->ec_y = 4U;
        }
        if ((0x20U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[278]);
            vlSelf->ec_y = 5U;
        }
        if ((0x40U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[278]);
            vlSelf->ec_y = 6U;
        }
        if ((0x80U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[278]);
            vlSelf->ec_y = 7U;
        }
    } else {
        vlSelf->ec_y = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ec_en)))) {
        ++(vlSymsp->__Vcoverage[282]);
    }
    if ((4U & (IData)(vlSelf->alu_fnselec))) {
        if ((2U & (IData)(vlSelf->alu_fnselec))) {
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                ++(vlSymsp->__Vcoverage[350]);
                if (((IData)(vlSelf->alu_a) >= (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[349]);
                }
                if (((IData)(vlSelf->alu_a) < (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[348]);
                }
            }
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[353]);
                if (((IData)(vlSelf->alu_a) != (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[352]);
                }
                if (((IData)(vlSelf->alu_a) == (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[351]);
                    vlSelf->alu_res = 1U;
                } else {
                    vlSelf->alu_res = 0U;
                }
                vlSelf->alu_overflow = 0U;
                vlSelf->alu_zero = 0U;
            } else {
                vlSelf->alu_res = (((IData)(vlSelf->alu_a) 
                                    < (IData)(vlSelf->alu_b))
                                    ? 1U : 0U);
                vlSelf->alu_overflow = 0U;
                vlSelf->alu_zero = 0U;
            }
        } else if ((1U & (IData)(vlSelf->alu_fnselec))) {
            vlSelf->alu_res = ((IData)(vlSelf->alu_a) 
                               ^ (IData)(vlSelf->alu_b));
            vlSelf->alu_overflow = 0U;
            vlSelf->alu_zero = 0U;
        } else {
            vlSelf->alu_res = ((IData)(vlSelf->alu_a) 
                               | (IData)(vlSelf->alu_b));
            vlSelf->alu_overflow = 0U;
            vlSelf->alu_zero = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->alu_fnselec) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                ++(vlSymsp->__Vcoverage[346]);
            }
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[347]);
            }
        }
        vlSelf->alu_carry = 0U;
    } else if ((2U & (IData)(vlSelf->alu_fnselec))) {
        vlSelf->alu_carry = 0U;
        if ((1U & (IData)(vlSelf->alu_fnselec))) {
            vlSelf->alu_res = ((IData)(vlSelf->alu_a) 
                               & (IData)(vlSelf->alu_b));
            vlSelf->alu_overflow = 0U;
            vlSelf->alu_zero = 0U;
        } else {
            vlSelf->alu_res = (0xfU & (~ (IData)(vlSelf->alu_a)));
            vlSelf->alu_overflow = 0U;
            vlSelf->alu_zero = 0U;
        }
    } else if ((1U & (IData)(vlSelf->alu_fnselec))) {
        vlSelf->alu_carry = 0U;
        vlSelf->alu_carry = (1U & (((IData)(vlSelf->alu_a) 
                                    + (IData)(vlSelf->top__DOT__alu__DOT__unnamedblk1__DOT__tmp)) 
                                   >> 4U));
        vlSelf->alu_res = (0xfU & ((IData)(vlSelf->alu_a) 
                                   + (IData)(vlSelf->top__DOT__alu__DOT__unnamedblk1__DOT__tmp)));
        vlSelf->alu_overflow = (((1U & ((IData)(vlSelf->alu_a) 
                                        >> 3U)) == 
                                 (1U & ((IData)(vlSelf->alu_b) 
                                        >> 3U))) & 
                                ((1U & ((IData)(vlSelf->alu_res) 
                                        >> 3U)) != 
                                 (1U & ((IData)(vlSelf->alu_a) 
                                        >> 3U))));
        vlSelf->alu_zero = (1U & (~ (IData)((0U != (IData)(vlSelf->alu_res)))));
    } else {
        vlSelf->alu_carry = 0U;
        vlSelf->alu_carry = (1U & (((IData)(vlSelf->alu_a) 
                                    + (IData)(vlSelf->alu_b)) 
                                   >> 4U));
        vlSelf->alu_res = (0xfU & ((IData)(vlSelf->alu_a) 
                                   + (IData)(vlSelf->alu_b)));
        vlSelf->alu_overflow = (((1U & ((IData)(vlSelf->alu_a) 
                                        >> 3U)) == 
                                 (1U & ((IData)(vlSelf->alu_b) 
                                        >> 3U))) & 
                                ((1U & ((IData)(vlSelf->alu_res) 
                                        >> 3U)) != 
                                 (1U & ((IData)(vlSelf->alu_a) 
                                        >> 3U))));
        vlSelf->alu_zero = (1U & (~ (IData)((0U != (IData)(vlSelf->alu_res)))));
    }
    if ((1U & (~ ((IData)(vlSelf->alu_fnselec) >> 2U)))) {
        if ((2U & (IData)(vlSelf->alu_fnselec))) {
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                ++(vlSymsp->__Vcoverage[344]);
            }
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[345]);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->alu_fnselec) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[343]);
            }
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                ++(vlSymsp->__Vcoverage[342]);
            }
        }
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
    if (((IData)(vlSelf->en) ^ (IData)(vlSelf->top__DOT____Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__en = vlSelf->en;
    }
    if (((IData)(vlSelf->ec_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_en))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__ec_en = vlSelf->ec_en;
    }
    if ((1U ^ ((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__resetn)))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__resetn 
            = (1U & (~ (IData)(vlSelf->rst)));
    }
    if ((1U & ((IData)(vlSelf->s) ^ (IData)(vlSelf->top__DOT____Vtogcov__s)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__s = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__s)) 
                                          | (1U & (IData)(vlSelf->s)));
    }
    if ((2U & ((IData)(vlSelf->s) ^ (IData)(vlSelf->top__DOT____Vtogcov__s)))) {
        ++(vlSymsp->__Vcoverage[48]);
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
    if ((1U & ((IData)(vlSelf->alu_fnselec) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__alu_fnselec = 
            ((6U & (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)) 
             | (1U & (IData)(vlSelf->alu_fnselec)));
    }
    if ((2U & ((IData)(vlSelf->alu_fnselec) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__alu_fnselec = 
            ((5U & (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)) 
             | (2U & (IData)(vlSelf->alu_fnselec)));
    }
    if ((4U & ((IData)(vlSelf->alu_fnselec) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__alu_fnselec = 
            ((3U & (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)) 
             | (4U & (IData)(vlSelf->alu_fnselec)));
    }
    if ((1U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__alu_a = ((0xeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (1U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((2U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__alu_a = ((0xdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (2U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((4U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__alu_a = ((0xbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (4U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((8U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__alu_a = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (8U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((1U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__alu_b = ((0xeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (1U 
                                                 & (IData)(vlSelf->alu_b)));
    }
    if ((2U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__alu_b = ((0xdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (2U 
                                                 & (IData)(vlSelf->alu_b)));
    }
    if ((4U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__alu_b = ((0xbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (4U 
                                                 & (IData)(vlSelf->alu_b)));
    }
    if ((8U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__alu_b = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (8U 
                                                 & (IData)(vlSelf->alu_b)));
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
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((5U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((3U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((6U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((5U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((3U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (4U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xeU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xdU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xbU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((7U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    vlSelf->top__DOT__my_keyboard__DOT__sampling = (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))));
    if ((1U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfeU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (1U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfdU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (2U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfbU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (4U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xf7U & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (8U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xefU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x10U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xdfU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x20U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xbfU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x40U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0x7fU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x80U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                   ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                   ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((1U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffeU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (1U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((2U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffdU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (2U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((4U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffbU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (4U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((8U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffff7U & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (8U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffefU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffdfU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffbfU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x80U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffff7fU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x100U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffeffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x100U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x200U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffdffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x200U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x400U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffbffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x400U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x800U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffff7ffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x800U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x1000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffefffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x1000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x2000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffdfffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x2000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x4000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffbfffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x4000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x8000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffff7fffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x8000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffeffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffdffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffbffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x80000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfff7ffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x100000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffefffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x100000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x200000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffdfffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x200000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x400000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffbfffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x400000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x800000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xff7fffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x800000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x1000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfeffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x1000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x2000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfdffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x2000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x4000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfbffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x4000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x8000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xf7ffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x8000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xefffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xdfffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xbfffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if (((vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0x7fffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (1U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (2U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (4U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffff7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (8U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffff7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x100U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffeffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x100U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x200U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffdffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x200U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x400U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffbffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x400U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x800U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffff7ffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x800U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x1000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffefffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x1000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x2000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffdfffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x2000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x4000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffbfffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x4000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x8000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffff7fffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x8000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffeffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffdffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffbffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x80000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfff7ffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x100000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffefffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x100000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x200000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffdfffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x200000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x400000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffbfffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x400000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x800000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xff7fffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x800000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfeffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x1000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfdffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x2000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfbffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x4000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xf7ffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x8000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xefffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xdfffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xbfffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if (((vlSelf->top__DOT__mu_seg__DOT__count ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0x7fffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    vlSelf->ledr = (((IData)(vlSelf->top__DOT__led1__DOT__led) 
                     << 8U) | (IData)(vlSelf->sw));
    vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid = (
                                                   (0x90U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                                   & (0x310U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = (
                                                   (0x23U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                                   & (0x203U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    vlSelf->seg1 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [1U]));
    vlSelf->seg2 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [7U]));
    vlSelf->seg3 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [6U]));
    vlSelf->seg4 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [4U]));
    vlSelf->seg5 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [5U]));
    vlSelf->seg6 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [3U]));
    vlSelf->seg7 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [2U]));
    vlSelf->seg1 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [1U]));
    vlSelf->seg2 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [7U]));
    vlSelf->seg3 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [6U]));
    vlSelf->seg4 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [4U]));
    vlSelf->seg5 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [5U]));
    vlSelf->seg6 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [3U]));
    vlSelf->seg7 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [2U]));
    vlSelf->seg0 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [(7U & vlSelf->top__DOT__mu_seg__DOT__x)]));
    if (((IData)(vlSelf->VGA_CLK) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_CLK))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__VGA_CLK = vlSelf->VGA_CLK;
    }
    if (((IData)(vlSelf->alu_carry) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_carry))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT____Vtogcov__alu_carry = vlSelf->alu_carry;
    }
    if ((1U & ((IData)(vlSelf->y) ^ (IData)(vlSelf->top__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT____Vtogcov__y = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__y)) 
                                          | (1U & (IData)(vlSelf->y)));
    }
    if ((2U & ((IData)(vlSelf->y) ^ (IData)(vlSelf->top__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT____Vtogcov__y = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__y)) 
                                          | (2U & (IData)(vlSelf->y)));
    }
    if ((1U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (1U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if ((2U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (2U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if ((4U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (4U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if (((IData)(vlSelf->alu_overflow) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_overflow))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT____Vtogcov__alu_overflow = vlSelf->alu_overflow;
    }
    if (((IData)(vlSelf->alu_zero) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_zero))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT____Vtogcov__alu_zero = vlSelf->alu_zero;
    }
    if ((1U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xeU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (1U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((2U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xdU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (2U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((4U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xbU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (4U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((8U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((7U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (8U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((1U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (1U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((2U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (2U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((4U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (4U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((8U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (8U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x10U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x20U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x40U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x80U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if (((IData)(vlSelf->VGA_HSYNC) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_HSYNC))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__VGA_HSYNC = vlSelf->VGA_HSYNC;
    }
    if (((IData)(vlSelf->VGA_VSYNC) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_VSYNC))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__VGA_VSYNC = vlSelf->VGA_VSYNC;
    }
    if (((IData)(vlSelf->top__DOT__my_keyboard__DOT__sampling) 
         ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__sampling))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__sampling 
            = vlSelf->top__DOT__my_keyboard__DOT__sampling;
    }
    if ((1U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (1U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((2U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (2U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((4U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (4U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((8U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfff7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (8U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x10U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x20U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x40U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x80U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xff7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x100U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfeffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x100U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x200U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfdffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x200U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x400U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfbffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x400U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x800U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xf7ffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x800U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x1000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xefffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x1000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x2000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xdfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x2000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x4000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xbfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x4000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x8000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0x7fffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid) 
         ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid 
            = vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid;
    }
    vlSelf->top__DOT__h_addr = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U);
    if (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid) 
         ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__v_valid))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__v_valid 
            = vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid;
    }
    if (vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid) {
        vlSelf->VGA_BLANK_N = vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid;
        vlSelf->top__DOT__v_addr = (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                              - (IData)(0x24U)));
    } else {
        vlSelf->VGA_BLANK_N = 0U;
        vlSelf->top__DOT__v_addr = 0U;
    }
    if ((1U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((2U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((4U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((8U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x10U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x20U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x40U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x80U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((1U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((2U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((4U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((8U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x10U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x20U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x40U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x80U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((1U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((2U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((4U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((8U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x10U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x20U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x40U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x80U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((1U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((2U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((4U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((8U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x10U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x20U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x40U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x80U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((1U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((2U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((4U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((8U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x10U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x20U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x40U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x80U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((1U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((2U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((4U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((8U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x10U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x20U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x40U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x80U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((1U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((2U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((4U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((8U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x10U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x20U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x40U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x80U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((1U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((2U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((4U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((8U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x10U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x20U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x40U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x80U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((1U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((2U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((4U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((8U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x10U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x20U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x40U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x80U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((1U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((2U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((4U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((8U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x10U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x20U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x40U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x80U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((1U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((2U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((4U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((8U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x10U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x20U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x40U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x80U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((1U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((2U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((4U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((8U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x10U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x20U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x40U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x80U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((1U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((2U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((4U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((8U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x10U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x20U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x40U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x80U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((1U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((2U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((4U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((8U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x10U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x20U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x40U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x80U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((1U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((2U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((4U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((8U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x10U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x20U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x40U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x80U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3feU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3fdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3fbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3f7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3efU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3dfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3bfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x37fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__h_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x2ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__h_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x1ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if (((IData)(vlSelf->VGA_BLANK_N) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_BLANK_N))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__VGA_BLANK_N = vlSelf->VGA_BLANK_N;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3feU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3fdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3fbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3f7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3efU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3dfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3bfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x37fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__v_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x2ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__v_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x1ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h161bb746__0;
    // Body
    __Vtemp_h161bb746__0[0U] = 0x2e686578U;
    __Vtemp_h161bb746__0[1U] = 0x74757265U;
    __Vtemp_h161bb746__0[2U] = 0x2f706963U;
    __Vtemp_h161bb746__0[3U] = 0x75726365U;
    __Vtemp_h161bb746__0[4U] = 0x7265736fU;
    VL_READMEM_N(true, 24, 524288, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h161bb746__0)
                 ,  &(vlSelf->top__DOT__my_vmem__DOT__vga_mem)
                 , 0, ~0ULL);
    ++(vlSymsp->__Vcoverage[460]);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__vga_data = vlSelf->top__DOT__my_vmem__DOT__vga_mem
        [(((IData)(vlSelf->top__DOT__h_addr) << 9U) 
          | (0x1ffU & (IData)(vlSelf->top__DOT__v_addr)))];
    if ((1U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffeU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (1U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((2U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffdU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (2U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((4U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffbU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (4U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((8U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffff7U 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (8U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x10U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffefU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x10U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x20U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffdfU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x20U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x40U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffbfU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x40U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x80U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffff7fU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x80U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x100U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffeffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x100U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x200U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffdffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x200U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x400U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffbffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x400U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x800U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfff7ffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x800U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffefffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x1000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffdfffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x2000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffbfffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x4000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xff7fffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x8000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfeffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x10000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfdffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x20000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfbffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x40000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xf7ffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x80000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xefffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x100000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xdfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x200000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xbfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | (0x400000U 
                                                    & vlSelf->top__DOT__vga_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__vga_data ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[220]);
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
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (1U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((2U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (2U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((4U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (4U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((8U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (8U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x10U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x20U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x40U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x80U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((1U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (1U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((2U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (2U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((4U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (4U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((8U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (8U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x10U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x20U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x40U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x80U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((1U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (1U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((2U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (2U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((4U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (4U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((8U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (8U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x10U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x20U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x40U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x80U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/top.v", 2, 11, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/top.v", 3, 11, ".top", "v_toggle/top", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "vsrc/top.v", 4, 17, ".top", "v_toggle/top", "sw[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "vsrc/top.v", 4, 17, ".top", "v_toggle/top", "sw[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "vsrc/top.v", 4, 17, ".top", "v_toggle/top", "sw[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "vsrc/top.v", 4, 17, ".top", "v_toggle/top", "sw[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "vsrc/top.v", 4, 17, ".top", "v_toggle/top", "sw[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "vsrc/top.v", 4, 17, ".top", "v_toggle/top", "sw[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "vsrc/top.v", 4, 17, ".top", "v_toggle/top", "sw[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "vsrc/top.v", 4, 17, ".top", "v_toggle/top", "sw[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "vsrc/top.v", 5, 11, ".top", "v_toggle/top", "ps2_clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "vsrc/top.v", 6, 11, ".top", "v_toggle/top", "ps2_data", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "vsrc/top.v", 7, 14, ".top", "v_toggle/top", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "vsrc/top.v", 7, 14, ".top", "v_toggle/top", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "vsrc/top.v", 7, 14, ".top", "v_toggle/top", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "vsrc/top.v", 7, 14, ".top", "v_toggle/top", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "vsrc/top.v", 7, 14, ".top", "v_toggle/top", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "vsrc/top.v", 7, 14, ".top", "v_toggle/top", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "vsrc/top.v", 7, 14, ".top", "v_toggle/top", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "vsrc/top.v", 7, 14, ".top", "v_toggle/top", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "vsrc/top.v", 8, 14, ".top", "v_toggle/top", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "vsrc/top.v", 8, 14, ".top", "v_toggle/top", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "vsrc/top.v", 8, 14, ".top", "v_toggle/top", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "vsrc/top.v", 9, 14, ".top", "v_toggle/top", "ec_x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "vsrc/top.v", 9, 14, ".top", "v_toggle/top", "ec_x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "vsrc/top.v", 9, 14, ".top", "v_toggle/top", "ec_x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "vsrc/top.v", 9, 14, ".top", "v_toggle/top", "ec_x[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "vsrc/top.v", 9, 14, ".top", "v_toggle/top", "ec_x[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "vsrc/top.v", 9, 14, ".top", "v_toggle/top", "ec_x[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "vsrc/top.v", 9, 14, ".top", "v_toggle/top", "ec_x[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "vsrc/top.v", 9, 14, ".top", "v_toggle/top", "ec_x[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "vsrc/top.v", 10, 14, ".top", "v_toggle/top", "seg_x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "vsrc/top.v", 10, 14, ".top", "v_toggle/top", "seg_x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "vsrc/top.v", 10, 14, ".top", "v_toggle/top", "seg_x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "vsrc/top.v", 11, 14, ".top", "v_toggle/top", "alu_fnselec[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "vsrc/top.v", 11, 14, ".top", "v_toggle/top", "alu_fnselec[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/top.v", 11, 14, ".top", "v_toggle/top", "alu_fnselec[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "vsrc/top.v", 12, 14, ".top", "v_toggle/top", "alu_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "vsrc/top.v", 12, 14, ".top", "v_toggle/top", "alu_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "vsrc/top.v", 12, 14, ".top", "v_toggle/top", "alu_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "vsrc/top.v", 12, 14, ".top", "v_toggle/top", "alu_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "vsrc/top.v", 13, 14, ".top", "v_toggle/top", "alu_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "vsrc/top.v", 13, 14, ".top", "v_toggle/top", "alu_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "vsrc/top.v", 13, 14, ".top", "v_toggle/top", "alu_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "vsrc/top.v", 13, 14, ".top", "v_toggle/top", "alu_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "vsrc/top.v", 14, 8, ".top", "v_toggle/top", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "vsrc/top.v", 15, 8, ".top", "v_toggle/top", "ec_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "vsrc/top.v", 16, 14, ".top", "v_toggle/top", "s[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "vsrc/top.v", 16, 14, ".top", "v_toggle/top", "s[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "vsrc/top.v", 17, 19, ".top", "v_toggle/top", "ledr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "vsrc/top.v", 18, 12, ".top", "v_toggle/top", "VGA_CLK", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "vsrc/top.v", 19, 12, ".top", "v_toggle/top", "VGA_HSYNC", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "vsrc/top.v", 20, 12, ".top", "v_toggle/top", "VGA_VSYNC", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "vsrc/top.v", 21, 12, ".top", "v_toggle/top", "VGA_BLANK_N", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "vsrc/top.v", 22, 18, ".top", "v_toggle/top", "VGA_R[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "vsrc/top.v", 22, 18, ".top", "v_toggle/top", "VGA_R[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "vsrc/top.v", 22, 18, ".top", "v_toggle/top", "VGA_R[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "vsrc/top.v", 22, 18, ".top", "v_toggle/top", "VGA_R[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "vsrc/top.v", 22, 18, ".top", "v_toggle/top", "VGA_R[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "vsrc/top.v", 22, 18, ".top", "v_toggle/top", "VGA_R[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "vsrc/top.v", 22, 18, ".top", "v_toggle/top", "VGA_R[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "vsrc/top.v", 22, 18, ".top", "v_toggle/top", "VGA_R[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "vsrc/top.v", 23, 18, ".top", "v_toggle/top", "VGA_G[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "vsrc/top.v", 23, 18, ".top", "v_toggle/top", "VGA_G[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "vsrc/top.v", 23, 18, ".top", "v_toggle/top", "VGA_G[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "vsrc/top.v", 23, 18, ".top", "v_toggle/top", "VGA_G[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "vsrc/top.v", 23, 18, ".top", "v_toggle/top", "VGA_G[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "vsrc/top.v", 23, 18, ".top", "v_toggle/top", "VGA_G[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "vsrc/top.v", 23, 18, ".top", "v_toggle/top", "VGA_G[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "vsrc/top.v", 23, 18, ".top", "v_toggle/top", "VGA_G[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "vsrc/top.v", 24, 18, ".top", "v_toggle/top", "VGA_B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "vsrc/top.v", 24, 18, ".top", "v_toggle/top", "VGA_B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "vsrc/top.v", 24, 18, ".top", "v_toggle/top", "VGA_B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "vsrc/top.v", 24, 18, ".top", "v_toggle/top", "VGA_B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "vsrc/top.v", 24, 18, ".top", "v_toggle/top", "VGA_B[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "vsrc/top.v", 24, 18, ".top", "v_toggle/top", "VGA_B[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "vsrc/top.v", 24, 18, ".top", "v_toggle/top", "VGA_B[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "vsrc/top.v", 24, 18, ".top", "v_toggle/top", "VGA_B[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "vsrc/top.v", 25, 18, ".top", "v_toggle/top", "seg0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "vsrc/top.v", 25, 18, ".top", "v_toggle/top", "seg0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "vsrc/top.v", 25, 18, ".top", "v_toggle/top", "seg0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "vsrc/top.v", 25, 18, ".top", "v_toggle/top", "seg0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "vsrc/top.v", 25, 18, ".top", "v_toggle/top", "seg0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "vsrc/top.v", 25, 18, ".top", "v_toggle/top", "seg0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "vsrc/top.v", 25, 18, ".top", "v_toggle/top", "seg0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "vsrc/top.v", 25, 18, ".top", "v_toggle/top", "seg0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "vsrc/top.v", 26, 18, ".top", "v_toggle/top", "seg1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "vsrc/top.v", 26, 18, ".top", "v_toggle/top", "seg1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "vsrc/top.v", 26, 18, ".top", "v_toggle/top", "seg1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "vsrc/top.v", 26, 18, ".top", "v_toggle/top", "seg1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "vsrc/top.v", 26, 18, ".top", "v_toggle/top", "seg1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "vsrc/top.v", 26, 18, ".top", "v_toggle/top", "seg1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "vsrc/top.v", 26, 18, ".top", "v_toggle/top", "seg1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "vsrc/top.v", 26, 18, ".top", "v_toggle/top", "seg1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "vsrc/top.v", 27, 18, ".top", "v_toggle/top", "seg2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "vsrc/top.v", 27, 18, ".top", "v_toggle/top", "seg2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "vsrc/top.v", 27, 18, ".top", "v_toggle/top", "seg2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "vsrc/top.v", 27, 18, ".top", "v_toggle/top", "seg2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "vsrc/top.v", 27, 18, ".top", "v_toggle/top", "seg2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "vsrc/top.v", 27, 18, ".top", "v_toggle/top", "seg2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "vsrc/top.v", 27, 18, ".top", "v_toggle/top", "seg2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "vsrc/top.v", 27, 18, ".top", "v_toggle/top", "seg2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "vsrc/top.v", 28, 18, ".top", "v_toggle/top", "seg3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "vsrc/top.v", 28, 18, ".top", "v_toggle/top", "seg3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "vsrc/top.v", 28, 18, ".top", "v_toggle/top", "seg3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "vsrc/top.v", 28, 18, ".top", "v_toggle/top", "seg3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "vsrc/top.v", 28, 18, ".top", "v_toggle/top", "seg3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "vsrc/top.v", 28, 18, ".top", "v_toggle/top", "seg3[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "vsrc/top.v", 28, 18, ".top", "v_toggle/top", "seg3[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "vsrc/top.v", 28, 18, ".top", "v_toggle/top", "seg3[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "vsrc/top.v", 29, 18, ".top", "v_toggle/top", "seg4[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "vsrc/top.v", 29, 18, ".top", "v_toggle/top", "seg4[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "vsrc/top.v", 29, 18, ".top", "v_toggle/top", "seg4[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "vsrc/top.v", 29, 18, ".top", "v_toggle/top", "seg4[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "vsrc/top.v", 29, 18, ".top", "v_toggle/top", "seg4[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "vsrc/top.v", 29, 18, ".top", "v_toggle/top", "seg4[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "vsrc/top.v", 29, 18, ".top", "v_toggle/top", "seg4[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "vsrc/top.v", 29, 18, ".top", "v_toggle/top", "seg4[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "vsrc/top.v", 30, 18, ".top", "v_toggle/top", "seg5[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "vsrc/top.v", 30, 18, ".top", "v_toggle/top", "seg5[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "vsrc/top.v", 30, 18, ".top", "v_toggle/top", "seg5[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "vsrc/top.v", 30, 18, ".top", "v_toggle/top", "seg5[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "vsrc/top.v", 30, 18, ".top", "v_toggle/top", "seg5[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "vsrc/top.v", 30, 18, ".top", "v_toggle/top", "seg5[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "vsrc/top.v", 30, 18, ".top", "v_toggle/top", "seg5[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "vsrc/top.v", 30, 18, ".top", "v_toggle/top", "seg5[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "vsrc/top.v", 31, 18, ".top", "v_toggle/top", "seg6[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "vsrc/top.v", 31, 18, ".top", "v_toggle/top", "seg6[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "vsrc/top.v", 31, 18, ".top", "v_toggle/top", "seg6[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "vsrc/top.v", 31, 18, ".top", "v_toggle/top", "seg6[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "vsrc/top.v", 31, 18, ".top", "v_toggle/top", "seg6[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "vsrc/top.v", 31, 18, ".top", "v_toggle/top", "seg6[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "vsrc/top.v", 31, 18, ".top", "v_toggle/top", "seg6[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "vsrc/top.v", 31, 18, ".top", "v_toggle/top", "seg6[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "vsrc/top.v", 32, 18, ".top", "v_toggle/top", "seg7[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "vsrc/top.v", 32, 18, ".top", "v_toggle/top", "seg7[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "vsrc/top.v", 32, 18, ".top", "v_toggle/top", "seg7[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "vsrc/top.v", 32, 18, ".top", "v_toggle/top", "seg7[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "vsrc/top.v", 32, 18, ".top", "v_toggle/top", "seg7[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "vsrc/top.v", 32, 18, ".top", "v_toggle/top", "seg7[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "vsrc/top.v", 32, 18, ".top", "v_toggle/top", "seg7[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "vsrc/top.v", 32, 18, ".top", "v_toggle/top", "seg7[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "vsrc/top.v", 33, 19, ".top", "v_toggle/top", "y[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "vsrc/top.v", 33, 19, ".top", "v_toggle/top", "y[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "vsrc/top.v", 34, 19, ".top", "v_toggle/top", "ec_y[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "vsrc/top.v", 34, 19, ".top", "v_toggle/top", "ec_y[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "vsrc/top.v", 34, 19, ".top", "v_toggle/top", "ec_y[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "vsrc/top.v", 35, 19, ".top", "v_toggle/top", "y_dec[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "vsrc/top.v", 35, 19, ".top", "v_toggle/top", "y_dec[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "vsrc/top.v", 35, 19, ".top", "v_toggle/top", "y_dec[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "vsrc/top.v", 35, 19, ".top", "v_toggle/top", "y_dec[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "vsrc/top.v", 35, 19, ".top", "v_toggle/top", "y_dec[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "vsrc/top.v", 35, 19, ".top", "v_toggle/top", "y_dec[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "vsrc/top.v", 35, 19, ".top", "v_toggle/top", "y_dec[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "vsrc/top.v", 35, 19, ".top", "v_toggle/top", "y_dec[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "vsrc/top.v", 36, 15, ".top", "v_toggle/top", "alu_res[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "vsrc/top.v", 36, 15, ".top", "v_toggle/top", "alu_res[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "vsrc/top.v", 36, 15, ".top", "v_toggle/top", "alu_res[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "vsrc/top.v", 36, 15, ".top", "v_toggle/top", "alu_res[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "vsrc/top.v", 37, 9, ".top", "v_toggle/top", "alu_zero", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "vsrc/top.v", 38, 9, ".top", "v_toggle/top", "alu_overflow", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "vsrc/top.v", 39, 9, ".top", "v_toggle/top", "alu_carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "vsrc/top.v", 75, 12, ".top", "v_toggle/top", "h_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "vsrc/top.v", 75, 12, ".top", "v_toggle/top", "h_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "vsrc/top.v", 75, 12, ".top", "v_toggle/top", "h_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "vsrc/top.v", 75, 12, ".top", "v_toggle/top", "h_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "vsrc/top.v", 75, 12, ".top", "v_toggle/top", "h_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "vsrc/top.v", 75, 12, ".top", "v_toggle/top", "h_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "vsrc/top.v", 75, 12, ".top", "v_toggle/top", "h_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "vsrc/top.v", 75, 12, ".top", "v_toggle/top", "h_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "vsrc/top.v", 75, 12, ".top", "v_toggle/top", "h_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "vsrc/top.v", 75, 12, ".top", "v_toggle/top", "h_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "vsrc/top.v", 76, 12, ".top", "v_toggle/top", "v_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "vsrc/top.v", 76, 12, ".top", "v_toggle/top", "v_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "vsrc/top.v", 76, 12, ".top", "v_toggle/top", "v_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "vsrc/top.v", 76, 12, ".top", "v_toggle/top", "v_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "vsrc/top.v", 76, 12, ".top", "v_toggle/top", "v_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "vsrc/top.v", 76, 12, ".top", "v_toggle/top", "v_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "vsrc/top.v", 76, 12, ".top", "v_toggle/top", "v_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "vsrc/top.v", 76, 12, ".top", "v_toggle/top", "v_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "vsrc/top.v", 76, 12, ".top", "v_toggle/top", "v_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "vsrc/top.v", 76, 12, ".top", "v_toggle/top", "v_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "vsrc/top.v", 77, 13, ".top", "v_toggle/top", "vga_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/led.v", 2, 9, ".top.led1", "v_toggle/led", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/led.v", 3, 9, ".top.led1", "v_toggle/led", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "vsrc/led.v", 4, 15, ".top.led1", "v_toggle/led", "sw[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "vsrc/led.v", 4, 15, ".top.led1", "v_toggle/led", "sw[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "vsrc/led.v", 4, 15, ".top.led1", "v_toggle/led", "sw[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "vsrc/led.v", 4, 15, ".top.led1", "v_toggle/led", "sw[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "vsrc/led.v", 4, 15, ".top.led1", "v_toggle/led", "sw[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "vsrc/led.v", 4, 15, ".top.led1", "v_toggle/led", "sw[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "vsrc/led.v", 4, 15, ".top.led1", "v_toggle/led", "sw[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "vsrc/led.v", 4, 15, ".top.led1", "v_toggle/led", "sw[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "vsrc/led.v", 5, 17, ".top.led1", "v_toggle/led", "ledr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "vsrc/led.v", 7, 14, ".top.led1", "v_toggle/led", "count[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "vsrc/led.v", 8, 13, ".top.led1", "v_toggle/led", "led[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "vsrc/led.v", 8, 13, ".top.led1", "v_toggle/led", "led[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "vsrc/led.v", 8, 13, ".top.led1", "v_toggle/led", "led[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "vsrc/led.v", 8, 13, ".top.led1", "v_toggle/led", "led[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "vsrc/led.v", 8, 13, ".top.led1", "v_toggle/led", "led[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "vsrc/led.v", 8, 13, ".top.led1", "v_toggle/led", "led[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "vsrc/led.v", 8, 13, ".top.led1", "v_toggle/led", "led[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "vsrc/led.v", 8, 13, ".top.led1", "v_toggle/led", "led[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "vsrc/led.v", 12, 7, ".top.led1", "v_branch/led", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "vsrc/led.v", 12, 8, ".top.led1", "v_branch/led", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "vsrc/led.v", 10, 5, ".top.led1", "v_branch/led", "if", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "vsrc/led.v", 10, 6, ".top.led1", "v_branch/led", "else", "11,13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "vsrc/led.v", 9, 3, ".top.led1", "v_line/led", "block", "9");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "vsrc/multiselector.v", 2, 16, ".top.mux", "v_toggle/mux41", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "vsrc/multiselector.v", 2, 16, ".top.mux", "v_toggle/mux41", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "vsrc/multiselector.v", 2, 16, ".top.mux", "v_toggle/mux41", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "vsrc/multiselector.v", 2, 16, ".top.mux", "v_toggle/mux41", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "vsrc/multiselector.v", 2, 16, ".top.mux", "v_toggle/mux41", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "vsrc/multiselector.v", 2, 16, ".top.mux", "v_toggle/mux41", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "vsrc/multiselector.v", 2, 16, ".top.mux", "v_toggle/mux41", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "vsrc/multiselector.v", 2, 16, ".top.mux", "v_toggle/mux41", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "vsrc/multiselector.v", 3, 16, ".top.mux", "v_toggle/mux41", "s[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "vsrc/multiselector.v", 3, 16, ".top.mux", "v_toggle/mux41", "s[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "vsrc/multiselector.v", 4, 20, ".top.mux", "v_toggle/mux41", "y[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "vsrc/multiselector.v", 4, 20, ".top.mux", "v_toggle/mux41", "y[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "vsrc/multiselector.v", 8, 8, ".top.mux", "v_line/mux41", "case", "8");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "vsrc/multiselector.v", 9, 8, ".top.mux", "v_line/mux41", "case", "9");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "vsrc/multiselector.v", 10, 8, ".top.mux", "v_line/mux41", "case", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "vsrc/multiselector.v", 11, 8, ".top.mux", "v_line/mux41", "case", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "vsrc/multiselector.v", 12, 7, ".top.mux", "v_line/mux41", "case", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "vsrc/multiselector.v", 6, 3, ".top.mux", "v_line/mux41", "block", "6-7");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "vsrc/decoder.v", 23, 14, ".top.dec", "v_toggle/decoder38", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "vsrc/decoder.v", 23, 14, ".top.dec", "v_toggle/decoder38", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "vsrc/decoder.v", 23, 14, ".top.dec", "v_toggle/decoder38", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "vsrc/decoder.v", 24, 8, ".top.dec", "v_toggle/decoder38", "EN", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "vsrc/decoder.v", 25, 19, ".top.dec", "v_toggle/decoder38", "y[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "vsrc/decoder.v", 25, 19, ".top.dec", "v_toggle/decoder38", "y[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "vsrc/decoder.v", 25, 19, ".top.dec", "v_toggle/decoder38", "y[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "vsrc/decoder.v", 25, 19, ".top.dec", "v_toggle/decoder38", "y[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "vsrc/decoder.v", 25, 19, ".top.dec", "v_toggle/decoder38", "y[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "vsrc/decoder.v", 25, 19, ".top.dec", "v_toggle/decoder38", "y[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "vsrc/decoder.v", 25, 19, ".top.dec", "v_toggle/decoder38", "y[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "vsrc/decoder.v", 25, 19, ".top.dec", "v_toggle/decoder38", "y[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "vsrc/decoder.v", 33, 4, ".top.dec", "v_branch/decoder38", "if", "33-34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "vsrc/decoder.v", 33, 5, ".top.dec", "v_branch/decoder38", "else", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "vsrc/decoder.v", 32, 3, ".top.dec", "v_line/decoder38", "block", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "vsrc/decoder.v", 31, 2, ".top.dec", "v_branch/decoder38", "if", "31-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "vsrc/decoder.v", 31, 3, ".top.dec", "v_branch/decoder38", "else", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "vsrc/decoder.v", 30, 1, ".top.dec", "v_line/decoder38", "block", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "vsrc/encoder.v", 48, 14, ".top.encoder", "v_toggle/encoder83", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "vsrc/encoder.v", 48, 14, ".top.encoder", "v_toggle/encoder83", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "vsrc/encoder.v", 48, 14, ".top.encoder", "v_toggle/encoder83", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "vsrc/encoder.v", 48, 14, ".top.encoder", "v_toggle/encoder83", "x[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "vsrc/encoder.v", 48, 14, ".top.encoder", "v_toggle/encoder83", "x[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "vsrc/encoder.v", 48, 14, ".top.encoder", "v_toggle/encoder83", "x[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "vsrc/encoder.v", 48, 14, ".top.encoder", "v_toggle/encoder83", "x[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "vsrc/encoder.v", 48, 14, ".top.encoder", "v_toggle/encoder83", "x[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "vsrc/encoder.v", 49, 8, ".top.encoder", "v_toggle/encoder83", "EN", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "vsrc/encoder.v", 50, 19, ".top.encoder", "v_toggle/encoder83", "y[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "vsrc/encoder.v", 50, 19, ".top.encoder", "v_toggle/encoder83", "y[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "vsrc/encoder.v", 50, 19, ".top.encoder", "v_toggle/encoder83", "y[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "vsrc/encoder.v", 61, 5, ".top.encoder", "v_branch/encoder83", "if", "61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "vsrc/encoder.v", 61, 6, ".top.encoder", "v_branch/encoder83", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "vsrc/encoder.v", 60, 4, ".top.encoder", "v_line/encoder83", "block", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "vsrc/encoder.v", 57, 2, ".top.encoder", "v_branch/encoder83", "if", "57-60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "vsrc/encoder.v", 57, 3, ".top.encoder", "v_branch/encoder83", "else", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "vsrc/encoder.v", 55, 1, ".top.encoder", "v_line/encoder83", "block", "55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/vga_ctrl.v", 2, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "pclk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/vga_ctrl.v", 3, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "vsrc/vga_ctrl.v", 4, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "vsrc/vga_ctrl.v", 5, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "h_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "vsrc/vga_ctrl.v", 5, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "h_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "vsrc/vga_ctrl.v", 5, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "h_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "vsrc/vga_ctrl.v", 5, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "h_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "vsrc/vga_ctrl.v", 5, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "h_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "vsrc/vga_ctrl.v", 5, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "h_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "vsrc/vga_ctrl.v", 5, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "h_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "vsrc/vga_ctrl.v", 5, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "h_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "vsrc/vga_ctrl.v", 5, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "h_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "vsrc/vga_ctrl.v", 5, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "h_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "vsrc/vga_ctrl.v", 6, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "v_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "vsrc/vga_ctrl.v", 6, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "v_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "vsrc/vga_ctrl.v", 6, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "v_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "vsrc/vga_ctrl.v", 6, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "v_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "vsrc/vga_ctrl.v", 6, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "v_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "vsrc/vga_ctrl.v", 6, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "v_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "vsrc/vga_ctrl.v", 6, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "v_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "vsrc/vga_ctrl.v", 6, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "v_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "vsrc/vga_ctrl.v", 6, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "v_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "vsrc/vga_ctrl.v", 6, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "v_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "vsrc/vga_ctrl.v", 7, 12, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "hsync", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "vsrc/vga_ctrl.v", 8, 12, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vsync", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "vsrc/vga_ctrl.v", 9, 12, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "vsrc/vga_ctrl.v", 10, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "vsrc/vga_ctrl.v", 10, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "vsrc/vga_ctrl.v", 10, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "vsrc/vga_ctrl.v", 10, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "vsrc/vga_ctrl.v", 10, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "vsrc/vga_ctrl.v", 10, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "vsrc/vga_ctrl.v", 10, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "vsrc/vga_ctrl.v", 10, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "vsrc/vga_ctrl.v", 11, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_g[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "vsrc/vga_ctrl.v", 11, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_g[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "vsrc/vga_ctrl.v", 11, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_g[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "vsrc/vga_ctrl.v", 11, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_g[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "vsrc/vga_ctrl.v", 11, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_g[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "vsrc/vga_ctrl.v", 11, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_g[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "vsrc/vga_ctrl.v", 11, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_g[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "vsrc/vga_ctrl.v", 11, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_g[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "vsrc/vga_ctrl.v", 12, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "vsrc/vga_ctrl.v", 12, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "vsrc/vga_ctrl.v", 12, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "vsrc/vga_ctrl.v", 12, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "vsrc/vga_ctrl.v", 12, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "vsrc/vga_ctrl.v", 12, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "vsrc/vga_ctrl.v", 12, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "vsrc/vga_ctrl.v", 12, 18, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "vga_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "vsrc/vga_ctrl.v", 25, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "x_cnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "vsrc/vga_ctrl.v", 25, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "x_cnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "vsrc/vga_ctrl.v", 25, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "x_cnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "vsrc/vga_ctrl.v", 25, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "x_cnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "vsrc/vga_ctrl.v", 25, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "x_cnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "vsrc/vga_ctrl.v", 25, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "x_cnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "vsrc/vga_ctrl.v", 25, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "x_cnt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "vsrc/vga_ctrl.v", 25, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "x_cnt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "vsrc/vga_ctrl.v", 25, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "x_cnt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "vsrc/vga_ctrl.v", 25, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "x_cnt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "vsrc/vga_ctrl.v", 26, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "y_cnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "vsrc/vga_ctrl.v", 26, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "y_cnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "vsrc/vga_ctrl.v", 26, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "y_cnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "vsrc/vga_ctrl.v", 26, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "y_cnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "vsrc/vga_ctrl.v", 26, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "y_cnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "vsrc/vga_ctrl.v", 26, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "y_cnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "vsrc/vga_ctrl.v", 26, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "y_cnt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "vsrc/vga_ctrl.v", 26, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "y_cnt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "vsrc/vga_ctrl.v", 26, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "y_cnt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "vsrc/vga_ctrl.v", 26, 11, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "y_cnt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "vsrc/vga_ctrl.v", 27, 6, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "h_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "vsrc/vga_ctrl.v", 28, 6, ".top.my_vga_ctrl", "v_toggle/vga_ctrl", "v_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "vsrc/vga_ctrl.v", 38, 13, ".top.my_vga_ctrl", "v_branch/vga_ctrl", "if", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "vsrc/vga_ctrl.v", 38, 14, ".top.my_vga_ctrl", "v_branch/vga_ctrl", "else", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "vsrc/vga_ctrl.v", 36, 9, ".top.my_vga_ctrl", "v_branch/vga_ctrl", "if", "36-37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "vsrc/vga_ctrl.v", 36, 10, ".top.my_vga_ctrl", "v_branch/vga_ctrl", "else", "41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "vsrc/vga_ctrl.v", 31, 5, ".top.my_vga_ctrl", "v_branch/vga_ctrl", "if", "31-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "vsrc/vga_ctrl.v", 31, 6, ".top.my_vga_ctrl", "v_branch/vga_ctrl", "else", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "vsrc/vga_ctrl.v", 30, 1, ".top.my_vga_ctrl", "v_line/vga_ctrl", "block", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/ps2_keyboard.v", 2, 11, ".top.my_keyboard", "v_toggle/ps2_keyboard", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "vsrc/ps2_keyboard.v", 2, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "resetn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "vsrc/ps2_keyboard.v", 2, 22, ".top.my_keyboard", "v_toggle/ps2_keyboard", "ps2_clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "vsrc/ps2_keyboard.v", 2, 30, ".top.my_keyboard", "v_toggle/ps2_keyboard", "ps2_data", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "vsrc/ps2_keyboard.v", 4, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "buffer[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "vsrc/ps2_keyboard.v", 4, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "buffer[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "vsrc/ps2_keyboard.v", 4, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "buffer[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "vsrc/ps2_keyboard.v", 4, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "buffer[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "vsrc/ps2_keyboard.v", 4, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "buffer[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "vsrc/ps2_keyboard.v", 4, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "buffer[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "vsrc/ps2_keyboard.v", 4, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "buffer[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "vsrc/ps2_keyboard.v", 4, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "buffer[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "vsrc/ps2_keyboard.v", 4, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "buffer[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "vsrc/ps2_keyboard.v", 4, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "buffer[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "vsrc/ps2_keyboard.v", 5, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "vsrc/ps2_keyboard.v", 5, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "vsrc/ps2_keyboard.v", 5, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "vsrc/ps2_keyboard.v", 5, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "vsrc/ps2_keyboard.v", 6, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "ps2_clk_sync[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "vsrc/ps2_keyboard.v", 6, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "ps2_clk_sync[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "vsrc/ps2_keyboard.v", 6, 15, ".top.my_keyboard", "v_toggle/ps2_keyboard", "ps2_clk_sync[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "vsrc/ps2_keyboard.v", 8, 5, ".top.my_keyboard", "v_line/ps2_keyboard", "block", "8-9");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "vsrc/ps2_keyboard.v", 12, 10, ".top.my_keyboard", "v_toggle/ps2_keyboard", "sampling", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "vsrc/ps2_keyboard.v", 21, 17, ".top.my_keyboard", "v_branch/ps2_keyboard", "if", "21,23-24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "vsrc/ps2_keyboard.v", 21, 18, ".top.my_keyboard", "v_branch/ps2_keyboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "vsrc/ps2_keyboard.v", 20, 15, ".top.my_keyboard", "v_branch/ps2_keyboard", "if", "20,26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "vsrc/ps2_keyboard.v", 20, 16, ".top.my_keyboard", "v_branch/ps2_keyboard", "else", "27-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "vsrc/ps2_keyboard.v", 19, 13, ".top.my_keyboard", "v_branch/ps2_keyboard", "if", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "vsrc/ps2_keyboard.v", 19, 14, ".top.my_keyboard", "v_branch/ps2_keyboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "vsrc/ps2_keyboard.v", 15, 9, ".top.my_keyboard", "v_branch/ps2_keyboard", "if", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "vsrc/ps2_keyboard.v", 15, 10, ".top.my_keyboard", "v_branch/ps2_keyboard", "else", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "vsrc/ps2_keyboard.v", 14, 5, ".top.my_keyboard", "v_line/ps2_keyboard", "block", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "vsrc/alu.v", 35, 14, ".top.alu", "v_toggle/alu_4bit", "alu_fnselec[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "vsrc/alu.v", 35, 14, ".top.alu", "v_toggle/alu_4bit", "alu_fnselec[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/alu.v", 35, 14, ".top.alu", "v_toggle/alu_4bit", "alu_fnselec[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "vsrc/alu.v", 36, 14, ".top.alu", "v_toggle/alu_4bit", "alu_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "vsrc/alu.v", 36, 14, ".top.alu", "v_toggle/alu_4bit", "alu_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "vsrc/alu.v", 36, 14, ".top.alu", "v_toggle/alu_4bit", "alu_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "vsrc/alu.v", 36, 14, ".top.alu", "v_toggle/alu_4bit", "alu_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "vsrc/alu.v", 37, 14, ".top.alu", "v_toggle/alu_4bit", "alu_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "vsrc/alu.v", 37, 14, ".top.alu", "v_toggle/alu_4bit", "alu_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "vsrc/alu.v", 37, 14, ".top.alu", "v_toggle/alu_4bit", "alu_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "vsrc/alu.v", 37, 14, ".top.alu", "v_toggle/alu_4bit", "alu_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "vsrc/alu.v", 38, 19, ".top.alu", "v_toggle/alu_4bit", "alu_res[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "vsrc/alu.v", 38, 19, ".top.alu", "v_toggle/alu_4bit", "alu_res[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "vsrc/alu.v", 38, 19, ".top.alu", "v_toggle/alu_4bit", "alu_res[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "vsrc/alu.v", 38, 19, ".top.alu", "v_toggle/alu_4bit", "alu_res[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "vsrc/alu.v", 39, 13, ".top.alu", "v_toggle/alu_4bit", "alu_zero", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "vsrc/alu.v", 40, 13, ".top.alu", "v_toggle/alu_4bit", "alu_overflow", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "vsrc/alu.v", 41, 13, ".top.alu", "v_toggle/alu_4bit", "alu_carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "vsrc/alu.v", 47, 10, ".top.alu", "v_line/alu_4bit", "case", "47-51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "vsrc/alu.v", 53, 10, ".top.alu", "v_line/alu_4bit", "case", "53,55-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "vsrc/alu.v", 60, 10, ".top.alu", "v_line/alu_4bit", "case", "60-64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "vsrc/alu.v", 66, 10, ".top.alu", "v_line/alu_4bit", "case", "66-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "vsrc/alu.v", 72, 10, ".top.alu", "v_line/alu_4bit", "case", "72-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "vsrc/alu.v", 78, 10, ".top.alu", "v_line/alu_4bit", "case", "78-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "vsrc/alu.v", 85, 4, ".top.alu", "v_branch/alu_4bit", "if", "85-86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "vsrc/alu.v", 85, 5, ".top.alu", "v_branch/alu_4bit", "else", "88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "vsrc/alu.v", 84, 10, ".top.alu", "v_line/alu_4bit", "case", "84,89-91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "vsrc/alu.v", 94, 4, ".top.alu", "v_branch/alu_4bit", "if", "94-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "vsrc/alu.v", 94, 5, ".top.alu", "v_branch/alu_4bit", "else", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "vsrc/alu.v", 93, 10, ".top.alu", "v_line/alu_4bit", "case", "93,98-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "vsrc/alu.v", 102, 3, ".top.alu", "v_line/alu_4bit", "case", "102-106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "vsrc/alu.v", 45, 1, ".top.alu", "v_line/alu_4bit", "block", "45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/seg.v", 2, 9, ".top.mu_seg", "v_toggle/seg", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/seg.v", 3, 9, ".top.mu_seg", "v_toggle/seg", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "vsrc/seg.v", 4, 15, ".top.mu_seg", "v_toggle/seg", "seg_x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "vsrc/seg.v", 4, 15, ".top.mu_seg", "v_toggle/seg", "seg_x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "vsrc/seg.v", 4, 15, ".top.mu_seg", "v_toggle/seg", "seg_x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "vsrc/seg.v", 5, 16, ".top.mu_seg", "v_toggle/seg", "o_seg0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "vsrc/seg.v", 5, 16, ".top.mu_seg", "v_toggle/seg", "o_seg0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "vsrc/seg.v", 5, 16, ".top.mu_seg", "v_toggle/seg", "o_seg0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "vsrc/seg.v", 5, 16, ".top.mu_seg", "v_toggle/seg", "o_seg0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "vsrc/seg.v", 5, 16, ".top.mu_seg", "v_toggle/seg", "o_seg0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "vsrc/seg.v", 5, 16, ".top.mu_seg", "v_toggle/seg", "o_seg0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "vsrc/seg.v", 5, 16, ".top.mu_seg", "v_toggle/seg", "o_seg0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "vsrc/seg.v", 5, 16, ".top.mu_seg", "v_toggle/seg", "o_seg0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "vsrc/seg.v", 6, 16, ".top.mu_seg", "v_toggle/seg", "o_seg1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "vsrc/seg.v", 6, 16, ".top.mu_seg", "v_toggle/seg", "o_seg1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "vsrc/seg.v", 6, 16, ".top.mu_seg", "v_toggle/seg", "o_seg1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "vsrc/seg.v", 6, 16, ".top.mu_seg", "v_toggle/seg", "o_seg1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "vsrc/seg.v", 6, 16, ".top.mu_seg", "v_toggle/seg", "o_seg1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "vsrc/seg.v", 6, 16, ".top.mu_seg", "v_toggle/seg", "o_seg1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "vsrc/seg.v", 6, 16, ".top.mu_seg", "v_toggle/seg", "o_seg1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "vsrc/seg.v", 6, 16, ".top.mu_seg", "v_toggle/seg", "o_seg1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "vsrc/seg.v", 7, 16, ".top.mu_seg", "v_toggle/seg", "o_seg2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "vsrc/seg.v", 7, 16, ".top.mu_seg", "v_toggle/seg", "o_seg2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "vsrc/seg.v", 7, 16, ".top.mu_seg", "v_toggle/seg", "o_seg2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "vsrc/seg.v", 7, 16, ".top.mu_seg", "v_toggle/seg", "o_seg2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "vsrc/seg.v", 7, 16, ".top.mu_seg", "v_toggle/seg", "o_seg2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "vsrc/seg.v", 7, 16, ".top.mu_seg", "v_toggle/seg", "o_seg2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "vsrc/seg.v", 7, 16, ".top.mu_seg", "v_toggle/seg", "o_seg2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "vsrc/seg.v", 7, 16, ".top.mu_seg", "v_toggle/seg", "o_seg2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "vsrc/seg.v", 8, 16, ".top.mu_seg", "v_toggle/seg", "o_seg3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "vsrc/seg.v", 8, 16, ".top.mu_seg", "v_toggle/seg", "o_seg3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "vsrc/seg.v", 8, 16, ".top.mu_seg", "v_toggle/seg", "o_seg3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "vsrc/seg.v", 8, 16, ".top.mu_seg", "v_toggle/seg", "o_seg3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "vsrc/seg.v", 8, 16, ".top.mu_seg", "v_toggle/seg", "o_seg3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "vsrc/seg.v", 8, 16, ".top.mu_seg", "v_toggle/seg", "o_seg3[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "vsrc/seg.v", 8, 16, ".top.mu_seg", "v_toggle/seg", "o_seg3[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "vsrc/seg.v", 8, 16, ".top.mu_seg", "v_toggle/seg", "o_seg3[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "vsrc/seg.v", 9, 16, ".top.mu_seg", "v_toggle/seg", "o_seg4[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "vsrc/seg.v", 9, 16, ".top.mu_seg", "v_toggle/seg", "o_seg4[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "vsrc/seg.v", 9, 16, ".top.mu_seg", "v_toggle/seg", "o_seg4[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "vsrc/seg.v", 9, 16, ".top.mu_seg", "v_toggle/seg", "o_seg4[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "vsrc/seg.v", 9, 16, ".top.mu_seg", "v_toggle/seg", "o_seg4[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "vsrc/seg.v", 9, 16, ".top.mu_seg", "v_toggle/seg", "o_seg4[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "vsrc/seg.v", 9, 16, ".top.mu_seg", "v_toggle/seg", "o_seg4[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "vsrc/seg.v", 9, 16, ".top.mu_seg", "v_toggle/seg", "o_seg4[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "vsrc/seg.v", 10, 16, ".top.mu_seg", "v_toggle/seg", "o_seg5[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "vsrc/seg.v", 10, 16, ".top.mu_seg", "v_toggle/seg", "o_seg5[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "vsrc/seg.v", 10, 16, ".top.mu_seg", "v_toggle/seg", "o_seg5[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "vsrc/seg.v", 10, 16, ".top.mu_seg", "v_toggle/seg", "o_seg5[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "vsrc/seg.v", 10, 16, ".top.mu_seg", "v_toggle/seg", "o_seg5[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "vsrc/seg.v", 10, 16, ".top.mu_seg", "v_toggle/seg", "o_seg5[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "vsrc/seg.v", 10, 16, ".top.mu_seg", "v_toggle/seg", "o_seg5[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "vsrc/seg.v", 10, 16, ".top.mu_seg", "v_toggle/seg", "o_seg5[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "vsrc/seg.v", 11, 16, ".top.mu_seg", "v_toggle/seg", "o_seg6[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "vsrc/seg.v", 11, 16, ".top.mu_seg", "v_toggle/seg", "o_seg6[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "vsrc/seg.v", 11, 16, ".top.mu_seg", "v_toggle/seg", "o_seg6[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "vsrc/seg.v", 11, 16, ".top.mu_seg", "v_toggle/seg", "o_seg6[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "vsrc/seg.v", 11, 16, ".top.mu_seg", "v_toggle/seg", "o_seg6[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "vsrc/seg.v", 11, 16, ".top.mu_seg", "v_toggle/seg", "o_seg6[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "vsrc/seg.v", 11, 16, ".top.mu_seg", "v_toggle/seg", "o_seg6[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "vsrc/seg.v", 11, 16, ".top.mu_seg", "v_toggle/seg", "o_seg6[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "vsrc/seg.v", 12, 16, ".top.mu_seg", "v_toggle/seg", "o_seg7[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "vsrc/seg.v", 12, 16, ".top.mu_seg", "v_toggle/seg", "o_seg7[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "vsrc/seg.v", 12, 16, ".top.mu_seg", "v_toggle/seg", "o_seg7[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "vsrc/seg.v", 12, 16, ".top.mu_seg", "v_toggle/seg", "o_seg7[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "vsrc/seg.v", 12, 16, ".top.mu_seg", "v_toggle/seg", "o_seg7[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "vsrc/seg.v", 12, 16, ".top.mu_seg", "v_toggle/seg", "o_seg7[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "vsrc/seg.v", 12, 16, ".top.mu_seg", "v_toggle/seg", "o_seg7[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "vsrc/seg.v", 12, 16, ".top.mu_seg", "v_toggle/seg", "o_seg7[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[0][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[0][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[0][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[0][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[1][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[1][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[1][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[1][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[1][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[2][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[2][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[2][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[2][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[2][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[3][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[3][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[3][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[3][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[3][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[3][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[3][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[3][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[4][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[4][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[4][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[4][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[4][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[4][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[4][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[4][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[5][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[5][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[5][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[5][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[5][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[5][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[5][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[5][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[6][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[6][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[6][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[6][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[6][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[6][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[6][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[6][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[7][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[7][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[7][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[7][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[7][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[7][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[7][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "vsrc/seg.v", 15, 12, ".top.mu_seg", "v_toggle/seg", "segs[7][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "vsrc/seg.v", 27, 12, ".top.mu_seg", "v_toggle/seg", "count[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "vsrc/seg.v", 28, 11, ".top.mu_seg", "v_toggle/seg", "offset[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "vsrc/seg.v", 28, 11, ".top.mu_seg", "v_toggle/seg", "offset[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "vsrc/seg.v", 28, 11, ".top.mu_seg", "v_toggle/seg", "offset[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "vsrc/seg.v", 35, 4, ".top.mu_seg", "v_branch/seg", "if", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "vsrc/seg.v", 35, 5, ".top.mu_seg", "v_branch/seg", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "vsrc/seg.v", 33, 2, ".top.mu_seg", "v_branch/seg", "if", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "vsrc/seg.v", 33, 3, ".top.mu_seg", "v_branch/seg", "else", "34,36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "vsrc/seg.v", 32, 1, ".top.mu_seg", "v_line/seg", "block", "32,38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "vsrc/top.v", 141, 17, ".top.my_vmem", "v_toggle/vmem", "h_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "vsrc/top.v", 141, 17, ".top.my_vmem", "v_toggle/vmem", "h_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "vsrc/top.v", 141, 17, ".top.my_vmem", "v_toggle/vmem", "h_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "vsrc/top.v", 141, 17, ".top.my_vmem", "v_toggle/vmem", "h_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "vsrc/top.v", 141, 17, ".top.my_vmem", "v_toggle/vmem", "h_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "vsrc/top.v", 141, 17, ".top.my_vmem", "v_toggle/vmem", "h_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "vsrc/top.v", 141, 17, ".top.my_vmem", "v_toggle/vmem", "h_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "vsrc/top.v", 141, 17, ".top.my_vmem", "v_toggle/vmem", "h_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "vsrc/top.v", 141, 17, ".top.my_vmem", "v_toggle/vmem", "h_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "vsrc/top.v", 141, 17, ".top.my_vmem", "v_toggle/vmem", "h_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "vsrc/top.v", 142, 17, ".top.my_vmem", "v_toggle/vmem", "v_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "vsrc/top.v", 142, 17, ".top.my_vmem", "v_toggle/vmem", "v_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "vsrc/top.v", 142, 17, ".top.my_vmem", "v_toggle/vmem", "v_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "vsrc/top.v", 142, 17, ".top.my_vmem", "v_toggle/vmem", "v_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "vsrc/top.v", 142, 17, ".top.my_vmem", "v_toggle/vmem", "v_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "vsrc/top.v", 142, 17, ".top.my_vmem", "v_toggle/vmem", "v_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "vsrc/top.v", 142, 17, ".top.my_vmem", "v_toggle/vmem", "v_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "vsrc/top.v", 142, 17, ".top.my_vmem", "v_toggle/vmem", "v_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "vsrc/top.v", 142, 17, ".top.my_vmem", "v_toggle/vmem", "v_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "vsrc/top.v", 143, 19, ".top.my_vmem", "v_toggle/vmem", "vga_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "vsrc/top.v", 148, 1, ".top.my_vmem", "v_line/vmem", "block", "148-149");
}
