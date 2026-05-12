// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_verilator.h for the primary calling header

#ifndef VERILATED_VTOP_VERILATOR_UART_REG_PKG_H_
#define VERILATED_VTOP_VERILATOR_UART_REG_PKG_H_  // guard

#include "verilated.h"


class Vtop_verilator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_verilator_uart_reg_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop_verilator__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 13> __PVT__UART_PERMIT = {{
        0x03U, 0x03U, 0x03U, 0x01U, 0x0fU, 0x01U, 0x01U, 0x01U,
        0x01U, 0x07U, 0x01U, 0x03U, 0x0fU
    }};

    // CONSTRUCTORS
    Vtop_verilator_uart_reg_pkg(Vtop_verilator__Syms* symsp, const char* v__name);
    ~Vtop_verilator_uart_reg_pkg();
    VL_UNCOPYABLE(Vtop_verilator_uart_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
