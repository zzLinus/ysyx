// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
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
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
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
    VlWide<3>/*95:0*/ __Vtemp_h87963ffc__0;
    // Body
    if ((0U == (IData)(vlSelf->s))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
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
            vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U != (IData)(vlSelf->s))) {
            if ((2U == (IData)(vlSelf->s))) {
                vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->s))) {
                if ((3U == (IData)(vlSelf->s))) {
                    vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
                }
                if ((3U != (IData)(vlSelf->s))) {
                    vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (vlSelf->en) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        if ((6U == (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        }
        if ((5U == (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        }
        if ((4U != (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        }
        if ((4U == (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        }
        if ((3U != (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        }
        if ((3U == (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        }
        if ((6U != (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0U == (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0U != (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        }
        if ((5U != (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U == (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U != (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        }
        if ((2U == (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        }
        if ((2U != (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        }
        if ((7U == (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        }
        if ((7U != (IData)(vlSelf->x))) {
            vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->ec_en) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 4U)))) {
            vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 3U)))) {
            vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 1U)))) {
            vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 5U)))) {
            vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->ec_x)))) {
            vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 6U)))) {
            vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 2U)))) {
            vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 7U)))) {
            vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__encoder__DOT__i = 8U;
        vlSelf->ec_y = 0U;
        if ((1U & (IData)(vlSelf->ec_x))) {
            vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
            vlSelf->ec_y = 0U;
        }
        if ((2U & (IData)(vlSelf->ec_x))) {
            vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
            vlSelf->ec_y = 1U;
        }
        if ((4U & (IData)(vlSelf->ec_x))) {
            vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
            vlSelf->ec_y = 2U;
        }
        if ((8U & (IData)(vlSelf->ec_x))) {
            vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
            vlSelf->ec_y = 3U;
        }
        if ((0x10U & (IData)(vlSelf->ec_x))) {
            vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
            vlSelf->ec_y = 4U;
        }
        if ((0x20U & (IData)(vlSelf->ec_x))) {
            vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
            vlSelf->ec_y = 5U;
        }
        if ((0x40U & (IData)(vlSelf->ec_x))) {
            vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
            vlSelf->ec_y = 6U;
        }
        if ((0x80U & (IData)(vlSelf->ec_x))) {
            vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
            vlSelf->ec_y = 7U;
        }
    } else {
        vlSelf->ec_y = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ec_en)))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->sft_rgtr_l_or_r)))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->sft_rgtr_a_or_l) {
            vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->sft_rgtr_a_or_l)))) {
            vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->sft_rgtr_l_or_r) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
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
                vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->alu_fnselec))) {
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT____Vtogcov__rst))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rst = vlSelf->rst;
    }
    if (((IData)(vlSelf->ps2_clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__ps2_clk))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ps2_clk = vlSelf->ps2_clk;
    }
    if (((IData)(vlSelf->ps2_data) ^ (IData)(vlSelf->top__DOT____Vtogcov__ps2_data))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ps2_data = vlSelf->ps2_data;
    }
    if (((IData)(vlSelf->counter_EN) ^ (IData)(vlSelf->top__DOT____Vtogcov__counter_EN))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__counter_EN = vlSelf->counter_EN;
    }
    if (((IData)(vlSelf->en) ^ (IData)(vlSelf->top__DOT____Vtogcov__en))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__en = vlSelf->en;
    }
    if (((IData)(vlSelf->rand_in) ^ (IData)(vlSelf->top__DOT____Vtogcov__rand_in))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rand_in = vlSelf->rand_in;
    }
    if (((IData)(vlSelf->state_machine_clr) ^ (IData)(vlSelf->top__DOT____Vtogcov__state_machine_clr))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__state_machine_clr 
            = vlSelf->state_machine_clr;
    }
    if (((IData)(vlSelf->ec_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_en))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_en = vlSelf->ec_en;
    }
    if (((IData)(vlSelf->sft_rgtr_l_or_r) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_l_or_r))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_l_or_r 
            = vlSelf->sft_rgtr_l_or_r;
    }
    if (((IData)(vlSelf->sft_rgtr_a_or_l) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_a_or_l))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_a_or_l 
            = vlSelf->sft_rgtr_a_or_l;
    }
    if ((1U ^ ((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__resetn)))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__resetn 
            = (1U & (~ (IData)(vlSelf->rst)));
    }
    if ((1U & ((IData)(vlSelf->s) ^ (IData)(vlSelf->top__DOT____Vtogcov__s)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__s = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__s)) 
                                          | (1U & (IData)(vlSelf->s)));
    }
    if ((2U & ((IData)(vlSelf->s) ^ (IData)(vlSelf->top__DOT____Vtogcov__s)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__s = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__s)) 
                                          | (2U & (IData)(vlSelf->s)));
    }
    if ((1U & ((IData)(vlSelf->x) ^ (IData)(vlSelf->top__DOT____Vtogcov__x)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__x = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__x)) 
                                          | (1U & (IData)(vlSelf->x)));
    }
    if ((2U & ((IData)(vlSelf->x) ^ (IData)(vlSelf->top__DOT____Vtogcov__x)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__x = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__x)) 
                                          | (2U & (IData)(vlSelf->x)));
    }
    if ((4U & ((IData)(vlSelf->x) ^ (IData)(vlSelf->top__DOT____Vtogcov__x)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__x = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__x)) 
                                          | (4U & (IData)(vlSelf->x)));
    }
    if ((1U & ((IData)(vlSelf->alu_fnselec) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fnselec = 
            ((6U & (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)) 
             | (1U & (IData)(vlSelf->alu_fnselec)));
    }
    if ((2U & ((IData)(vlSelf->alu_fnselec) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fnselec = 
            ((5U & (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)) 
             | (2U & (IData)(vlSelf->alu_fnselec)));
    }
    if ((4U & ((IData)(vlSelf->alu_fnselec) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fnselec = 
            ((3U & (IData)(vlSelf->top__DOT____Vtogcov__alu_fnselec)) 
             | (4U & (IData)(vlSelf->alu_fnselec)));
    }
    if ((1U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_a = ((0xeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (1U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((2U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_a = ((0xdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (2U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((4U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_a = ((0xbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (4U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((8U & ((IData)(vlSelf->alu_a) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_a)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_a = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__alu_a)) 
                                              | (8U 
                                                 & (IData)(vlSelf->alu_a)));
    }
    if ((1U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_b = ((0xeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (1U 
                                                 & (IData)(vlSelf->alu_b)));
    }
    if ((2U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_b = ((0xdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (2U 
                                                 & (IData)(vlSelf->alu_b)));
    }
    if ((4U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_b = ((0xbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (4U 
                                                 & (IData)(vlSelf->alu_b)));
    }
    if ((8U & ((IData)(vlSelf->alu_b) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_b)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_b = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__alu_b)) 
                                              | (8U 
                                                 & (IData)(vlSelf->alu_b)));
    }
    vlSelf->VGA_CLK = vlSelf->clk;
    if ((1U & ((IData)(vlSelf->sft_rgtr_shamt) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt 
            = ((0x1eU & (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)) 
               | (1U & (IData)(vlSelf->sft_rgtr_shamt)));
    }
    if ((2U & ((IData)(vlSelf->sft_rgtr_shamt) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt 
            = ((0x1dU & (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)) 
               | (2U & (IData)(vlSelf->sft_rgtr_shamt)));
    }
    if ((4U & ((IData)(vlSelf->sft_rgtr_shamt) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt 
            = ((0x1bU & (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)) 
               | (4U & (IData)(vlSelf->sft_rgtr_shamt)));
    }
    if ((8U & ((IData)(vlSelf->sft_rgtr_shamt) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt 
            = ((0x17U & (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)) 
               | (8U & (IData)(vlSelf->sft_rgtr_shamt)));
    }
    if ((0x10U & ((IData)(vlSelf->sft_rgtr_shamt) ^ (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt 
            = ((0xfU & (IData)(vlSelf->top__DOT____Vtogcov__sft_rgtr_shamt)) 
               | (0x10U & (IData)(vlSelf->sft_rgtr_shamt)));
    }
    if ((1U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sw = ((0xfeU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (1U & (IData)(vlSelf->sw)));
    }
    if ((2U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sw = ((0xfdU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (2U & (IData)(vlSelf->sw)));
    }
    if ((4U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sw = ((0xfbU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (4U & (IData)(vlSelf->sw)));
    }
    if ((8U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sw = ((0xf7U & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (8U & (IData)(vlSelf->sw)));
    }
    if ((0x10U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sw = ((0xefU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (0x10U 
                                              & (IData)(vlSelf->sw)));
    }
    if ((0x20U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sw = ((0xdfU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (0x20U 
                                              & (IData)(vlSelf->sw)));
    }
    if ((0x40U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sw = ((0xbfU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (0x40U 
                                              & (IData)(vlSelf->sw)));
    }
    if ((0x80U & ((IData)(vlSelf->sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sw = ((0x7fU & (IData)(vlSelf->top__DOT____Vtogcov__sw)) 
                                           | (0x80U 
                                              & (IData)(vlSelf->sw)));
    }
    if ((1U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfeU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (1U & (IData)(vlSelf->a)));
    }
    if ((2U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfdU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (2U & (IData)(vlSelf->a)));
    }
    if ((4U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfbU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (4U & (IData)(vlSelf->a)));
    }
    if ((8U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xf7U & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (8U & (IData)(vlSelf->a)));
    }
    if ((0x10U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xefU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (0x10U 
                                             & (IData)(vlSelf->a)));
    }
    if ((0x20U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xdfU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (0x20U 
                                             & (IData)(vlSelf->a)));
    }
    if ((0x40U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xbfU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (0x40U 
                                             & (IData)(vlSelf->a)));
    }
    if ((0x80U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0x7fU & (IData)(vlSelf->top__DOT____Vtogcov__a)) 
                                          | (0x80U 
                                             & (IData)(vlSelf->a)));
    }
    if ((1U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (1U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((2U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (2U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((4U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (4U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((8U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (8U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((0x10U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((0x20U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((0x40U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((0x80U & ((IData)(vlSelf->ec_x) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_x)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_x = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ec_x)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->ec_x)));
    }
    if ((1U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (1U & vlSelf->sft_rgtr_data));
    }
    if ((2U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (2U & vlSelf->sft_rgtr_data));
    }
    if ((4U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (4U & vlSelf->sft_rgtr_data));
    }
    if ((8U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (8U & vlSelf->sft_rgtr_data));
    }
    if ((0x10U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x10U & vlSelf->sft_rgtr_data));
    }
    if ((0x20U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x20U & vlSelf->sft_rgtr_data));
    }
    if ((0x40U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x40U & vlSelf->sft_rgtr_data));
    }
    if ((0x80U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x80U & vlSelf->sft_rgtr_data));
    }
    if ((0x100U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x100U & vlSelf->sft_rgtr_data));
    }
    if ((0x200U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x200U & vlSelf->sft_rgtr_data));
    }
    if ((0x400U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x400U & vlSelf->sft_rgtr_data));
    }
    if ((0x800U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x800U & vlSelf->sft_rgtr_data));
    }
    if ((0x1000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x1000U & vlSelf->sft_rgtr_data));
    }
    if ((0x2000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x2000U & vlSelf->sft_rgtr_data));
    }
    if ((0x4000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x4000U & vlSelf->sft_rgtr_data));
    }
    if ((0x8000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x8000U & vlSelf->sft_rgtr_data));
    }
    if ((0x10000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x10000U & vlSelf->sft_rgtr_data));
    }
    if ((0x20000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x20000U & vlSelf->sft_rgtr_data));
    }
    if ((0x40000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x40000U & vlSelf->sft_rgtr_data));
    }
    if ((0x80000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x80000U & vlSelf->sft_rgtr_data));
    }
    if ((0x100000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x100000U & vlSelf->sft_rgtr_data));
    }
    if ((0x200000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x200000U & vlSelf->sft_rgtr_data));
    }
    if ((0x400000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x400000U & vlSelf->sft_rgtr_data));
    }
    if ((0x800000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x800000U & vlSelf->sft_rgtr_data));
    }
    if ((0x1000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x1000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x2000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x2000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x4000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x4000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x8000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x8000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x10000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x10000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x20000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x20000000U & vlSelf->sft_rgtr_data));
    }
    if ((0x40000000U & (vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_rgtr_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
               | (0x40000000U & vlSelf->sft_rgtr_data));
    }
    if (((vlSelf->sft_rgtr_data ^ vlSelf->top__DOT____Vtogcov__sft_rgtr_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
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
                vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->alu_fnselec))) {
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
                if (((IData)(vlSelf->alu_a) == (IData)(vlSelf->alu_b))) {
                    vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->alu_res = 1U;
                } else {
                    vlSelf->alu_res = 0U;
                }
                if (((IData)(vlSelf->alu_a) != (IData)(vlSelf->alu_b))) {
                    vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
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
                vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
                if (((IData)(vlSelf->alu_a) >= (IData)(vlSelf->alu_b))) {
                    vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
                }
                if (((IData)(vlSelf->alu_a) < (IData)(vlSelf->alu_b))) {
                    vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
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
    __Vtemp_h87963ffc__0[1U] = (IData)(((0x1020304000000000ULL 
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
    vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
        = (IData)((0x1020304000000000ULL | (((QData)((IData)(
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
    vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
        = __Vtemp_h87963ffc__0[1U];
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
        vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] = 5U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[8U] = 5U;
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
        vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] = 1U;
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list[8U] = 1U;
    }
    if (((IData)(vlSelf->VGA_CLK) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_CLK))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_CLK = vlSelf->VGA_CLK;
    }
    if ((1U & ((IData)(vlSelf->y) ^ (IData)(vlSelf->top__DOT____Vtogcov__y)))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__y = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__y)) 
                                          | (1U & (IData)(vlSelf->y)));
    }
    if ((2U & ((IData)(vlSelf->y) ^ (IData)(vlSelf->top__DOT____Vtogcov__y)))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__y = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__y)) 
                                          | (2U & (IData)(vlSelf->y)));
    }
    if ((1U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_y = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (1U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if ((2U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_y = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (2U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if ((4U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ec_y = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (4U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if (((IData)(vlSelf->alu_carry) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_carry))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_carry = vlSelf->alu_carry;
    }
    if (((IData)(vlSelf->alu_overflow) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_overflow))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_overflow = vlSelf->alu_overflow;
    }
    if (((IData)(vlSelf->alu_zero) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_zero))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_zero = vlSelf->alu_zero;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((0xeU & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (1U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((0xdU & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (2U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((0xbU & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (4U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((7U & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (8U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((1U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xeU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (1U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((2U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xdU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (2U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((4U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xbU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (4U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((8U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_res = ((7U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (8U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((1U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (1U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((2U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (2U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((4U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (4U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((8U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (8U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x10U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x20U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x40U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x80U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((1U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (1U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((2U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (2U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((4U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (4U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((8U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfff7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (8U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x10U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x20U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x40U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x80U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xff7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x100U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfeffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x100U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x200U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfdffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x200U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x400U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfbffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x400U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x800U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xf7ffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x800U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x1000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xefffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x1000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x2000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xdfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x2000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x4000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xbfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x4000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x8000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0x7fffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((1U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffffeU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (1U 
                                                     & vlSelf->sft_out_q));
    }
    if ((2U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffffdU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (2U 
                                                     & vlSelf->sft_out_q));
    }
    if ((4U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffffbU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (4U 
                                                     & vlSelf->sft_out_q));
    }
    if ((8U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffff7U 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (8U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x10U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffffefU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x10U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x20U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffffdfU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x20U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x40U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffffbfU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x40U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x80U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffff7fU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x80U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x100U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffeffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x100U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x200U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffdffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x200U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x400U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffbffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x400U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x800U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffff7ffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x800U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x1000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffefffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x1000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x2000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffdfffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x2000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x4000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffbfffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x4000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x8000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffff7fffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x8000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x10000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffeffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x10000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x20000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffdffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x20000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x40000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffbffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x40000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x80000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfff7ffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x80000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x100000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffefffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x100000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x200000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffdfffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x200000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x400000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffbfffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x400000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x800000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xff7fffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x800000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x1000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfeffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x1000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x2000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfdffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x2000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x4000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfbffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x4000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x8000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xf7ffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x8000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x10000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xefffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x10000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x20000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xdfffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x20000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x40000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xbfffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x40000000U 
                                                     & vlSelf->sft_out_q));
    }
    if (((vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0x7fffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x80000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if (((vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
          ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if (((vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
          ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (1U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (2U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (4U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (8U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x10U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x20U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x40U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x80U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if (((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__hit))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((7U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__my_keyboard__DOT__keycode__0)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->timer_out) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__timer_out__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->top__DOT__lookup__DOT__ascii) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__lookup__DOT__ascii__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__my_keyboard__DOT__keycode__0 
        = vlSelf->top__DOT__my_keyboard__DOT__keycode;
    vlSelf->__Vtrigprevexpr___TOP__timer_out__0 = vlSelf->timer_out;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__lookup__DOT__ascii__0 
        = vlSelf->top__DOT__lookup__DOT__ascii;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__1\n"); );
    // Body
    if ((0xf0U == (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
        vlSelf->top__DOT__lookup__DOT__pressing = (1U 
                                                   & (~ (IData)(vlSelf->top__DOT__lookup__DOT__pressing)));
    }
    vlSelf->top__DOT__lookup__DOT__ascii = ((0x80U 
                                             & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                             ? 0U : 
                                            ((0x40U 
                                              & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                              ? ((0x20U 
                                                  & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0U
                                                       : 0x7fU)
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x5dU
                                                       : 0xa9U)
                                                      : 0U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0U
                                                       : 0x5bU))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0U
                                                       : 0x22U)
                                                      : 0U)))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x50U
                                                       : 0x3bU))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x4cU
                                                       : 0x2fU)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x2eU
                                                       : 0U)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0U
                                                       : 0x4fU))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x49U
                                                       : 0x4bU)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x2cU
                                                       : 0U))))))
                                              : ((0x20U 
                                                  & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0U
                                                       : 0x55U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x4aU
                                                       : 0x4dU)
                                                      : 0U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x59U
                                                       : 0x47U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x48U
                                                       : 0x42U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x4eU
                                                       : 0U))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x52U
                                                       : 0x54U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x46U
                                                       : 0x56U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x20U
                                                       : 0U)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0U
                                                       : 0x45U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x44U
                                                       : 0x58U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x43U
                                                       : 0U)))))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x57U
                                                       : 0x41U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x53U
                                                       : 0x5aU)
                                                      : 0U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0U
                                                       : 0x21U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))
                                                       ? 0x51U
                                                       : 0U))
                                                     : 0U))
                                                   : 0U))));
    if ((1U & (~ (IData)(vlSelf->top__DOT__lookup__DOT__pressing)))) {
        vlSelf->top__DOT__lookup__DOT__ascii = 0U;
    }
    if (((IData)(vlSelf->top__DOT__lookup__DOT__pressing) 
         ^ (IData)(vlSelf->top__DOT__lookup__DOT____Vtogcov__pressing))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__lookup__DOT____Vtogcov__pressing 
            = vlSelf->top__DOT__lookup__DOT__pressing;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__lookup__DOT__ascii) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ascii_code = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__lookup__DOT__ascii)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__lookup__DOT__ascii) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ascii_code = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__lookup__DOT__ascii)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__lookup__DOT__ascii) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ascii_code = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__lookup__DOT__ascii)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__lookup__DOT__ascii) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ascii_code = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->top__DOT__lookup__DOT__ascii)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__lookup__DOT__ascii) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ascii_code = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->top__DOT__lookup__DOT__ascii)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__lookup__DOT__ascii) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ascii_code = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->top__DOT__lookup__DOT__ascii)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__lookup__DOT__ascii) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ascii_code = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->top__DOT__lookup__DOT__ascii)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__lookup__DOT__ascii) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ascii_code = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__ascii_code)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->top__DOT__lookup__DOT__ascii)));
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdly__top__DOT__my_keyboard__DOT__count = 0U;
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
                vlSelf->top__DOT__my_keyboard__DOT__keycode 
                    = (0xffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                >> 1U));
            }
            vlSelf->__Vdly__top__DOT__my_keyboard__DOT__count = 0U;
        } else {
            vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h90f460a6__0 
                = vlSelf->ps2_data;
            if ((9U >= (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                vlSelf->__Vdly__top__DOT__my_keyboard__DOT__buffer 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) 
                        & (IData)(vlSelf->__Vdly__top__DOT__my_keyboard__DOT__buffer)) 
                       | (0x3ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h90f460a6__0) 
                                    << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))));
            }
            vlSelf->__Vdly__top__DOT__my_keyboard__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__key_code)))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__key_code = ((0xfeU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__key_code)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__key_code)))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__key_code = ((0xfdU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__key_code)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__key_code)))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__key_code = ((0xfbU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__key_code)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__key_code)))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__key_code = ((0xf7U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__key_code)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__key_code)))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__key_code = ((0xefU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__key_code)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__key_code)))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__key_code = ((0xdfU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__key_code)) 
                                                 | (0x20U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__key_code)))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__key_code = ((0xbfU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__key_code)) 
                                                 | (0x40U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__key_code)))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__key_code = ((0x7fU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__key_code)) 
                                                 | (0x80U 
                                                    & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__top__DOT__led1__DOT__led;
    __Vdly__top__DOT__led1__DOT__led = 0;
    IData/*31:0*/ __Vdly__top__DOT__led1__DOT__count;
    __Vdly__top__DOT__led1__DOT__count = 0;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 0;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 0;
    IData/*31:0*/ __Vdly__top__DOT__mu_seg__DOT__count;
    __Vdly__top__DOT__mu_seg__DOT__count = 0;
    CData/*2:0*/ __Vdly__top__DOT__mu_seg__DOT__offset;
    __Vdly__top__DOT__mu_seg__DOT__offset = 0;
    IData/*31:0*/ __Vdly__top__DOT__timer_1s__DOT__count_clk;
    __Vdly__top__DOT__timer_1s__DOT__count_clk = 0;
    // Body
    vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__sampling)))) {
            vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__my_keyboard__DOT__sampling) {
            vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
            if ((0xaU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
                if ((((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                               >> 1U))))) {
                    vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                               & (IData)(vlSelf->ps2_data)) 
                              & VL_REDXOR_32((0x1ffU 
                                              & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                                 >> 1U))))))) {
                    vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0xaU != (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0U == vlSelf->top__DOT__led1__DOT__count)) {
            vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0U != vlSelf->top__DOT__led1__DOT__count)) {
            vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x4c4b40U == vlSelf->top__DOT__mu_seg__DOT__count)) {
            vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x4c4b40U != vlSelf->top__DOT__mu_seg__DOT__count)) {
            vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
            vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
            if ((0x20dU == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))) {
                vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x20dU != (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))) {
                vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x320U != (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
            vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U != vlSelf->top__DOT__timer_1s__DOT__count_clk)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->__Vdly__timer_out = vlSelf->timer_out;
    __Vdly__top__DOT__mu_seg__DOT__offset = vlSelf->top__DOT__mu_seg__DOT__offset;
    __Vdly__top__DOT__timer_1s__DOT__count_clk = vlSelf->top__DOT__timer_1s__DOT__count_clk;
    if ((0U == vlSelf->top__DOT__timer_1s__DOT__count_clk)) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vdly__timer_out = (1U & (~ (IData)(vlSelf->timer_out)));
        __Vdly__top__DOT__timer_1s__DOT__count_clk = 0U;
    } else {
        __Vdly__top__DOT__timer_1s__DOT__count_clk 
            = ((IData)(1U) + vlSelf->top__DOT__timer_1s__DOT__count_clk);
    }
    __Vdly__top__DOT__led1__DOT__led = vlSelf->top__DOT__led1__DOT__led;
    __Vdly__top__DOT__mu_seg__DOT__count = vlSelf->top__DOT__mu_seg__DOT__count;
    __Vdly__top__DOT__led1__DOT__count = vlSelf->top__DOT__led1__DOT__count;
    __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt;
    __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt;
    if (vlSelf->rst) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->top__DOT__mu_seg__DOT__x = (0xfU & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)));
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    vlSelf->top__DOT__my_keyboard__DOT__count = vlSelf->__Vdly__top__DOT__my_keyboard__DOT__count;
    vlSelf->top__DOT__my_keyboard__DOT__buffer = vlSelf->__Vdly__top__DOT__my_keyboard__DOT__buffer;
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xeU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xdU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xbU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((7U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                   ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                   ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    vlSelf->top__DOT__timer_1s__DOT__count_clk = __Vdly__top__DOT__timer_1s__DOT__count_clk;
    vlSelf->top__DOT__mu_seg__DOT__offset = __Vdly__top__DOT__mu_seg__DOT__offset;
    vlSelf->top__DOT__mu_seg__DOT__count = __Vdly__top__DOT__mu_seg__DOT__count;
    vlSelf->top__DOT__led1__DOT__led = __Vdly__top__DOT__led1__DOT__led;
    vlSelf->top__DOT__led1__DOT__count = __Vdly__top__DOT__led1__DOT__count;
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((5U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((3U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    vlSelf->top__DOT__my_keyboard__DOT__sampling = (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))));
    if ((1U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffffeU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (1U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((2U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffffdU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (2U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((4U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffffbU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (4U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((8U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffff7U & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (8U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x10U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffffefU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x10U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x20U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffffdfU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x20U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x40U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffffbfU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x40U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x80U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffff7fU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x80U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x100U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffeffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x100U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x200U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffdffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x200U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x400U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffbffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x400U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x800U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffff7ffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x800U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x1000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffefffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x1000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x2000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffdfffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x2000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x4000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffbfffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x4000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x8000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffff7fffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x8000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x10000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffeffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x10000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x20000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffdffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x20000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x40000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffbffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x40000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x80000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfff7ffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x80000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x100000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffefffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x100000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x200000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffdfffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x200000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x400000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffbfffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x400000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x800000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xff7fffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x800000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x1000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfeffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x1000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x2000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfdffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x2000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x4000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfbffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x4000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x8000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xf7ffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x8000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x10000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                        ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xefffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x10000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x20000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                        ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xdfffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x20000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x40000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                        ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xbfffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x40000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if (((vlSelf->top__DOT__timer_1s__DOT__count_clk 
          ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0x7fffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x80000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((6U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((5U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((3U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (4U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (1U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (2U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (4U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffff7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (8U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffff7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x100U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffeffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x100U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x200U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffdffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x200U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x400U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffbffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x400U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x800U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffff7ffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x800U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x1000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffefffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x1000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x2000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffdfffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x2000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x4000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffbfffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x4000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x8000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffff7fffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x8000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffeffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffdffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffbffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x80000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfff7ffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x100000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffefffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x100000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x200000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffdfffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x200000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x400000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffbfffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x400000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x800000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xff7fffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x800000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfeffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x1000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfdffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x2000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfbffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x4000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xf7ffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x8000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xefffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xdfffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xbfffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if (((vlSelf->top__DOT__mu_seg__DOT__count ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0x7fffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfeU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (1U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfdU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (2U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfbU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (4U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xf7U & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (8U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xefU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x10U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xdfU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x20U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xbfU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x40U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0x7fU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x80U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    vlSelf->ledr = (((IData)(vlSelf->top__DOT__led1__DOT__led) 
                     << 8U) | (IData)(vlSelf->sw));
    if ((1U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffeU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (1U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((2U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffdU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (2U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((4U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffbU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (4U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((8U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffff7U & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (8U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffefU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffdfU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffbfU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x80U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffff7fU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x100U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffeffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x100U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x200U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffdffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x200U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x400U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffbffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x400U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x800U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffff7ffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x800U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x1000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffefffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x1000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x2000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffdfffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x2000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x4000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffbfffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x4000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x8000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffff7fffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x8000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffeffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffdffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffbffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x80000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfff7ffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x100000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffefffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x100000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x200000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffdfffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x200000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x400000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffbfffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x400000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x800000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xff7fffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x800000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x1000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfeffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x1000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x2000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfdffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x2000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x4000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfbffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x4000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x8000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xf7ffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x8000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xefffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xdfffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xbfffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if (((vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0x7fffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    if ((1U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__sampling 
            = vlSelf->top__DOT__my_keyboard__DOT__sampling;
    }
    if ((1U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (1U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((2U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (2U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((4U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfffbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (4U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((8U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfff7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (8U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x10U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x20U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x40U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xffbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x80U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xff7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x100U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfeffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x100U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x200U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfdffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x200U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x400U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xfbffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x400U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x800U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xf7ffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x800U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x1000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xefffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x1000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x2000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xdfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x2000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x4000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0xbfffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x4000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if ((0x8000U & ((IData)(vlSelf->ledr) ^ (IData)(vlSelf->top__DOT____Vtogcov__ledr)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ledr = ((0x7fffU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ledr)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->ledr)));
    }
    if (((IData)(vlSelf->VGA_HSYNC) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_HSYNC))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_HSYNC = vlSelf->VGA_HSYNC;
    }
    if (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid) 
         ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid 
            = vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid;
    }
    vlSelf->top__DOT__h_addr = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U);
    if (((IData)(vlSelf->VGA_VSYNC) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_VSYNC))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_VSYNC = vlSelf->VGA_VSYNC;
    }
    if (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid) 
         ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__v_valid))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
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
    } else {
        vlSelf->VGA_BLANK_N = 0U;
        vlSelf->top__DOT____Vcellinp__my_vmem__v_addr = 0U;
        vlSelf->top__DOT__v_addr = 0U;
    }
    if ((1U & ((0x3ffU & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h)))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h 
            = ((0xeU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h)) 
               | (1U & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x1ffU & (VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                          >> 1U)) ^ ((IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h) 
                                     >> 1U)))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h 
            = ((0xdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h)) 
               | (2U & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0xffU & (VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 2U)) ^ ((IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h) 
                                    >> 2U)))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h 
            = ((0xbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h)) 
               | (4U & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x7fU & (VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 3U)) ^ ((IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h) 
                                    >> 3U)))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h 
            = ((7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_h)) 
               | (8U & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3feU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3fdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3fbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3f7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3efU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3dfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3bfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x37fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__h_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x2ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__h_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x1ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((1U & ((0x3ffU & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__font_h)))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = ((0xffeU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (1U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x1ffU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                          >> 1U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                     >> 1U)))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = ((0xffdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (2U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0xffU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 2U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 2U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = ((0xffbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (4U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x7fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 3U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 3U)))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = ((0xff7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (8U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x3fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 4U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 4U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = ((0xfefU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (0x10U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0x1fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                         >> 5U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 5U)))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = ((0xfdfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (0x20U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((0xfU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                        >> 6U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                   >> 6U)))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = ((0xfbfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (0x40U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((7U & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                      >> 7U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                 >> 7U)))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = ((0xf7fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (0x80U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((3U & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                      >> 8U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                 >> 8U)))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = ((0xeffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (0x100U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((1U & ((1U & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                      >> 9U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                 >> 9U)))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = ((0xdffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (0x200U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    }
    if ((0x400U & (IData)(vlSelf->top__DOT____Vtogcov__font_h))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = (0xbffU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__font_h));
    }
    if ((0x800U & (IData)(vlSelf->top__DOT____Vtogcov__font_h))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_h = (0x7ffU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__font_h));
    }
    if (((IData)(vlSelf->VGA_BLANK_N) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_BLANK_N))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_BLANK_N = vlSelf->VGA_BLANK_N;
    }
    if ((1U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1feU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (1U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1fdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (2U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1fbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (4U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1f7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (8U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1efU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1dfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1bfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x17fU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0xffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((1U & ((0xfU & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = ((0xffeU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)) 
               | (1U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((1U & ((7U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = ((0xffdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)) 
               | (2U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((1U & ((3U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = ((0xffbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)) 
               | (4U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((1U & (((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                >> 3U) ^ ((IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v) 
                          >> 3U)))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = ((0xff7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v)) 
               | (8U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = (0xfefU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v));
    }
    if ((0x20U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = (0xfdfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v));
    }
    if ((0x40U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = (0xfbfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v));
    }
    if ((0x80U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = (0xf7fU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v));
    }
    if ((0x100U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = (0xeffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v));
    }
    if ((0x200U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = (0xdffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v));
    }
    if ((0x400U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = (0xbffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v));
    }
    if ((0x800U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v 
            = (0x7ffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_cord_v));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3feU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3fdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3fbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3f7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3efU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3dfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3bfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x37fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__v_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x2ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__v_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x1ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((1U & ((0x3ffU & ((IData)(vlSelf->top__DOT__v_addr) 
                          >> 4U)) ^ (IData)(vlSelf->top__DOT____Vtogcov__font_v)))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = ((0xffeU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->top__DOT__v_addr) 
                                                     >> 4U)));
    }
    if ((1U & ((0x1ffU & ((IData)(vlSelf->top__DOT__v_addr) 
                          >> 5U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                     >> 1U)))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = ((0xffdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (2U 
                                                  & ((IData)(vlSelf->top__DOT__v_addr) 
                                                     >> 4U)));
    }
    if ((1U & ((0xffU & ((IData)(vlSelf->top__DOT__v_addr) 
                         >> 6U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                    >> 2U)))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = ((0xffbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (4U 
                                                  & ((IData)(vlSelf->top__DOT__v_addr) 
                                                     >> 4U)));
    }
    if ((1U & ((0x7fU & ((IData)(vlSelf->top__DOT__v_addr) 
                         >> 7U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                    >> 3U)))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = ((0xff7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (8U 
                                                  & ((IData)(vlSelf->top__DOT__v_addr) 
                                                     >> 4U)));
    }
    if ((1U & ((0x3fU & ((IData)(vlSelf->top__DOT__v_addr) 
                         >> 8U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                    >> 4U)))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = ((0xfefU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (0x10U 
                                                  & ((IData)(vlSelf->top__DOT__v_addr) 
                                                     >> 4U)));
    }
    if ((1U & ((0x1fU & ((IData)(vlSelf->top__DOT__v_addr) 
                         >> 9U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                    >> 5U)))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = ((0xfdfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (0x20U 
                                                  & ((IData)(vlSelf->top__DOT__v_addr) 
                                                     >> 4U)));
    }
    if ((1U & ((0xfU & ((IData)(vlSelf->top__DOT__v_addr) 
                        >> 0xaU)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                     >> 6U)))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = ((0xfbfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (0x40U 
                                                  & ((IData)(vlSelf->top__DOT__v_addr) 
                                                     >> 4U)));
    }
    if ((1U & ((7U & ((IData)(vlSelf->top__DOT__v_addr) 
                      >> 0xbU)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                   >> 7U)))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = ((0xf7fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (0x80U 
                                                  & ((IData)(vlSelf->top__DOT__v_addr) 
                                                     >> 4U)));
    }
    if ((1U & ((3U & ((IData)(vlSelf->top__DOT__v_addr) 
                      >> 0xcU)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                   >> 8U)))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = ((0xeffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (0x100U 
                                                  & ((IData)(vlSelf->top__DOT__v_addr) 
                                                     >> 4U)));
    }
    if ((0x200U & (IData)(vlSelf->top__DOT____Vtogcov__font_v))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = ((0xdffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (0x200U 
                                                  & ((IData)(vlSelf->top__DOT__v_addr) 
                                                     >> 4U)));
    }
    if ((0x400U & (IData)(vlSelf->top__DOT____Vtogcov__font_v))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = (0xbffU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__font_v));
    }
    if ((0x800U & (IData)(vlSelf->top__DOT____Vtogcov__font_v))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__font_v = (0x7ffU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__font_v));
    }
    vlSelf->top__DOT__my_vmem__DOT____VdfgTmp_h121ea448__0 
        = (0xfffU & (((IData)(0x47U) * (0x3ffU & ((IData)(vlSelf->top__DOT__v_addr) 
                                                  >> 4U))) 
                     + (0x3ffU & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->state_machine_clr) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__state_dout = 0U;
    } else if (vlSelf->timer_out) {
        vlSelf->top__DOT__state_machine__DOT__state_dout 
            = vlSelf->top__DOT__state_machine__DOT__state_din;
    }
    if (vlSelf->counter_EN) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        if ((0x63U >= (IData)(vlSelf->inc_counter_out))) {
            vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x63U < (IData)(vlSelf->inc_counter_out))) {
            vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->state_machine_clr)))) {
        if (vlSelf->timer_out) {
            vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->timer_out)))) {
            vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & ((IData)(vlSelf->dec_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dec_counter_out 
            = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)) 
               | (1U & (IData)(vlSelf->dec_counter_out)));
    }
    if ((2U & ((IData)(vlSelf->dec_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dec_counter_out 
            = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)) 
               | (2U & (IData)(vlSelf->dec_counter_out)));
    }
    if ((4U & ((IData)(vlSelf->dec_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dec_counter_out 
            = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)) 
               | (4U & (IData)(vlSelf->dec_counter_out)));
    }
    if ((1U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xfeU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (1U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((2U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xfdU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (2U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((4U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xfbU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (4U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((8U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xf7U & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (8U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x10U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xefU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x10U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x20U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xdfU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x20U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x40U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xbfU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x40U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x80U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0x7fU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x80U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((1U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (1U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((2U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (2U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((4U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (4U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((8U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (8U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x10U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x10U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x20U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x20U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x40U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x40U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x80U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x80U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((1U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (1U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((2U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (2U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((4U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (4U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((8U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (8U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x10U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (0x10U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x20U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (0x20U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x40U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (0x40U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x80U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_dout)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_dout)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_dout)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((2U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((4U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((8U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x10U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x20U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x40U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x80U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((1U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((2U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((4U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((8U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x10U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x20U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x40U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x80U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg1)));
    }
    if (((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out) 
         ^ (IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__lut_out 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out;
    }
    if (((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__hit))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit;
    }
    if (((IData)(vlSelf->state_machine_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__state_machine_out))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__state_machine_out 
            = vlSelf->state_machine_out;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
    if ((0U == (IData)(vlSelf->top__DOT__lookup__DOT__ascii))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (IData)(vlSelf->top__DOT__lookup__DOT__ascii))) {
        if ((0xa9U == (IData)(vlSelf->top__DOT__lookup__DOT__ascii))) {
            vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0xa9U != (IData)(vlSelf->top__DOT__lookup__DOT__ascii))) {
            if ((0x7fU != (IData)(vlSelf->top__DOT__lookup__DOT__ascii))) {
                vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x7fU == (IData)(vlSelf->top__DOT__lookup__DOT__ascii))) {
                vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
            }
        }
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (IData)(vlSelf->top__DOT__lookup__DOT__ascii))) {
        if (VL_UNLIKELY((0xa9U == (IData)(vlSelf->top__DOT__lookup__DOT__ascii)))) {
            vlSelf->top__DOT__my_vmem__DOT__word_count 
                = (0xfffU & ((IData)(1U) + VL_DIV_III(12, (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count), (IData)(0x47U))));
            vlSelf->top__DOT__my_vmem__DOT__word_count 
                = (0xfffU & ((IData)(0x47U) * (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
            VL_WRITEF("word_count %4#\n",12,vlSelf->top__DOT__my_vmem__DOT__word_count);
        } else if ((0x7fU == (IData)(vlSelf->top__DOT__lookup__DOT__ascii))) {
            vlSelf->top__DOT__my_vmem__DOT__word_count 
                = (0xfffU & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
                             - (IData)(1U)));
            vlSelf->top__DOT__my_vmem__DOT____Vlvbound_ha10ca83c__0 = 0x20U;
            if ((0x833U >= (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count))) {
                vlSelf->top__DOT__my_vmem__DOT__vga_mem[vlSelf->top__DOT__my_vmem__DOT__word_count] 
                    = vlSelf->top__DOT__my_vmem__DOT____Vlvbound_ha10ca83c__0;
            }
        } else {
            vlSelf->top__DOT__my_vmem__DOT____Vlvbound_ha10ca83c__1 
                = vlSelf->top__DOT__lookup__DOT__ascii;
            if ((0x833U >= (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count))) {
                vlSelf->top__DOT__my_vmem__DOT__vga_mem[vlSelf->top__DOT__my_vmem__DOT__word_count] 
                    = vlSelf->top__DOT__my_vmem__DOT____Vlvbound_ha10ca83c__1;
            }
            vlSelf->top__DOT__my_vmem__DOT__word_count 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0xffeU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0xffdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0xffbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0xff7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0xfefU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0xeffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0xdffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0xbffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (0x400U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word_count) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word_count)) 
               | (0x800U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word_count)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->top__DOT__lookup__DOT__pressing) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__lookup__DOT__pressing)))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                    if ((8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                        if ((4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                      >> 2U)))) {
                            vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                              >> 4U)))) {
                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x20U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((0x10U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
        if ((0x40U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                    }
                    if ((8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                    }
                }
                if ((0x10U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                    if ((8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                            vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x20U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                      >> 2U)))) {
                            vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode) 
                                          >> 1U)))) {
                                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode)))) {
                                    vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                    }
                    if ((8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x10U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
                    vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0xf0U == (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0xf0U != (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x80U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__keycode))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->timer_out = vlSelf->__Vdly__timer_out;
    if (((IData)(vlSelf->timer_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__timer_out))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__timer_out = vlSelf->timer_out;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__my_vmem__DOT__word = ((0x833U 
                                             >= (IData)(vlSelf->top__DOT__my_vmem__DOT____VdfgTmp_h121ea448__0))
                                             ? vlSelf->top__DOT__my_vmem__DOT__vga_mem
                                            [vlSelf->top__DOT__my_vmem__DOT____VdfgTmp_h121ea448__0]
                                             : 0U);
    if ((1U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xffeU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xffdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xffbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xff7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xfefU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xeffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xdffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xbffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x400U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x800U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    vlSelf->top__DOT__my_vmem__DOT__font_addr = (0xfffU 
                                                 & (((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                                                     << 4U) 
                                                    + 
                                                    (0xfU 
                                                     & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr))));
    if ((1U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_addr)));
    }
    vlSelf->top__DOT__my_vmem__DOT__font_data = vlSelf->top__DOT__my_vmem__DOT__font_rom
        [vlSelf->top__DOT__my_vmem__DOT__font_addr];
    if ((1U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0xffeU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0xffdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0xffbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0xff7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0xfefU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0xeffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0xdffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0xbffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (0x400U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__font_data)) 
               | (0x800U & (IData)(vlSelf->top__DOT__my_vmem__DOT__font_data)));
    }
    vlSelf->__VdfgTmp_h4d092dc3__0 = ((0xbU >= (0xfU 
                                                & VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)))) 
                                      & ((IData)(vlSelf->top__DOT__my_vmem__DOT__font_data) 
                                         >> (0xfU & 
                                             VL_MODDIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)))));
    if ((1U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                 ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffeU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 1U
                                                     : 0U));
    }
    if ((2U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                 ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffdU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 2U
                                                     : 0U));
    }
    if ((4U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                 ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffffbU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 4U
                                                     : 0U));
    }
    if ((8U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                 ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffff7U 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 8U
                                                     : 0U));
    }
    if ((0x10U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                    ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffefU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x10U
                                                     : 0U));
    }
    if ((0x20U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                    ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffdfU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x20U
                                                     : 0U));
    }
    if ((0x40U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                    ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffffbfU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x40U
                                                     : 0U));
    }
    if ((0x80U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                    ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffff7fU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x80U
                                                     : 0U));
    }
    if ((0x100U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                     ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffeffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x100U
                                                     : 0U));
    }
    if ((0x200U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                     ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffdffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x200U
                                                     : 0U));
    }
    if ((0x400U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                     ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfffbffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x400U
                                                     : 0U));
    }
    if ((0x800U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                     ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfff7ffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x800U
                                                     : 0U));
    }
    if ((0x1000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                      ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffefffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x1000U
                                                     : 0U));
    }
    if ((0x2000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                      ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffdfffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x2000U
                                                     : 0U));
    }
    if ((0x4000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                      ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xffbfffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x4000U
                                                     : 0U));
    }
    if ((0x8000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                      ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xff7fffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x8000U
                                                     : 0U));
    }
    if ((0x10000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                       ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfeffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x10000U
                                                     : 0U));
    }
    if ((0x20000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                       ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfdffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x20000U
                                                     : 0U));
    }
    if ((0x40000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                       ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xfbffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x40000U
                                                     : 0U));
    }
    if ((0x80000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                       ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xf7ffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x80000U
                                                     : 0U));
    }
    if ((0x100000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                        ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xefffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x100000U
                                                     : 0U));
    }
    if ((0x200000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                        ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xdfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x200000U
                                                     : 0U));
    }
    if ((0x400000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                        ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0xbfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x400000U
                                                     : 0U));
    }
    if ((0x800000U & (((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                        ? 0xffffffU : 0U) ^ vlSelf->top__DOT____Vtogcov__vga_data))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__vga_data = ((0x7fffffU 
                                                  & vlSelf->top__DOT____Vtogcov__vga_data) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                                                     ? 0x800000U
                                                     : 0U));
    }
    vlSelf->VGA_R = ((IData)(vlSelf->__VdfgTmp_h4d092dc3__0)
                      ? 0xffU : 0U);
    vlSelf->VGA_G = vlSelf->VGA_R;
    vlSelf->VGA_B = vlSelf->VGA_R;
    if ((1U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (1U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((2U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (2U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((4U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (4U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((8U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (8U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x10U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x20U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x40U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
    if ((0x80U & ((IData)(vlSelf->VGA_R) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__VGA_R = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_R)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->VGA_R)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
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
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((7U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((7U & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (8U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
}
