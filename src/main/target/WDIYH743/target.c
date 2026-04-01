#include "platform.h"

#ifdef USE_TARGET_CONFIG

const timerHardware_t timerHardware[] = {
    // Motores 1 a 4 
    DEF_TIM(TIM5, CH1, PA0, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM5, CH2, PA1, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM5, CH3, PA2, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM5, CH4, PA3, TIM_USE_MOTOR, 0, 0),
    
    // Motores 5 a 8
    DEF_TIM(TIM3, CH1, PB4, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH2, PB5, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH3, PB0, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH4, PB1, TIM_USE_MOTOR, 0, 0),

    // LED_STRIP (Diodo de Leds WS2812)
    DEF_TIM(TIM4, CH3, PB8, TIM_USE_LED,   0, 0),
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);

#endif // USE_TARGET_CONFIG
