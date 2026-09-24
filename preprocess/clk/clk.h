#ifndef MCU_FREG_H
#define MCU_FREG_H
#define MCU_FREQ 11000000
#if MCU_FREQ < 10000000
    #error "clk_freq is too low"
#endif
#endif

void clk_init(int a);