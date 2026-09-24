#include<stdio.h>
#include"clk.h"
#include"mcu.h"
#include"mcu.h"

int main(){
    clk_init(MCU_FREQ);

    #if MCU_BOARD==STM32FA
        stm32fa_init();
    #elif MCU_BOARD==STM32FB
        stm32fb_init();
    #elif MCU_BOARD==STM32FC
        stm32fc_init();
    #else 
        #error "Selected board is invalid"
    #endif
}