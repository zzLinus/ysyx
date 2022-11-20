// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb59a07c7__0;
    VlWide<3>/*95:0*/ __Vtemp_hf92794d7__0;
    // Body
    if ((0U == (IData)(vlSelf->s))) {
        ++(vlSymsp->__Vcoverage[363]);
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
            ++(vlSymsp->__Vcoverage[364]);
        }
        if ((1U != (IData)(vlSelf->s))) {
            if ((2U == (IData)(vlSelf->s))) {
                ++(vlSymsp->__Vcoverage[365]);
            }
            if ((2U != (IData)(vlSelf->s))) {
                if ((3U == (IData)(vlSelf->s))) {
                    ++(vlSymsp->__Vcoverage[366]);
                }
                if ((3U != (IData)(vlSelf->s))) {
                    ++(vlSymsp->__Vcoverage[367]);
                }
            }
        }
    }
    if (vlSelf->en) {
        ++(vlSymsp->__Vcoverage[371]);
        ++(vlSymsp->__Vcoverage[371]);
        ++(vlSymsp->__Vcoverage[371]);
        ++(vlSymsp->__Vcoverage[371]);
        ++(vlSymsp->__Vcoverage[371]);
        ++(vlSymsp->__Vcoverage[371]);
        ++(vlSymsp->__Vcoverage[371]);
        ++(vlSymsp->__Vcoverage[371]);
        ++(vlSymsp->__Vcoverage[372]);
        if ((6U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((5U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((4U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[370]);
        }
        if ((4U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((3U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[370]);
        }
        if ((3U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((6U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[370]);
        }
        if ((0U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((0U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[370]);
        }
        if ((5U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[370]);
        }
        if ((1U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((1U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[370]);
        }
        if ((2U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((2U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[370]);
        }
        if ((7U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((7U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[370]);
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
        ++(vlSymsp->__Vcoverage[373]);
    }
    if (vlSelf->ec_en) {
        ++(vlSymsp->__Vcoverage[377]);
        ++(vlSymsp->__Vcoverage[377]);
        ++(vlSymsp->__Vcoverage[377]);
        ++(vlSymsp->__Vcoverage[377]);
        ++(vlSymsp->__Vcoverage[377]);
        ++(vlSymsp->__Vcoverage[377]);
        ++(vlSymsp->__Vcoverage[377]);
        ++(vlSymsp->__Vcoverage[377]);
        ++(vlSymsp->__Vcoverage[378]);
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 4U)))) {
            ++(vlSymsp->__Vcoverage[376]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 3U)))) {
            ++(vlSymsp->__Vcoverage[376]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 1U)))) {
            ++(vlSymsp->__Vcoverage[376]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 5U)))) {
            ++(vlSymsp->__Vcoverage[376]);
        }
        if ((1U & (~ (IData)(vlSelf->ec_x)))) {
            ++(vlSymsp->__Vcoverage[376]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 6U)))) {
            ++(vlSymsp->__Vcoverage[376]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 2U)))) {
            ++(vlSymsp->__Vcoverage[376]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 7U)))) {
            ++(vlSymsp->__Vcoverage[376]);
        }
        vlSelf->top__DOT__encoder__DOT__i = 8U;
        vlSelf->ec_y = 0U;
        if ((1U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[375]);
            vlSelf->ec_y = 0U;
        }
        if ((2U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[375]);
            vlSelf->ec_y = 1U;
        }
        if ((4U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[375]);
            vlSelf->ec_y = 2U;
        }
        if ((8U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[375]);
            vlSelf->ec_y = 3U;
        }
        if ((0x10U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[375]);
            vlSelf->ec_y = 4U;
        }
        if ((0x20U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[375]);
            vlSelf->ec_y = 5U;
        }
        if ((0x40U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[375]);
            vlSelf->ec_y = 6U;
        }
        if ((0x80U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[375]);
            vlSelf->ec_y = 7U;
        }
    } else {
        vlSelf->ec_y = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ec_en)))) {
        ++(vlSymsp->__Vcoverage[379]);
    }
    if ((1U & (~ (IData)(vlSelf->sft_rgtr_l_or_r)))) {
        ++(vlSymsp->__Vcoverage[392]);
        if (vlSelf->sft_rgtr_a_or_l) {
            ++(vlSymsp->__Vcoverage[389]);
        }
        if ((1U & (~ (IData)(vlSelf->sft_rgtr_a_or_l)))) {
            ++(vlSymsp->__Vcoverage[390]);
        }
    }
    if (vlSelf->sft_rgtr_l_or_r) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->sft_out_q = (vlSelf->sft_rgtr_data 
                             << (IData)(vlSelf->sft_rgtr_shamt));
    } else {
        vlSelf->sft_out_q = ((IData)(vlSelf->sft_rgtr_a_or_l)
                              ? VL_SHIFTRS_III(32,32,5, vlSelf->sft_rgtr_data, (IData)(vlSelf->sft_rgtr_shamt))
                              : (vlSelf->sft_rgtr_data 
                                 >> (IData)(vlSelf->sft_rgtr_shamt)));
    }
    if ((1U & (~ ((IData)(vlSelf->alu_fnselec) >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->alu_fnselec) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[457]);
            }
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                ++(vlSymsp->__Vcoverage[456]);
            }
        }
        if ((2U & (IData)(vlSelf->alu_fnselec))) {
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                ++(vlSymsp->__Vcoverage[458]);
            }
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[459]);
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
    if (((IData)(vlSelf->counter_EN) ^ (IData)(vlSelf->top__DOT____Vtogcov__counter_EN))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__counter_EN = vlSelf->counter_EN;
    }
    if (((IData)(vlSelf->en) ^ (IData)(vlSelf->top__DOT____Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__en = vlSelf->en;
    }
    if (((IData)(vlSelf->rand_in) ^ (IData)(vlSelf->top__DOT____Vtogcov__rand_in))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__rand_in = vlSelf->rand_in;
    }
    if (((IData)(vlSelf->state_machine_clr) ^ (IData)(vlSelf->top__DOT____Vtogcov__state_machine_clr))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__state_machine_clr 
            = vlSelf->state_machine_clr;
    }
    if (((IData)(vlSelf->ec_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_en))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__ec_en = vlSelf->ec_en;
    }
    if (((IData)(vlSelf->sft_rgtr_l_or_r) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_l_or_r))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_l_or_r 
            = vlSelf->sft_rgtr_l_or_r;
    }
    if (((IData)(vlSelf->sft_rgtr_a_or_l) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_a_or_l))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_a_or_l 
            = vlSelf->sft_rgtr_a_or_l;
    }
    if ((1U ^ ((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__resetn)))) {
        ++(vlSymsp->__Vcoverage[423]);
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
    if ((1U & ((IData)(vlSelf->alu_fnselec) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->top__DOT____Vtogcov__alu_fnselec = 
            ((6U & (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)) 
             | (1U & (IData)(vlSelf->alu_fnselec)));
    }
    if ((2U & ((IData)(vlSelf->alu_fnselec) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->top__DOT____Vtogcov__alu_fnselec = 
            ((5U & (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)) 
             | (2U & (IData)(vlSelf->alu_fnselec)));
    }
    if ((4U & ((IData)(vlSelf->alu_fnselec) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->top__DOT____Vtogcov__alu_fnselec = 
            ((3U & (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)) 
             | (4U & (IData)(vlSelf->alu_fnselec)));
    }
    if ((1U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__alu_a = ((0xeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (1U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((2U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__alu_a = ((0xdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (2U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((4U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__alu_a = ((0xbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (4U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((8U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__alu_a = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (8U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((1U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__alu_b = ((0xeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (1U 
                                                 & (IData)(vlSelf->alu_b)));
    }
    if ((2U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__alu_b = ((0xdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (2U 
                                                 & (IData)(vlSelf->alu_b)));
    }
    if ((4U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__alu_b = ((0xbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (4U 
                                                 & (IData)(vlSelf->alu_b)));
    }
    if ((8U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__alu_b = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (8U 
                                                 & (IData)(vlSelf->alu_b)));
    }
    vlSelf->VGA_CLK = vlSelf->clk;
    if ((1U & ((IData)(vlSelf->sft_rgtr_shamt) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt 
            = ((0x1eU & (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)) 
               | (1U & (IData)(vlSelf->sft_rgtr_shamt)));
    }
    if ((2U & ((IData)(vlSelf->sft_rgtr_shamt) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt 
            = ((0x1dU & (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)) 
               | (2U & (IData)(vlSelf->sft_rgtr_shamt)));
    }
    if ((4U & ((IData)(vlSelf->sft_rgtr_shamt) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt 
            = ((0x1bU & (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)) 
               | (4U & (IData)(vlSelf->sft_rgtr_shamt)));
    }
    if ((8U & ((IData)(vlSelf->sft_rgtr_shamt) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt 
            = ((0x17U & (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)) 
               | (8U & (IData)(vlSelf->sft_rgtr_shamt)));
    }
    if ((0x10U & ((IData)(vlSelf->sft_rgtr_shamt) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt 
            = ((0xfU & (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)) 
               | (0x10U & (IData)(vlSelf->sft_rgtr_shamt)));
    }
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
    if ((1U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (1U & vlSelf->sft_rgtr_data));
    }
    if ((2U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (2U & vlSelf->sft_rgtr_data));
    }
    if ((4U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (4U & vlSelf->sft_rgtr_data));
    }
    if ((8U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (8U & vlSelf->sft_rgtr_data));
    }
    if ((0x10U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x10U & vlSelf->sft_rgtr_data));
    }
    if ((0x20U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x20U & vlSelf->sft_rgtr_data));
    }
    if ((0x40U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x40U & vlSelf->sft_rgtr_data));
    }
    if ((0x80U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x80U & vlSelf->sft_rgtr_data));
    }
    if ((0x100U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x100U & vlSelf->sft_rgtr_data));
    }
    if ((0x200U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x200U & vlSelf->sft_rgtr_data));
    }
    if ((0x400U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x400U & vlSelf->sft_rgtr_data));
    }
    if ((0x800U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x800U & vlSelf->sft_rgtr_data));
    }
    if ((0x1000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x1000U & vlSelf->sft_rgtr_data));
    }
    if ((0x2000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x2000U & vlSelf->sft_rgtr_data));
    }
    if ((0x4000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x4000U & vlSelf->sft_rgtr_data));
    }
    if ((0x8000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x8000U & vlSelf->sft_rgtr_data));
    }
    if ((0x10000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x10000U & vlSelf->sft_rgtr_data));
    }
    if ((0x20000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x20000U & vlSelf->sft_rgtr_data));
    }
    if ((0x40000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x40000U & vlSelf->sft_rgtr_data));
    }
    if ((0x80000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x80000U & vlSelf->sft_rgtr_data));
    }
    if ((0x100000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x100000U & vlSelf->sft_rgtr_data));
    }
    if ((0x200000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x200000U & vlSelf->sft_rgtr_data));
    }
    if ((0x400000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x400000U & vlSelf->sft_rgtr_data));
    }
    if ((0x800000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x800000U & vlSelf->sft_rgtr_data));
    }
    if ((0x1000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x1000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x2000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x2000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x4000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x4000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x8000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x8000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x10000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x10000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x20000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x20000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x40000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x40000000U & vlSelf->sft_rgtr_data));
    }
    if (((vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x80000000U & vlSelf->sft_rgtr_data));
    }
    vlSelf->top__DOT__alu__DOT__tmp = (0xfU & ((IData)(1U) 
                                               + (~ (IData)(vlSelf->alu_b))));
    if ((4U & (IData)(vlSelf->alu_fnselec))) {
        if ((1U & (~ ((IData)(vlSelf->alu_fnselec) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                ++(vlSymsp->__Vcoverage[460]);
            }
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[461]);
            }
        }
        if ((2U & (IData)(vlSelf->alu_fnselec))) {
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[467]);
                if (((IData)(vlSelf->alu_a) == (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[465]);
                    vlSelf->alu_res = 1U;
                } else {
                    vlSelf->alu_res = 0U;
                }
                if (((IData)(vlSelf->alu_a) != (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[466]);
                }
                vlSelf->alu_carry = 0U;
                vlSelf->alu_overflow = 0U;
                vlSelf->alu_zero = 0U;
            } else {
                vlSelf->alu_res = (((IData)(vlSelf->alu_a) 
                                    < (IData)(vlSelf->alu_b))
                                    ? 1U : 0U);
                vlSelf->alu_carry = 0U;
                vlSelf->alu_overflow = 0U;
                vlSelf->alu_zero = 0U;
            }
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                ++(vlSymsp->__Vcoverage[464]);
                if (((IData)(vlSelf->alu_a) >= (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[463]);
                }
                if (((IData)(vlSelf->alu_a) < (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[462]);
                }
            }
        } else if ((1U & (IData)(vlSelf->alu_fnselec))) {
            vlSelf->alu_res = ((IData)(vlSelf->alu_a) 
                               ^ (IData)(vlSelf->alu_b));
            vlSelf->alu_carry = 0U;
            vlSelf->alu_overflow = 0U;
            vlSelf->alu_zero = 0U;
        } else {
            vlSelf->alu_res = ((IData)(vlSelf->alu_a) 
                               | (IData)(vlSelf->alu_b));
            vlSelf->alu_carry = 0U;
            vlSelf->alu_overflow = 0U;
            vlSelf->alu_zero = 0U;
        }
    } else if ((2U & (IData)(vlSelf->alu_fnselec))) {
        if ((1U & (IData)(vlSelf->alu_fnselec))) {
            vlSelf->alu_res = ((IData)(vlSelf->alu_a) 
                               & (IData)(vlSelf->alu_b));
            vlSelf->alu_carry = 0U;
            vlSelf->alu_overflow = 0U;
            vlSelf->alu_zero = 0U;
        } else {
            vlSelf->alu_res = (0xfU & (~ (IData)(vlSelf->alu_a)));
            vlSelf->alu_carry = 0U;
            vlSelf->alu_overflow = 0U;
            vlSelf->alu_zero = 0U;
        }
    } else if ((1U & (IData)(vlSelf->alu_fnselec))) {
        vlSelf->alu_carry = 0U;
        vlSelf->alu_carry = (1U & (((IData)(vlSelf->alu_a) 
                                    + (IData)(vlSelf->top__DOT__alu__DOT__tmp)) 
                                   >> 4U));
        vlSelf->alu_res = (0xfU & ((IData)(vlSelf->alu_a) 
                                   + (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
        vlSelf->alu_overflow = (((1U & ((IData)(vlSelf->alu_a) 
                                        >> 3U)) == 
                                 (1U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
                                        >> 3U))) & 
                                ((1U & ((IData)(vlSelf->alu_res) 
                                        >> 3U)) != 
                                 (1U & ((IData)(vlSelf->alu_a) 
                                        >> 3U))));
        vlSelf->alu_zero = (1U & (~ (IData)((0U != (IData)(vlSelf->alu_res)))));
    } else {
        vlSelf->alu_res = (0xfU & ((IData)(vlSelf->alu_a) 
                                   + (IData)(vlSelf->alu_b)));
        vlSelf->alu_carry = 0U;
        vlSelf->alu_overflow = (((1U & ((IData)(vlSelf->alu_a) 
                                        >> 3U)) == 
                                 (1U & ((IData)(vlSelf->alu_b) 
                                        >> 3U))) & 
                                ((1U & ((IData)(vlSelf->alu_res) 
                                        >> 3U)) != 
                                 (1U & ((IData)(vlSelf->alu_a) 
                                        >> 3U))));
        vlSelf->alu_carry = (1U & (((IData)(vlSelf->alu_a) 
                                    + (IData)(vlSelf->alu_b)) 
                                   >> 4U));
        vlSelf->alu_zero = (1U & (~ (IData)((0U != (IData)(vlSelf->alu_res)))));
    }
    vlSelf->ledr = (((IData)(vlSelf->top__DOT__led1__DOT__led) 
                     << 8U) | (IData)(vlSelf->sw));
    __Vtemp_hb59a07c7__0[0U] = (IData)((0x1020304000000000ULL 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->rand_in)
                                                              ? 5U
                                                              : 2U))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->rand_in)
                                                                 ? 5U
                                                                 : 3U))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->rand_in)
                                                                    ? 5U
                                                                    : 4U))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->rand_in)
                                                                       ? 5U
                                                                       : 4U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0x50607080U 
                                                                       | ((((IData)(vlSelf->rand_in)
                                                                             ? 6U
                                                                             : 1U) 
                                                                           << 0x18U) 
                                                                          | ((((IData)(vlSelf->rand_in)
                                                                                ? 7U
                                                                                : 1U) 
                                                                              << 0x10U) 
                                                                             | ((((IData)(vlSelf->rand_in)
                                                                                 ? 8U
                                                                                 : 1U) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->rand_in)
                                                                                 ? 8U
                                                                                 : 1U)))))))))))));
    __Vtemp_hb59a07c7__0[1U] = (IData)(((0x1020304000000000ULL 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->rand_in)
                                                               ? 5U
                                                               : 2U))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->rand_in)
                                                                  ? 5U
                                                                  : 3U))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->rand_in)
                                                                     ? 5U
                                                                     : 4U))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->rand_in)
                                                                        ? 5U
                                                                        : 4U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0x50607080U 
                                                                        | ((((IData)(vlSelf->rand_in)
                                                                              ? 6U
                                                                              : 1U) 
                                                                            << 0x18U) 
                                                                           | ((((IData)(vlSelf->rand_in)
                                                                                 ? 7U
                                                                                 : 1U) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->rand_in)
                                                                                 ? 8U
                                                                                 : 1U) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->rand_in)
                                                                                 ? 8U
                                                                                 : 1U)))))))))))) 
                                        >> 0x20U));
    if (vlSelf->rand_in) {
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[0U] = 8U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[1U] = 8U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[2U] = 7U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[3U] = 6U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[4U] = 5U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[5U] = 5U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[6U] = 5U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[7U] = 5U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[8U] = 5U;
        __Vtemp_hb59a07c7__0[2U] = 5U;
    } else {
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[0U] = 1U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[1U] = 1U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[2U] = 1U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[3U] = 1U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[4U] = 4U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[5U] = 4U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[6U] = 3U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[7U] = 2U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list[8U] = 1U;
        __Vtemp_hb59a07c7__0[2U] = 1U;
    }
    VL_EXTEND_WW(72,68, __Vtemp_hf92794d7__0, __Vtemp_hb59a07c7__0);
    vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
        = __Vtemp_hf92794d7__0[0U];
    vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
        = __Vtemp_hf92794d7__0[1U];
    vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
        = __Vtemp_hf92794d7__0[2U];
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[0U] 
        = (0x80U | ((IData)(vlSelf->rand_in) ? 8U : 1U));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[1U] 
        = (0x70U | ((IData)(vlSelf->rand_in) ? 8U : 1U));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[2U] 
        = (0x60U | ((IData)(vlSelf->rand_in) ? 7U : 1U));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[3U] 
        = (0x50U | ((IData)(vlSelf->rand_in) ? 6U : 1U));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[4U] 
        = (0x40U | ((IData)(vlSelf->rand_in) ? 5U : 4U));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[5U] 
        = (0x30U | ((IData)(vlSelf->rand_in) ? 5U : 4U));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[6U] 
        = (0x20U | ((IData)(vlSelf->rand_in) ? 5U : 3U));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[7U] 
        = (0x10U | ((IData)(vlSelf->rand_in) ? 5U : 2U));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[8U] 
        = ((IData)(vlSelf->rand_in) ? 5U : 1U);
    if (((IData)(vlSelf->VGA_CLK) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_CLK))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT____Vtogcov__VGA_CLK = vlSelf->VGA_CLK;
    }
    if ((1U & ((IData)(vlSelf->y) ^ (IData)(vlSelf->top__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT____Vtogcov__y = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__y)) 
                                          | (1U & (IData)(vlSelf->y)));
    }
    if ((2U & ((IData)(vlSelf->y) ^ (IData)(vlSelf->top__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT____Vtogcov__y = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__y)) 
                                          | (2U & (IData)(vlSelf->y)));
    }
    if ((1U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (1U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if ((2U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (2U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if ((4U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (4U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if (((IData)(vlSelf->alu_carry) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_carry))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT____Vtogcov__alu_carry = vlSelf->alu_carry;
    }
    if (((IData)(vlSelf->alu_overflow) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_overflow))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT____Vtogcov__alu_overflow = vlSelf->alu_overflow;
    }
    if (((IData)(vlSelf->alu_zero) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_zero))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT____Vtogcov__alu_zero = vlSelf->alu_zero;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((0xeU & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (1U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((0xdU & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (2U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((0xbU & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (4U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((7U & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (8U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((1U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xeU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (1U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((2U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xdU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (2U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((4U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xbU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (4U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((8U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((7U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (8U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((1U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (1U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((2U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (2U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((4U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (4U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((8U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (8U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x10U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x20U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x40U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x80U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((1U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (1U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((2U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (2U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((4U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (4U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((8U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfff7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (8U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x10U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x20U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x40U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x80U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xff7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x100U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfeffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x100U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x200U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfdffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x200U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x400U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfbffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x400U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x800U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xf7ffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x800U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x1000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xefffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x1000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x2000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xdfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x2000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x4000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xbfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x4000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x8000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0x7fffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((1U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffffeU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (1U 
                                                     & vlSelf->sft_out_q));
    }
    if ((2U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffffdU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (2U 
                                                     & vlSelf->sft_out_q));
    }
    if ((4U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffffbU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (4U 
                                                     & vlSelf->sft_out_q));
    }
    if ((8U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffff7U 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (8U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x10U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffffefU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x10U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x20U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffffdfU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x20U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x40U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffffbfU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x40U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x80U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffff7fU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x80U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x100U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffeffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x100U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x200U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffdffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x200U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x400U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffbffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x400U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x800U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffff7ffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x800U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x1000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffefffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x1000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x2000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffdfffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x2000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x4000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffbfffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x4000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x8000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffff7fffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x8000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x10000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffeffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x10000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x20000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffdffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x20000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x40000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffbffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x40000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x80000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfff7ffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x80000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x100000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffefffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x100000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x200000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffdfffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x200000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x400000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffbfffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x400000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x800000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xff7fffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x800000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x1000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfeffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x1000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x2000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfdffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x2000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x4000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfbffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x4000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x8000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xf7ffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x8000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x10000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xefffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x10000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x20000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xdfffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x20000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x40000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xbfffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x40000000U 
                                                     & vlSelf->sft_out_q));
    }
    if (((vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0x7fffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x80000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [8U]));
    }
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                       == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
           == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__state_machine__DOT__state_din 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit)
            ? (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)
            : 0U);
    if ((1U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if (((vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
          ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if (((vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
          ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (1U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (2U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (4U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (8U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x10U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x20U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x40U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x80U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if (((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((7U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((7U & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (8U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->timer_out) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__timer_out)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__timer_out = vlSelf->timer_out;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*11:0*/ top__DOT__my_vmem__DOT____VdfgTmp_h751f7d61__0;
    CData/*7:0*/ __Vdly__top__DOT__led1__DOT__led;
    IData/*31:0*/ __Vdly__top__DOT__led1__DOT__count;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    CData/*3:0*/ __Vdly__top__DOT__my_keyboard__DOT__count;
    IData/*31:0*/ __Vdly__top__DOT__mu_seg__DOT__count;
    CData/*2:0*/ __Vdly__top__DOT__mu_seg__DOT__offset;
    IData/*31:0*/ __Vdly__top__DOT__timer_1s__DOT__count_clk;
    // Body
    ++(vlSymsp->__Vcoverage[362]);
    ++(vlSymsp->__Vcoverage[422]);
    ++(vlSymsp->__Vcoverage[441]);
    ++(vlSymsp->__Vcoverage[451]);
    ++(vlSymsp->__Vcoverage[925]);
    ++(vlSymsp->__Vcoverage[1008]);
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[361]);
        ++(vlSymsp->__Vcoverage[421]);
        ++(vlSymsp->__Vcoverage[450]);
        ++(vlSymsp->__Vcoverage[924]);
        if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__sampling)))) {
            ++(vlSymsp->__Vcoverage[448]);
        }
        if (vlSelf->top__DOT__my_keyboard__DOT__sampling) {
            ++(vlSymsp->__Vcoverage[447]);
            if ((0xaU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                ++(vlSymsp->__Vcoverage[445]);
                if ((((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                               >> 1U))))) {
                    ++(vlSymsp->__Vcoverage[443]);
                }
                if ((1U & (~ (((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                               & (IData)(vlSelf->ps2_data)) 
                              & VL_REDXOR_32((0x1ffU 
                                              & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                                 >> 1U))))))) {
                    ++(vlSymsp->__Vcoverage[444]);
                }
            }
            if ((0xaU != (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                ++(vlSymsp->__Vcoverage[446]);
            }
        }
        if ((0U == vlSelf->top__DOT__led1__DOT__count)) {
            ++(vlSymsp->__Vcoverage[358]);
        }
        if ((0U != vlSelf->top__DOT__led1__DOT__count)) {
            ++(vlSymsp->__Vcoverage[359]);
        }
        if ((0x4c4b40U == vlSelf->top__DOT__mu_seg__DOT__count)) {
            ++(vlSymsp->__Vcoverage[921]);
        }
        if ((0x4c4b40U != vlSelf->top__DOT__mu_seg__DOT__count)) {
            ++(vlSymsp->__Vcoverage[922]);
        }
        if ((0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
            ++(vlSymsp->__Vcoverage[418]);
            if ((0x20dU == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))) {
                ++(vlSymsp->__Vcoverage[416]);
            }
            if ((0x20dU != (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))) {
                ++(vlSymsp->__Vcoverage[417]);
            }
        }
        if ((0x320U != (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
            ++(vlSymsp->__Vcoverage[419]);
        }
    }
    __Vdly__top__DOT__my_keyboard__DOT__count = vlSelf->top__DOT__my_keyboard__DOT__count;
    if ((0U != vlSelf->top__DOT__timer_1s__DOT__count_clk)) {
        ++(vlSymsp->__Vcoverage[1007]);
    }
    vlSelf->__Vdly__timer_out = vlSelf->timer_out;
    __Vdly__top__DOT__mu_seg__DOT__offset = vlSelf->top__DOT__mu_seg__DOT__offset;
    __Vdly__top__DOT__timer_1s__DOT__count_clk = vlSelf->top__DOT__timer_1s__DOT__count_clk;
    __Vdly__top__DOT__led1__DOT__led = vlSelf->top__DOT__led1__DOT__led;
    __Vdly__top__DOT__mu_seg__DOT__count = vlSelf->top__DOT__mu_seg__DOT__count;
    __Vdly__top__DOT__led1__DOT__count = vlSelf->top__DOT__led1__DOT__count;
    __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt;
    __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt;
    vlSelf->top__DOT__mu_seg__DOT__x = (0xfU & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)));
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[360]);
        ++(vlSymsp->__Vcoverage[420]);
        ++(vlSymsp->__Vcoverage[449]);
        ++(vlSymsp->__Vcoverage[923]);
    }
    if ((0U == vlSelf->top__DOT__timer_1s__DOT__count_clk)) {
        ++(vlSymsp->__Vcoverage[1006]);
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
            vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h68ebe97f__0 
                = vlSelf->ps2_data;
            if ((9U >= (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                vlSelf->top__DOT__my_keyboard__DOT__buffer 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) 
                        & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                       | (0x3ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h68ebe97f__0) 
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
    if ((0U == vlSelf->top__DOT__timer_1s__DOT__count_clk)) {
        vlSelf->__Vdly__timer_out = (1U & (~ (IData)(vlSelf->timer_out)));
        __Vdly__top__DOT__timer_1s__DOT__count_clk = 0U;
    } else {
        __Vdly__top__DOT__timer_1s__DOT__count_clk 
            = ((IData)(1U) + vlSelf->top__DOT__timer_1s__DOT__count_clk);
    }
    vlSelf->top__DOT__my_keyboard__DOT__count = __Vdly__top__DOT__my_keyboard__DOT__count;
    vlSelf->top__DOT__timer_1s__DOT__count_clk = __Vdly__top__DOT__timer_1s__DOT__count_clk;
    vlSelf->top__DOT__mu_seg__DOT__offset = __Vdly__top__DOT__mu_seg__DOT__offset;
    vlSelf->top__DOT__mu_seg__DOT__count = __Vdly__top__DOT__mu_seg__DOT__count;
    vlSelf->top__DOT__led1__DOT__led = __Vdly__top__DOT__led1__DOT__led;
    vlSelf->top__DOT__led1__DOT__count = __Vdly__top__DOT__led1__DOT__count;
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((5U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[440]);
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
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xeU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xdU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xbU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((7U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                   ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                   ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((1U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffffeU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (1U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((2U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffffdU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (2U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((4U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffffbU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (4U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((8U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffff7U & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (8U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x10U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffffefU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x10U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x20U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffffdfU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x20U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x40U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffffbfU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x40U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x80U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffff7fU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x80U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x100U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffeffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x100U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x200U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffdffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x200U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x400U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffbffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x400U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x800U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffff7ffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x800U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x1000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffefffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x1000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x2000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffdfffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x2000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x4000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffbfffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x4000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x8000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffff7fffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x8000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x10000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffeffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x10000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x20000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffdffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x20000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x40000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffbffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x40000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x80000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfff7ffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x80000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x100000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffefffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x100000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x200000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffdfffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x200000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x400000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffbfffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x400000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x800000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xff7fffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x800000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x1000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfeffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x1000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x2000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfdffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x2000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x4000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfbffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x4000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x8000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xf7ffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x8000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x10000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                        ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xefffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x10000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x20000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                        ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xdfffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x20000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x40000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                        ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xbfffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x40000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if (((vlSelf->top__DOT__timer_1s__DOT__count_clk 
          ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0x7fffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x80000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((6U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((5U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((3U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (4U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (1U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (2U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (4U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffff7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (8U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffff7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x100U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffeffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x100U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x200U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffdffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x200U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x400U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffbffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x400U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x800U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffff7ffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x800U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x1000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffefffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x1000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x2000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffdfffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x2000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x4000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffbfffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x4000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x8000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffff7fffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x8000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffeffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffdffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffbffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x80000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfff7ffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x100000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffefffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x100000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x200000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffdfffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x200000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x400000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffbfffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x400000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x800000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xff7fffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x800000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfeffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x1000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfdffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x2000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfbffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x4000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xf7ffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x8000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xefffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xdfffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xbfffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if (((vlSelf->top__DOT__mu_seg__DOT__count ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0x7fffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfeU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (1U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfdU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (2U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfbU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (4U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xf7U & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (8U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xefU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x10U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xdfU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x20U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xbfU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x40U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0x7fU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x80U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    vlSelf->ledr = (((IData)(vlSelf->top__DOT__led1__DOT__led) 
                     << 8U) | (IData)(vlSelf->sw));
    if ((1U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffeU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (1U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((2U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffdU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (2U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((4U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffbU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (4U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((8U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffff7U & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (8U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffefU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffdfU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffbfU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x80U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffff7fU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x100U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffeffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x100U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x200U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffdffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x200U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x400U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffbffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x400U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x800U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffff7ffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x800U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x1000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffefffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x1000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x2000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffdfffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x2000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x4000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffbfffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x4000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x8000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffff7fffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x8000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffeffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffdffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffbffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x80000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfff7ffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x100000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffefffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x100000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x200000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffdfffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x200000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x400000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffbfffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x400000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x800000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xff7fffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x800000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x1000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfeffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x1000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x2000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfdffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x2000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x4000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfbffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x4000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x8000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xf7ffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x8000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xefffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xdfffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xbfffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if (((vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0x7fffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    if ((1U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid = (
                                                   (0x90U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                                   & (0x310U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    if ((1U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = (
                                                   (0x23U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                                   & (0x203U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    if (((IData)(vlSelf->top__DOT__my_keyboard__DOT__sampling) 
         ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__sampling))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__sampling 
            = vlSelf->top__DOT__my_keyboard__DOT__sampling;
    }
    if ((1U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (1U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((2U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (2U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((4U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (4U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((8U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfff7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (8U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x10U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x20U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x40U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x80U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xff7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x100U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfeffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x100U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x200U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfdffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x200U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x400U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfbffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x400U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x800U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xf7ffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x800U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x1000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xefffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x1000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x2000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xdfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x2000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x4000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xbfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x4000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x8000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__ledr = ((0x7fffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if (((IData)(vlSelf->VGA_HSYNC) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_HSYNC))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__VGA_HSYNC = vlSelf->VGA_HSYNC;
    }
    if (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid) 
         ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid 
            = vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid;
    }
    vlSelf->top__DOT__h_addr = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U);
    if (((IData)(vlSelf->VGA_VSYNC) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_VSYNC))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__VGA_VSYNC = vlSelf->VGA_VSYNC;
    }
    if (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid) 
         ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__v_valid))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__v_valid 
            = vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid;
    }
    if (vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid) {
        vlSelf->VGA_BLANK_N = vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid;
        vlSelf->top__DOT____Vcellinp__my_vmem__v_addr 
            = (0x1ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                         - (IData)(0x24U)));
        vlSelf->top__DOT__v_addr = (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                              - (IData)(0x24U)));
        vlSelf->top__DOT__my_vmem__DOT__font_cord_v 
            = (0xfU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                       - (IData)(4U)));
        vlSelf->top__DOT__font_v = (0x1fU & (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                              - (IData)(0x24U)) 
                                             >> 4U));
    } else {
        vlSelf->VGA_BLANK_N = 0U;
        vlSelf->top__DOT____Vcellinp__my_vmem__v_addr = 0U;
        vlSelf->top__DOT__v_addr = 0U;
        vlSelf->top__DOT__my_vmem__DOT__font_cord_v = 0U;
        vlSelf->top__DOT__font_v = 0U;
    }
    if ((1U & ((0x3ffU & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h)))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h 
            = ((0xeU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h)) 
               | (1U & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x1ffU & (VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                          >> 1U)) ^ ((IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h) 
                                     >> 1U)))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h 
            = ((0xdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h)) 
               | (2U & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0xffU & (VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 2U)) ^ ((IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h) 
                                    >> 2U)))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h 
            = ((0xbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h)) 
               | (4U & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x7fU & (VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 3U)) ^ ((IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h) 
                                    >> 3U)))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h 
            = ((7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h)) 
               | (8U & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x3ffU & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__font_h)))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x7eU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (1U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x1ffU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                          >> 1U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                     >> 1U)))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x7dU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (2U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0xffU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 2U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 2U)))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x7bU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (4U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x7fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 3U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 3U)))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x77U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (8U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x3fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 4U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 4U)))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x6fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (0x10U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x1fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 5U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 5U)))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x5fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (0x20U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0xfU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                        >> 6U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                   >> 6U)))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x3fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (0x40U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3feU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3fdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3fbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3f7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3efU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3dfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3bfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x37fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__h_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x2ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__h_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x1ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if (((IData)(vlSelf->VGA_BLANK_N) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_BLANK_N))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT____Vtogcov__VGA_BLANK_N = vlSelf->VGA_BLANK_N;
    }
    if ((1U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1feU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (1U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1fdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (2U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1fbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (4U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1f7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (8U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1efU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1dfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1bfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x17fU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0xffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3feU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3fdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3fbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3f7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3efU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3dfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3bfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x37fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__v_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x2ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__v_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x1ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_cord_v) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = ((0xeU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_cord_v)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_cord_v) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = ((0xdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_cord_v)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_cord_v) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = ((0xbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_cord_v)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_cord_v) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = ((7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_cord_v)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__font_v) ^ (IData)(vlSelf->top__DOT____Vtogcov__font_v)))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->top__DOT____Vtogcov__font_v = ((0x1eU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__font_v)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__font_v) ^ (IData)(vlSelf->top__DOT____Vtogcov__font_v)))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->top__DOT____Vtogcov__font_v = ((0x1dU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__font_v)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__font_v) ^ (IData)(vlSelf->top__DOT____Vtogcov__font_v)))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->top__DOT____Vtogcov__font_v = ((0x1bU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__font_v)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__font_v) ^ (IData)(vlSelf->top__DOT____Vtogcov__font_v)))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->top__DOT____Vtogcov__font_v = ((0x17U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__font_v)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__font_v) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__font_v)))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->top__DOT____Vtogcov__font_v = ((0xfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->top__DOT__font_v)));
    }
    top__DOT__my_vmem__DOT____VdfgTmp_h751f7d61__0 
        = (((IData)(vlSelf->top__DOT__font_v) << 7U) 
           | (0x7fU & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    vlSelf->top__DOT__my_vmem__DOT__word = ((0x833U 
                                             >= (IData)(top__DOT__my_vmem__DOT____VdfgTmp_h751f7d61__0))
                                             ? vlSelf->top__DOT__my_vmem__DOT__vga_mem
                                            [top__DOT__my_vmem__DOT____VdfgTmp_h751f7d61__0]
                                             : 0U);
    if ((1U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xffeU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xffdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xffbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xff7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xfefU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xeffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xdffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xbffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x400U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x800U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    vlSelf->top__DOT__my_vmem__DOT__font_addr = ((0xfff0U 
                                                  & ((((IData)(0x30U) 
                                                       * (IData)(vlSelf->top__DOT__my_vmem__DOT__word)) 
                                                      + (IData)(vlSelf->top__DOT__my_vmem__DOT__font_cord_v)) 
                                                     << 4U)) 
                                                 | (0xfU 
                                                    & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    if ((1U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xffefU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                    ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xefffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                    ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                    ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                    ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    vlSelf->top__DOT__my_vmem__DOT__font_data = ((0xbfffU 
                                                  >= (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)) 
                                                 & vlSelf->top__DOT__my_vmem__DOT__font_rom
                                                 [vlSelf->top__DOT__my_vmem__DOT__font_addr]);
    if (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
         ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = vlSelf->top__DOT__my_vmem__DOT__font_data;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                 ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffeU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 1U
                                                     : 0U));
    }
    if ((2U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                 ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffdU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 2U
                                                     : 0U));
    }
    if ((4U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                 ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffbU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 4U
                                                     : 0U));
    }
    if ((8U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                 ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffff7U 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 8U
                                                     : 0U));
    }
    if ((0x10U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                    ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffefU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x10U
                                                     : 0U));
    }
    if ((0x20U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                    ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffdfU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x20U
                                                     : 0U));
    }
    if ((0x40U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                    ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffbfU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x40U
                                                     : 0U));
    }
    if ((0x80U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                    ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffff7fU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x80U
                                                     : 0U));
    }
    if ((0x100U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                     ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffeffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x100U
                                                     : 0U));
    }
    if ((0x200U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                     ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffdffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x200U
                                                     : 0U));
    }
    if ((0x400U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                     ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffbffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x400U
                                                     : 0U));
    }
    if ((0x800U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                     ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfff7ffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x800U
                                                     : 0U));
    }
    if ((0x1000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                      ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffefffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x1000U
                                                     : 0U));
    }
    if ((0x2000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                      ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffdfffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x2000U
                                                     : 0U));
    }
    if ((0x4000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                      ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffbfffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x4000U
                                                     : 0U));
    }
    if ((0x8000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                      ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xff7fffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x8000U
                                                     : 0U));
    }
    if ((0x10000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                       ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfeffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x10000U
                                                     : 0U));
    }
    if ((0x20000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                       ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfdffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x20000U
                                                     : 0U));
    }
    if ((0x40000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                       ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfbffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x40000U
                                                     : 0U));
    }
    if ((0x80000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                       ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xf7ffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x80000U
                                                     : 0U));
    }
    if ((0x100000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                        ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xefffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x100000U
                                                     : 0U));
    }
    if ((0x200000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                        ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xdfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x200000U
                                                     : 0U));
    }
    if ((0x400000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                        ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xbfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x400000U
                                                     : 0U));
    }
    if ((0x800000U & (((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                        ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0x7fffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                                                     ? 0x800000U
                                                     : 0U));
    }
    vlSelf->VGA_R = ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)
                      ? 0xffU : 0U);
    vlSelf->VGA_G = vlSelf->VGA_R;
    vlSelf->VGA_B = vlSelf->VGA_R;
    if ((1U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (1U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((2U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (2U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((4U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (4U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((8U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (8U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x10U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x20U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x40U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x80U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[385]);
    ++(vlSymsp->__Vcoverage[388]);
    ++(vlSymsp->__Vcoverage[481]);
    if (vlSelf->state_machine_clr) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->top__DOT__state_machine__DOT__state_dout = 0U;
    } else if (vlSelf->timer_out) {
        vlSelf->top__DOT__state_machine__DOT__state_dout 
            = vlSelf->top__DOT__state_machine__DOT__state_din;
    }
    if (vlSelf->counter_EN) {
        ++(vlSymsp->__Vcoverage[383]);
        ++(vlSymsp->__Vcoverage[386]);
        if ((0x63U >= (IData)(vlSelf->inc_counter_out))) {
            ++(vlSymsp->__Vcoverage[382]);
        }
        if ((0x63U < (IData)(vlSelf->inc_counter_out))) {
            ++(vlSymsp->__Vcoverage[381]);
        }
        vlSelf->inc_counter_out = ((0x63U < (IData)(vlSelf->inc_counter_out))
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->inc_counter_out))));
        vlSelf->dec_counter_out = (7U & ((IData)(vlSelf->dec_counter_out) 
                                         - (IData)(1U)));
    } else {
        vlSelf->dec_counter_out = 0U;
        vlSelf->inc_counter_out = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->counter_EN)))) {
        ++(vlSymsp->__Vcoverage[384]);
        ++(vlSymsp->__Vcoverage[387]);
    }
    if ((1U & (~ (IData)(vlSelf->state_machine_clr)))) {
        if (vlSelf->timer_out) {
            ++(vlSymsp->__Vcoverage[478]);
        }
        if ((1U & (~ (IData)(vlSelf->timer_out)))) {
            ++(vlSymsp->__Vcoverage[479]);
        }
    }
    if ((1U & ((IData)(vlSelf->dec_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->top__DOT____Vtogcov__dec_counter_out 
            = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)) 
               | (1U & (IData)(vlSelf->dec_counter_out)));
    }
    if ((2U & ((IData)(vlSelf->dec_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->top__DOT____Vtogcov__dec_counter_out 
            = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)) 
               | (2U & (IData)(vlSelf->dec_counter_out)));
    }
    if ((4U & ((IData)(vlSelf->dec_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->top__DOT____Vtogcov__dec_counter_out 
            = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)) 
               | (4U & (IData)(vlSelf->dec_counter_out)));
    }
    if ((1U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xfeU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (1U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((2U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xfdU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (2U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((4U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xfbU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (4U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((8U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xf7U & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (8U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x10U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xefU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x10U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x20U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xdfU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x20U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x40U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xbfU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x40U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x80U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0x7fU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x80U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((1U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (1U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((2U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (2U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((4U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (4U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((8U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (8U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x10U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x10U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x20U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x20U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x40U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x40U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x80U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x80U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((1U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (1U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((2U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (2U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((4U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (4U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((8U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (8U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x10U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (0x10U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x20U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (0x20U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x40U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (0x40U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x80U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (0x80U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    vlSelf->seg0 = (0xffU & (~ ((9U >= (0xfU & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))))
                                 ? vlSelf->top__DOT__mu_seg__DOT__segs
                                [(0xfU & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))]
                                 : 0U)));
    vlSelf->seg1 = (0xffU & (~ ((9U >= (0xfU & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))))
                                 ? vlSelf->top__DOT__mu_seg__DOT__segs
                                [(0xfU & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))]
                                 : 0U)));
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_dout)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_dout)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_dout)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout 
            = ((7U & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)) 
               | (8U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_dout)));
    }
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
            == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
           == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [2U]) & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [3U]) & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [4U]) & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [5U]) & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [6U]) & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [7U]) & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [8U]) & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->state_machine_out = ((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
                                 & (IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out));
    if ((1U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((2U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((4U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((8U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x10U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x20U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x40U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x80U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((1U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((2U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((4U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((8U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x10U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x20U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x40U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x80U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg1)));
    }
    if (((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out) 
         ^ (IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__lut_out 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out;
    }
    if (((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit;
    }
    if (((IData)(vlSelf->state_machine_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__state_machine_out))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT____Vtogcov__state_machine_out 
            = vlSelf->state_machine_out;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->timer_out = vlSelf->__Vdly__timer_out;
    if (((IData)(vlSelf->timer_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__timer_out))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->top__DOT____Vtogcov__timer_out = vlSelf->timer_out;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                       == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
           == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
                          == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
              == vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__state_machine__DOT__state_din 
        = ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit)
            ? (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)
            : 0U);
    if (((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((7U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((7U & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (8U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
}
