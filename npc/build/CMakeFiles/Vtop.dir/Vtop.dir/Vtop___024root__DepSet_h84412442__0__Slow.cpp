// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__timer_1s__DOT__count_clk = 0U;
    ++(vlSymsp->__Vcoverage[968]);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 49153> top__DOT__my_vmem__DOT__font_rom;
    VlWide<6>/*191:0*/ __Vtemp_h6b654b6a__0;
    VlWide<5>/*159:0*/ __Vtemp_h127e8b07__0;
    // Body
    ++(vlSymsp->__Vcoverage[310]);
    if ((1U & (~ vlSelf->top__DOT____Vtogcov__vga_data))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->top__DOT____Vtogcov__vga_data = (1U 
                                                 | vlSelf->top__DOT____Vtogcov__vga_data);
    }
    ++(vlSymsp->__Vcoverage[361]);
    ++(vlSymsp->__Vcoverage[367]);
    ++(vlSymsp->__Vcoverage[373]);
    ++(vlSymsp->__Vcoverage[386]);
    ++(vlSymsp->__Vcoverage[462]);
    if (vlSelf->top__DOT__state_machine__DOT__outMux__DOT____Vtogcov__default_out) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT____Vtogcov__default_out = 0U;
    }
    if ((1U & (IData)((vlSelf->top__DOT__state_machine__DOT__outMux__DOT____Vtogcov__lut 
                       >> 1U)))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT____Vtogcov__lut 
            = (0x1ffffffffffdULL & vlSelf->top__DOT__state_machine__DOT__outMux__DOT____Vtogcov__lut);
    }
    ++(vlSymsp->__Vcoverage[569]);
    ++(vlSymsp->__Vcoverage[569]);
    ++(vlSymsp->__Vcoverage[569]);
    ++(vlSymsp->__Vcoverage[571]);
    ++(vlSymsp->__Vcoverage[569]);
    ++(vlSymsp->__Vcoverage[569]);
    ++(vlSymsp->__Vcoverage[569]);
    ++(vlSymsp->__Vcoverage[569]);
    ++(vlSymsp->__Vcoverage[569]);
    ++(vlSymsp->__Vcoverage[569]);
    ++(vlSymsp->__Vcoverage[572]);
    ++(vlSymsp->__Vcoverage[794]);
    ++(vlSymsp->__Vcoverage[794]);
    ++(vlSymsp->__Vcoverage[794]);
    ++(vlSymsp->__Vcoverage[796]);
    ++(vlSymsp->__Vcoverage[794]);
    ++(vlSymsp->__Vcoverage[794]);
    ++(vlSymsp->__Vcoverage[794]);
    ++(vlSymsp->__Vcoverage[794]);
    ++(vlSymsp->__Vcoverage[794]);
    ++(vlSymsp->__Vcoverage[794]);
    ++(vlSymsp->__Vcoverage[797]);
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[0U] = 8U;
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[1U] = 7U;
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[2U] = 6U;
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[4U] = 4U;
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[5U] = 3U;
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[6U] = 2U;
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[7U] = 1U;
    vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list[8U] = 0U;
    vlSelf->VGA_R = 0xffU;
    vlSelf->VGA_G = 0xffU;
    vlSelf->VGA_B = 0xffU;
    vlSelf->top__DOT__mu_seg__DOT__segs[0U] = 0xfdU;
    vlSelf->top__DOT__mu_seg__DOT__segs[1U] = 0x60U;
    vlSelf->top__DOT__mu_seg__DOT__segs[2U] = 0xdaU;
    vlSelf->top__DOT__mu_seg__DOT__segs[3U] = 0xf2U;
    vlSelf->top__DOT__mu_seg__DOT__segs[4U] = 0x66U;
    vlSelf->top__DOT__mu_seg__DOT__segs[5U] = 0xb6U;
    vlSelf->top__DOT__mu_seg__DOT__segs[6U] = 0xbeU;
    vlSelf->top__DOT__mu_seg__DOT__segs[7U] = 0xe0U;
    vlSelf->top__DOT__mu_seg__DOT__segs[8U] = 0xffU;
    vlSelf->top__DOT__mu_seg__DOT__segs[9U] = 0xe6U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[0U] = 8U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[1U] = 7U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[2U] = 6U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[4U] = 4U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[5U] = 3U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[6U] = 2U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[7U] = 1U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list[8U] = 0U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[0U] = 0x11U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[1U] = 0xeU;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[2U] = 0xcU;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[3U] = 0xaU;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[4U] = 9U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[5U] = 6U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[6U] = 4U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[7U] = 2U;
    vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list[8U] = 0U;
    __Vtemp_h6b654b6a__0[0U] = 0x2e747874U;
    __Vtemp_h6b654b6a__0[1U] = 0x6f6e7432U;
    __Vtemp_h6b654b6a__0[2U] = 0x67615f66U;
    __Vtemp_h6b654b6a__0[3U] = 0x63652f76U;
    __Vtemp_h6b654b6a__0[4U] = 0x736f7572U;
    __Vtemp_h6b654b6a__0[5U] = 0x7265U;
    VL_READMEM_N(true, 1, 49153, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_h6b654b6a__0)
                 ,  &(top__DOT__my_vmem__DOT__font_rom)
                 , 0, ~0ULL);
    __Vtemp_h127e8b07__0[0U] = 0x2e747874U;
    __Vtemp_h127e8b07__0[1U] = 0x74657374U;
    __Vtemp_h127e8b07__0[2U] = 0x7263652fU;
    __Vtemp_h127e8b07__0[3U] = 0x65736f75U;
    __Vtemp_h127e8b07__0[4U] = 0x72U;
    VL_READMEM_N(true, 8, 2100, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h127e8b07__0)
                 ,  &(vlSelf->top__DOT__my_vmem__DOT__vga_mem)
                 , 0, ~0ULL);
    ++(vlSymsp->__Vcoverage[935]);
    vlSelf->seg2 = 0x1fU;
    vlSelf->seg3 = 0x41U;
    vlSelf->seg4 = 0x99U;
    vlSelf->seg5 = 0x49U;
    vlSelf->seg6 = 0xdU;
    vlSelf->seg7 = 0x25U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*11:0*/ top__DOT__my_vmem__DOT____VdfgTmp_h4b89b944__0;
    VlWide<3>/*95:0*/ __Vtemp_hb59a07c7__0;
    VlWide<3>/*95:0*/ __Vtemp_hf92794d7__0;
    // Body
    if ((0U == (IData)(vlSelf->s))) {
        ++(vlSymsp->__Vcoverage[356]);
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
            ++(vlSymsp->__Vcoverage[357]);
        }
        if ((1U != (IData)(vlSelf->s))) {
            if ((2U == (IData)(vlSelf->s))) {
                ++(vlSymsp->__Vcoverage[358]);
            }
            if ((2U != (IData)(vlSelf->s))) {
                if ((3U == (IData)(vlSelf->s))) {
                    ++(vlSymsp->__Vcoverage[359]);
                }
                if ((3U != (IData)(vlSelf->s))) {
                    ++(vlSymsp->__Vcoverage[360]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->en)))) {
        ++(vlSymsp->__Vcoverage[366]);
    }
    if (vlSelf->ec_en) {
        ++(vlSymsp->__Vcoverage[370]);
        ++(vlSymsp->__Vcoverage[370]);
        ++(vlSymsp->__Vcoverage[370]);
        ++(vlSymsp->__Vcoverage[370]);
        ++(vlSymsp->__Vcoverage[370]);
        ++(vlSymsp->__Vcoverage[370]);
        ++(vlSymsp->__Vcoverage[370]);
        ++(vlSymsp->__Vcoverage[370]);
        ++(vlSymsp->__Vcoverage[371]);
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 4U)))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 3U)))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 1U)))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 5U)))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((1U & (~ (IData)(vlSelf->ec_x)))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 6U)))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 2U)))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        if ((1U & (~ ((IData)(vlSelf->ec_x) >> 7U)))) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        vlSelf->top__DOT__encoder__DOT__i = 8U;
        vlSelf->ec_y = 0U;
        if ((1U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[368]);
            vlSelf->ec_y = 0U;
        }
        if ((2U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[368]);
            vlSelf->ec_y = 1U;
        }
        if ((4U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[368]);
            vlSelf->ec_y = 2U;
        }
        if ((8U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[368]);
            vlSelf->ec_y = 3U;
        }
        if ((0x10U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[368]);
            vlSelf->ec_y = 4U;
        }
        if ((0x20U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[368]);
            vlSelf->ec_y = 5U;
        }
        if ((0x40U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[368]);
            vlSelf->ec_y = 6U;
        }
        if ((0x80U & (IData)(vlSelf->ec_x))) {
            ++(vlSymsp->__Vcoverage[368]);
            vlSelf->ec_y = 7U;
        }
    } else {
        vlSelf->ec_y = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ec_en)))) {
        ++(vlSymsp->__Vcoverage[372]);
    }
    if ((1U & (~ (IData)(vlSelf->sft_rgtr_l_or_r)))) {
        ++(vlSymsp->__Vcoverage[385]);
        if (vlSelf->sft_rgtr_a_or_l) {
            ++(vlSymsp->__Vcoverage[382]);
        }
        if ((1U & (~ (IData)(vlSelf->sft_rgtr_a_or_l)))) {
            ++(vlSymsp->__Vcoverage[383]);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->alu_fnselec) >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->alu_fnselec) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[450]);
            }
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                ++(vlSymsp->__Vcoverage[449]);
            }
        }
        if ((2U & (IData)(vlSelf->alu_fnselec))) {
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                ++(vlSymsp->__Vcoverage[451]);
            }
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[452]);
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
    if (((IData)(vlSelf->timer_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__timer_out))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->top__DOT____Vtogcov__timer_out = vlSelf->timer_out;
    }
    if ((1U ^ ((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__resetn)))) {
        ++(vlSymsp->__Vcoverage[416]);
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
    if ((1U & ((IData)(vlSelf->dec_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->top__DOT____Vtogcov__dec_counter_out 
            = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)) 
               | (1U & (IData)(vlSelf->dec_counter_out)));
    }
    if ((2U & ((IData)(vlSelf->dec_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->top__DOT____Vtogcov__dec_counter_out 
            = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)) 
               | (2U & (IData)(vlSelf->dec_counter_out)));
    }
    if ((4U & ((IData)(vlSelf->dec_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->top__DOT____Vtogcov__dec_counter_out 
            = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__dec_counter_out)) 
               | (4U & (IData)(vlSelf->dec_counter_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((5U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync 
            = ((3U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__ps2_clk_sync)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((6U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((5U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mu_seg__DOT__offset) 
               ^ (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset 
            = ((3U & (IData)(vlSelf->top__DOT__mu_seg__DOT____Vtogcov__offset)) 
               | (4U & (IData)(vlSelf->top__DOT__mu_seg__DOT__offset)));
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
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xeU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xdU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((0xbU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__count) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count 
            = ((7U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__count)) 
               | (8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_dout)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_dout)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_dout)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_dout) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout 
            = ((7U & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_dout)) 
               | (8U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_dout)));
    }
    vlSelf->VGA_CLK = vlSelf->clk;
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    vlSelf->top__DOT__my_keyboard__DOT__sampling = (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))));
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
    if (vlSelf->en) {
        ++(vlSymsp->__Vcoverage[364]);
        ++(vlSymsp->__Vcoverage[364]);
        ++(vlSymsp->__Vcoverage[364]);
        ++(vlSymsp->__Vcoverage[364]);
        ++(vlSymsp->__Vcoverage[364]);
        ++(vlSymsp->__Vcoverage[364]);
        ++(vlSymsp->__Vcoverage[364]);
        ++(vlSymsp->__Vcoverage[364]);
        ++(vlSymsp->__Vcoverage[365]);
        if ((6U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[362]);
        }
        if ((5U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[362]);
        }
        if ((4U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[363]);
        }
        if ((4U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[362]);
        }
        if ((3U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[363]);
        }
        if ((3U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[362]);
        }
        if ((6U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[363]);
        }
        if ((0U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[362]);
        }
        if ((0U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[363]);
        }
        if ((5U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[363]);
        }
        if ((1U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[362]);
        }
        if ((1U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[363]);
        }
        if ((2U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[362]);
        }
        if ((2U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[363]);
        }
        if ((7U == (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[362]);
        }
        if ((7U != (IData)(vlSelf->x))) {
            ++(vlSymsp->__Vcoverage[363]);
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
    if (vlSelf->sft_rgtr_l_or_r) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->sft_out_q = (vlSelf->sft_rgtr_data 
                             << (IData)(vlSelf->sft_rgtr_shamt));
    } else {
        vlSelf->sft_out_q = ((IData)(vlSelf->sft_rgtr_a_or_l)
                              ? VL_SHIFTRS_III(32,32,5, vlSelf->sft_rgtr_data, (IData)(vlSelf->sft_rgtr_shamt))
                              : (vlSelf->sft_rgtr_data 
                                 >> (IData)(vlSelf->sft_rgtr_shamt)));
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
    if ((1U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (1U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((2U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (2U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((4U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (4U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((8U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (8U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x10U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x20U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x40U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((0x80U & ((IData)(vlSelf->VGA_G) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__VGA_G = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_G)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->VGA_G)));
    }
    if ((1U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (1U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((2U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (2U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((4U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (4U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((8U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (8U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x10U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x20U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x40U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((0x80U & ((IData)(vlSelf->VGA_B) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT____Vtogcov__VGA_B = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__VGA_B)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->VGA_B)));
    }
    if ((1U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((2U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((4U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((8U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x10U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x20U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x40U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((0x80U & ((IData)(vlSelf->seg2) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg2)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT____Vtogcov__seg2 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg2)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg2)));
    }
    if ((1U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((2U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((4U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((8U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x10U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x20U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x40U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((0x80U & ((IData)(vlSelf->seg3) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg3)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT____Vtogcov__seg3 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg3)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg3)));
    }
    if ((1U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((2U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((4U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((8U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x10U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x20U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x40U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((0x80U & ((IData)(vlSelf->seg4) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg4)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT____Vtogcov__seg4 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg4)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg4)));
    }
    if ((1U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((2U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((4U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((8U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x10U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x20U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x40U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((0x80U & ((IData)(vlSelf->seg5) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg5)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT____Vtogcov__seg5 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg5)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg5)));
    }
    if ((1U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((2U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((4U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((8U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x10U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x20U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x40U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((0x80U & ((IData)(vlSelf->seg6) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg6)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT____Vtogcov__seg6 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg6)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg6)));
    }
    if ((1U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((2U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((4U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((8U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x10U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x20U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x40U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((0x80U & ((IData)(vlSelf->seg7) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg7)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__seg7 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg7)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg7)));
    }
    if ((1U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xfeU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (1U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((2U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xfdU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (2U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((4U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xfbU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (4U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((8U & ((IData)(vlSelf->inc_counter_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xf7U & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (8U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x10U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xefU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x10U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x20U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xdfU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x20U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x40U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0xbfU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x40U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((0x80U & ((IData)(vlSelf->inc_counter_out) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->top__DOT____Vtogcov__inc_counter_out 
            = ((0x7fU & (IData)(vlSelf->top__DOT____Vtogcov__inc_counter_out)) 
               | (0x80U & (IData)(vlSelf->inc_counter_out)));
    }
    if ((1U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (1U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((2U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (2U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((4U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (4U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((8U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (8U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x10U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x10U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x20U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x20U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x40U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x40U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x80U & (VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_x)))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->top__DOT____Vtogcov__seg_x = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_x)) 
                                              | (0x80U 
                                                 & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((1U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (1U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((2U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (2U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((4U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (4U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((8U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (8U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x10U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (0x10U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x20U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (0x20U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x40U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (0x40U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((0x80U & (VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__seg_y)))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->top__DOT____Vtogcov__seg_y = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__seg_y)) 
                                              | (0x80U 
                                                 & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfeU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (1U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfdU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (2U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xfbU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (4U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
               ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xf7U & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (8U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xefU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x10U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xdfU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x20U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0xbfU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x40U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__led1__DOT__led) 
                  ^ (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__led 
            = ((0x7fU & (IData)(vlSelf->top__DOT__led1__DOT____Vtogcov__led)) 
               | (0x80U & (IData)(vlSelf->top__DOT__led1__DOT__led)));
    }
    if ((vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
         [0U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list
         [0U])) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
            [0U];
    }
    if ((vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
         [1U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list
         [1U])) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
            [1U];
    }
    if ((vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
         [2U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list
         [2U])) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
            [2U];
    }
    if ((vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
         [3U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list
         [3U])) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
            [3U];
    }
    if ((vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
         [4U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list
         [4U])) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
            [4U];
    }
    if ((vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
         [5U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list
         [5U])) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
            [5U];
    }
    if ((vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
         [6U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list
         [6U])) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
            [6U];
    }
    if ((vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
         [7U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list
         [7U])) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
            [7U];
    }
    if ((vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
         [8U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list
         [8U])) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__data_list
            [8U];
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__x_cnt)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
               ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                  ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                   ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__y_cnt)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3feU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (1U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3fdU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (2U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3fbU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (4U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
               ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3f7U & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (8U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3efU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3dfU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x3bfU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                  ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x37fU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                   ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x2ffU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x100U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                   ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer 
            = ((0x1ffU & (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__buffer)) 
               | (0x200U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)));
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
    if ((1U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffeU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (1U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((2U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffdU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (2U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((4U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffffbU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (4U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((8U & (vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffff7U & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (8U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffefU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffdfU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffffbfU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x80U & (vlSelf->top__DOT__led1__DOT__count 
                  ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffff7fU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x100U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffeffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x100U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x200U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffdffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x200U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x400U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffffbffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x400U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x800U & (vlSelf->top__DOT__led1__DOT__count 
                   ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffff7ffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x800U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x1000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffefffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x1000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x2000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffdfffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x2000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x4000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffffbfffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x4000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x8000U & (vlSelf->top__DOT__led1__DOT__count 
                    ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffff7fffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x8000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffeffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffdffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfffbffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x80000U & (vlSelf->top__DOT__led1__DOT__count 
                     ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfff7ffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x100000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffefffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x100000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x200000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffdfffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x200000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x400000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xffbfffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x400000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x800000U & (vlSelf->top__DOT__led1__DOT__count 
                      ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xff7fffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x800000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x1000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfeffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x1000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x2000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfdffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x2000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x4000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xfbffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x4000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x8000000U & (vlSelf->top__DOT__led1__DOT__count 
                       ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xf7ffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x8000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x10000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xefffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x10000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x20000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xdfffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x20000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((0x40000000U & (vlSelf->top__DOT__led1__DOT__count 
                        ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0xbfffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x40000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if (((vlSelf->top__DOT__led1__DOT__count ^ vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->top__DOT__led1__DOT____Vtogcov__count 
            = ((0x7fffffffU & vlSelf->top__DOT__led1__DOT____Vtogcov__count) 
               | (0x80000000U & vlSelf->top__DOT__led1__DOT__count));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (1U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (2U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffffbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (4U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__count 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffff7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (8U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffffbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__count 
                  ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffff7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x100U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffeffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x100U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x200U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffdffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x200U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x400U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffffbffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x400U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x800U & (vlSelf->top__DOT__mu_seg__DOT__count 
                   ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffff7ffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x800U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x1000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffefffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x1000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x2000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffdfffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x2000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x4000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffffbfffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x4000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x8000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                    ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffff7fffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x8000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffeffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffdffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfffbffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x80000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                     ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfff7ffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x100000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffefffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x100000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x200000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffdfffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x200000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x400000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xffbfffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x400000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x800000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                      ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xff7fffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x800000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfeffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x1000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfdffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x2000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xfbffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x4000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                       ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xf7ffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x8000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xefffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x10000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xdfffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x20000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mu_seg__DOT__count 
                        ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0xbfffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x40000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if (((vlSelf->top__DOT__mu_seg__DOT__count ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count 
            = ((0x7fffffffU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__count) 
               | (0x80000000U & vlSelf->top__DOT__mu_seg__DOT__count));
    }
    if ((1U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffffeU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (1U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((2U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffffdU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (2U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((4U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffffbU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (4U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((8U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
               ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffff7U & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (8U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x10U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffffefU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x10U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x20U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffffdfU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x20U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x40U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffffbfU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x40U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x80U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                  ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffff7fU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x80U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x100U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffeffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x100U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x200U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffdffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x200U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x400U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffffbffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x400U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x800U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                   ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffff7ffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x800U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x1000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffefffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x1000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x2000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffdfffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x2000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x4000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffffbfffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x4000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x8000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                    ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffff7fffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x8000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x10000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffeffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x10000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x20000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffdffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x20000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x40000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfffbffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x40000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x80000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                     ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfff7ffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x80000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x100000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffefffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x100000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x200000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffdfffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x200000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x400000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xffbfffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x400000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x800000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                      ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xff7fffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x800000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x1000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfeffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x1000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x2000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfdffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x2000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x4000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xfbffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x4000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x8000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                       ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xf7ffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x8000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x10000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                        ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xefffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x10000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x20000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                        ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xdfffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x20000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((0x40000000U & (vlSelf->top__DOT__timer_1s__DOT__count_clk 
                        ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0xbfffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x40000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if (((vlSelf->top__DOT__timer_1s__DOT__count_clk 
          ^ vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk 
            = ((0x7fffffffU & vlSelf->top__DOT__timer_1s__DOT____Vtogcov__count_clk) 
               | (0x80000000U & vlSelf->top__DOT__timer_1s__DOT__count_clk));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[7U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [7U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[7U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [7U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[7U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [7U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[7U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [7U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[8U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [8U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[8U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [8U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[8U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [8U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [8U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list[8U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__key_list
                [8U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__key_list
                         [8U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[7U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [7U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[7U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [7U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[7U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [7U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[7U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [7U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[8U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [8U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[8U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [8U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[8U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [8U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [8U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list[8U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__key_list
                [8U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__key_list
                         [8U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1eU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1dU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1bU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x17U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0x1eU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0x1dU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0x1bU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0x17U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0x1eU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0x1dU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0x1bU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0x17U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xfU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0x1eU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0x1dU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0x1bU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0x17U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xfU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0x1eU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0x1dU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0x1bU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0x17U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xfU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0x1eU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0x1dU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0x1bU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0x17U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xfU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0x1eU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0x1dU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0x1bU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0x17U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xfU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0x1eU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0x1dU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0x1bU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0x17U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xfU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0x1eU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (1U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0x1dU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (2U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0x1bU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (4U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0x17U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (8U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xfU & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    vlSelf->top__DOT__alu__DOT__tmp = (0xfU & ((IData)(1U) 
                                               + (~ (IData)(vlSelf->alu_b))));
    if ((4U & (IData)(vlSelf->alu_fnselec))) {
        if ((1U & (~ ((IData)(vlSelf->alu_fnselec) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->alu_fnselec)))) {
                ++(vlSymsp->__Vcoverage[453]);
            }
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[454]);
            }
        }
        if ((2U & (IData)(vlSelf->alu_fnselec))) {
            if ((1U & (IData)(vlSelf->alu_fnselec))) {
                ++(vlSymsp->__Vcoverage[460]);
                if (((IData)(vlSelf->alu_a) == (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[458]);
                    vlSelf->alu_res = 1U;
                } else {
                    vlSelf->alu_res = 0U;
                }
                if (((IData)(vlSelf->alu_a) != (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[459]);
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
                ++(vlSymsp->__Vcoverage[457]);
                if (((IData)(vlSelf->alu_a) >= (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[456]);
                }
                if (((IData)(vlSelf->alu_a) < (IData)(vlSelf->alu_b))) {
                    ++(vlSymsp->__Vcoverage[455]);
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
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[0U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [0U]))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [0U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[0U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [0U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[1U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [1U]))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [1U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[1U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [1U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[2U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [2U]))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [2U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[2U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [2U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[3U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [3U]))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [3U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[3U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [3U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[4U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [4U]))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [4U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[4U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [4U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[5U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [5U]))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [5U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[5U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [5U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[6U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [6U]))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [6U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[6U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [6U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[7U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [7U]))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [7U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[7U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [7U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[8U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [8U]))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[8U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [8U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[8U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [8U]))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[8U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [8U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[8U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [8U]))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[8U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [8U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [8U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[8U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [8U]))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[8U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [8U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [8U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [8U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[8U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [8U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [8U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [8U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[8U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [8U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [8U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [8U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[8U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [8U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [8U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [8U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[8U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [8U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [8U]));
    }
    if ((1U & (vlSelf->top__DOT__mu_seg__DOT__segs[9U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [9U]))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[9U] 
            = ((0xfeU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [9U]) | (1U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [9U]));
    }
    if ((2U & (vlSelf->top__DOT__mu_seg__DOT__segs[9U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [9U]))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[9U] 
            = ((0xfdU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [9U]) | (2U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [9U]));
    }
    if ((4U & (vlSelf->top__DOT__mu_seg__DOT__segs[9U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [9U]))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[9U] 
            = ((0xfbU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [9U]) | (4U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [9U]));
    }
    if ((8U & (vlSelf->top__DOT__mu_seg__DOT__segs[9U] 
               ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
               [9U]))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[9U] 
            = ((0xf7U & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [9U]) | (8U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [9U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [9U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[9U] 
            = ((0xefU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [9U]) | (0x10U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [9U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [9U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[9U] 
            = ((0xdfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [9U]) | (0x20U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [9U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [9U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[9U] 
            = ((0xbfU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [9U]) | (0x40U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [9U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mu_seg__DOT__segs
                  [9U] ^ vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs[9U] 
            = ((0x7fU & vlSelf->top__DOT__mu_seg__DOT____Vtogcov__segs
                [9U]) | (0x80U & vlSelf->top__DOT__mu_seg__DOT__segs
                         [9U]));
    }
    vlSelf->seg0 = (0xffU & (~ ((9U >= (0xfU & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))))
                                 ? vlSelf->top__DOT__mu_seg__DOT__segs
                                [(0xfU & VL_MODDIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))]
                                 : 0U)));
    vlSelf->seg1 = (0xffU & (~ ((9U >= (0xfU & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU))))
                                 ? vlSelf->top__DOT__mu_seg__DOT__segs
                                [(0xfU & VL_DIV_III(32, (IData)(vlSelf->inc_counter_out), (IData)(0xaU)))]
                                 : 0U)));
    vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid = (
                                                   (0x90U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                                   & (0x310U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    vlSelf->ledr = (((IData)(vlSelf->top__DOT__led1__DOT__led) 
                     << 8U) | (IData)(vlSelf->sw));
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = (
                                                   (0x23U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                                   & (0x203U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
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
    if (((IData)(vlSelf->VGA_HSYNC) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_HSYNC))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__VGA_HSYNC = vlSelf->VGA_HSYNC;
    }
    if (((IData)(vlSelf->VGA_VSYNC) ^ (IData)(vlSelf->top__DOT____Vtogcov__VGA_VSYNC))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__VGA_VSYNC = vlSelf->VGA_VSYNC;
    }
    if (((IData)(vlSelf->top__DOT__my_keyboard__DOT__sampling) 
         ^ (IData)(vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__sampling))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT__my_keyboard__DOT____Vtogcov__sampling 
            = vlSelf->top__DOT__my_keyboard__DOT__sampling;
    }
    if ((1U & ((IData)(vlSelf->y) ^ (IData)(vlSelf->top__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT____Vtogcov__y = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__y)) 
                                          | (1U & (IData)(vlSelf->y)));
    }
    if ((2U & ((IData)(vlSelf->y) ^ (IData)(vlSelf->top__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT____Vtogcov__y = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__y)) 
                                          | (2U & (IData)(vlSelf->y)));
    }
    if (((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out) 
         ^ (IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__lut_out 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__lut_out;
    }
    if (((IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__state_machine__DOT__outMux__DOT__i0__DOT__hit;
    }
    if (((IData)(vlSelf->state_machine_out) ^ (IData)(vlSelf->top__DOT____Vtogcov__state_machine_out))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->top__DOT____Vtogcov__state_machine_out 
            = vlSelf->state_machine_out;
    }
    if ((1U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (1U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if ((2U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (2U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if ((4U & ((IData)(vlSelf->ec_y) ^ (IData)(vlSelf->top__DOT____Vtogcov__ec_y)))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT____Vtogcov__ec_y = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__ec_y)) 
                                             | (4U 
                                                & (IData)(vlSelf->ec_y)));
    }
    if (((IData)(vlSelf->alu_carry) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_carry))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT____Vtogcov__alu_carry = vlSelf->alu_carry;
    }
    if (((IData)(vlSelf->alu_overflow) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_overflow))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->top__DOT____Vtogcov__alu_overflow = vlSelf->alu_overflow;
    }
    if (((IData)(vlSelf->alu_zero) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_zero))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->top__DOT____Vtogcov__alu_zero = vlSelf->alu_zero;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((0xeU & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (1U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((0xdU & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (2U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((0xbU & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (4U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__alu__DOT__tmp) 
               ^ (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->top__DOT__alu__DOT____Vtogcov__tmp 
            = ((7U & (IData)(vlSelf->top__DOT__alu__DOT____Vtogcov__tmp)) 
               | (8U & (IData)(vlSelf->top__DOT__alu__DOT__tmp)));
    }
    if ((1U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xeU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (1U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((2U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xdU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (2U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((4U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((0xbU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (4U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((8U & ((IData)(vlSelf->alu_res) ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_res)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->top__DOT____Vtogcov__alu_res = ((7U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__alu_res)) 
                                                | (8U 
                                                   & (IData)(vlSelf->alu_res)));
    }
    if ((1U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (1U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((2U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (2U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((4U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (4U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((8U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (8U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x10U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x20U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x40U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((0x80U & ((IData)(vlSelf->y_dec) ^ (IData)(vlSelf->top__DOT____Vtogcov__y_dec)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->top__DOT____Vtogcov__y_dec = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__y_dec)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->y_dec)));
    }
    if ((1U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((2U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((4U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((8U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x10U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x20U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x40U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((0x80U & ((IData)(vlSelf->seg0) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg0)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->top__DOT____Vtogcov__seg0 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg0)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg0)));
    }
    if ((1U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (1U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((2U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (2U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((4U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (4U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((8U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (8U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x10U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x20U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x40U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->seg1)));
    }
    if ((0x80U & ((IData)(vlSelf->seg1) ^ (IData)(vlSelf->top__DOT____Vtogcov__seg1)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->top__DOT____Vtogcov__seg1 = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__seg1)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->seg1)));
    }
    if (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid) 
         ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__h_valid 
            = vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid;
    }
    vlSelf->top__DOT__h_addr = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U);
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
    if (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid) 
         ^ (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT____Vtogcov__v_valid))) {
        ++(vlSymsp->__Vcoverage[408]);
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
    if ((1U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffffeU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (1U 
                                                     & vlSelf->sft_out_q));
    }
    if ((2U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffffdU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (2U 
                                                     & vlSelf->sft_out_q));
    }
    if ((4U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffffbU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (4U 
                                                     & vlSelf->sft_out_q));
    }
    if ((8U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffff7U 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (8U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x10U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffffefU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x10U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x20U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffffdfU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x20U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x40U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffffbfU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x40U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x80U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffff7fU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x80U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x100U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffeffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x100U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x200U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffdffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x200U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x400U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffffbffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x400U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x800U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffff7ffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x800U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x1000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffefffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x1000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x2000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffdfffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x2000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x4000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffffbfffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x4000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x8000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffff7fffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x8000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x10000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffeffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x10000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x20000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffdffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x20000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x40000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfffbffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x40000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x80000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfff7ffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x80000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x100000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffefffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x100000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x200000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffdfffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x200000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x400000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xffbfffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x400000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x800000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xff7fffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x800000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x1000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfeffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x1000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x2000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfdffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x2000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x4000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xfbffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x4000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x8000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xf7ffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x8000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x10000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xefffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x10000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x20000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xdfffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x20000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((0x40000000U & (vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0xbfffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x40000000U 
                                                     & vlSelf->sft_out_q));
    }
    if (((vlSelf->sft_out_q ^ vlSelf->top__DOT____Vtogcov__sft_out_q) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT____Vtogcov__sft_out_q = ((0x7fffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__sft_out_q) 
                                                  | (0x80000000U 
                                                     & vlSelf->sft_out_q));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0xeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0xdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0xbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[788]);
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
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if (((vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U] 
          ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                   ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                    ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                     ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                      ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                       ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
                        ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if (((vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U] 
          ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (1U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (2U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (4U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
               ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (8U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x10U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x20U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x40U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U] 
                  ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT____Vtogcov__lut[2U]) 
               | (0x80U & vlSelf->top__DOT__state_machine__DOT____Vcellinp__stateMux__lut[2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [0U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [1U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [2U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[2U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [2U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [3U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[3U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [3U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [4U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[4U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [4U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [5U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[5U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [5U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [6U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[6U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [6U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [7U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[7U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [7U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xfeU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (1U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xfdU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (2U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xfbU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (4U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((8U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
               [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xf7U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (8U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x10U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xefU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x10U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x20U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xdfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x20U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x40U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0xbfU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x40U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((0x80U & (vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                  [8U] ^ vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list[8U] 
            = ((0x7fU & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__pair_list
                [8U]) | (0x80U & vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__pair_list
                         [8U]));
    }
    if ((1U & ((0x3ffU & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U))) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__font_h)))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x3eU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (1U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U))));
    }
    if ((1U & ((0x1ffU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U)) 
                          >> 1U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                     >> 1U)))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x3dU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (2U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U))));
    }
    if ((1U & ((0xffU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U)) 
                         >> 2U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 2U)))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x3bU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (4U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U))));
    }
    if ((1U & ((0x7fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U)) 
                         >> 3U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 3U)))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x37U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (8U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U))));
    }
    if ((1U & ((0x3fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U)) 
                         >> 4U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 4U)))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x2fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (0x10U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U))));
    }
    if ((1U & ((0x1fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U)) 
                         >> 5U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_h) 
                                    >> 5U)))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->top__DOT____Vtogcov__font_h = ((0x1fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_h)) 
                                               | (0x20U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3feU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3fdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3fbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__h_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3f7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3efU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3dfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x3bfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__h_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x37fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__h_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->top__DOT____Vtogcov__h_addr = ((0x2ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__h_addr)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->top__DOT__h_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__h_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__h_addr)))) {
        ++(vlSymsp->__Vcoverage[270]);
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
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1feU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (1U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1fdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (2U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1fbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (4U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1f7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (8U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1efU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1dfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x1bfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0x17fU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr) 
                   ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr 
            = ((0xffU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__v_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT____Vcellinp__my_vmem__v_addr)));
    }
    if ((1U & ((0x3ffU & VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU))) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__font_v)))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->top__DOT____Vtogcov__font_v = ((0x3eU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (1U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU))));
    }
    if ((1U & ((0x1ffU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU)) 
                          >> 1U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                     >> 1U)))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->top__DOT____Vtogcov__font_v = ((0x3dU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (2U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU))));
    }
    if ((1U & ((0xffU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU)) 
                         >> 2U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                    >> 2U)))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->top__DOT____Vtogcov__font_v = ((0x3bU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (4U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU))));
    }
    if ((1U & ((0x7fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU)) 
                         >> 3U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                    >> 3U)))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->top__DOT____Vtogcov__font_v = ((0x37U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (8U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU))));
    }
    if ((1U & ((0x3fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU)) 
                         >> 4U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                    >> 4U)))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->top__DOT____Vtogcov__font_v = ((0x2fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (0x10U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU))));
    }
    if ((1U & ((0x1fU & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU)) 
                         >> 5U)) ^ ((IData)(vlSelf->top__DOT____Vtogcov__font_v) 
                                    >> 5U)))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->top__DOT____Vtogcov__font_v = ((0x1fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__font_v)) 
                                               | (0x20U 
                                                  & VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3feU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3fdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3fbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__v_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3f7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3efU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3dfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x3bfU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__v_addr) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x37fU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__v_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x2ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__v_addr) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__v_addr)))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->top__DOT____Vtogcov__v_addr = ((0x1ffU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__v_addr)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->top__DOT__v_addr)));
    }
    top__DOT__my_vmem__DOT____VdfgTmp_h4b89b944__0 
        = ((0xfc0U & (VL_DIV_III(10, (IData)(vlSelf->top__DOT__h_addr), (IData)(0x46U)) 
                      << 6U)) | (0x3fU & VL_DIV_III(10, (IData)(vlSelf->top__DOT__v_addr), (IData)(0x1eU))));
    if (((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out 
            = ((7U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__state_machine__DOT__stateMux__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xeU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (1U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xdU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (2U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((0xbU & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (4U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__state_machine__DOT__state_din) 
               ^ (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din 
            = ((7U & (IData)(vlSelf->top__DOT__state_machine__DOT____Vtogcov__state_din)) 
               | (8U & (IData)(vlSelf->top__DOT__state_machine__DOT__state_din)));
    }
    vlSelf->top__DOT__my_vmem__DOT__word = ((0x833U 
                                             >= (IData)(top__DOT__my_vmem__DOT____VdfgTmp_h4b89b944__0))
                                             ? vlSelf->top__DOT__my_vmem__DOT__vga_mem
                                            [top__DOT__my_vmem__DOT____VdfgTmp_h4b89b944__0]
                                             : 0U);
    if ((1U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xfeU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (1U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xfdU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (2U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xfbU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (4U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
               ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xf7U & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (8U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xefU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x10U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xdfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x20U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0xbfU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x40U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__my_vmem__DOT__word) 
                  ^ (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word 
            = ((0x7fU & (IData)(vlSelf->top__DOT__my_vmem__DOT____Vtogcov__word)) 
               | (0x80U & (IData)(vlSelf->top__DOT__my_vmem__DOT__word)));
    }
}
