// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vour.h"
#include "Vour__Syms.h"

//============================================================
// Constructors

Vour::Vour(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vour__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vour::Vour(const char* _vcname__)
    : Vour(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vour::~Vour() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vour___024root___eval_initial(Vour___024root* vlSelf);
void Vour___024root___eval_settle(Vour___024root* vlSelf);
void Vour___024root___eval(Vour___024root* vlSelf);
#ifdef VL_DEBUG
void Vour___024root___eval_debug_assertions(Vour___024root* vlSelf);
#endif  // VL_DEBUG
void Vour___024root___final(Vour___024root* vlSelf);

static void _eval_initial_loop(Vour__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vour___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vour___024root___eval_settle(&(vlSymsp->TOP));
        Vour___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vour::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vour::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vour___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vour___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vour::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vour::final() {
    Vour___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vour::hierName() const { return vlSymsp->name(); }
const char* Vour::modelName() const { return "Vour"; }
unsigned Vour::threads() const { return 1; }
