#include <stdint.h>
#include "platform.h"

#ifdef USE_TARGET_CONFIG

#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/pinio.h"
#include "drivers/sensor.h"

// Registros Obrigatórios do INAV Moderno
BUSDEV_REGISTER_SPI_TAG(busdev_icm42688_1, DEVHW_ICM42688P, GYRO1_SPI_BUS, GYRO1_CS_PIN, NONE, 0, DEVFLAGS_NONE, IMU_ICM42688_ALIGN);
BUSDEV_REGISTER_SPI_TAG(busdev_icm42688_2, DEVHW_ICM42688P, GYRO2_SPI_BUS, GYRO2_CS_PIN, NONE, 1, DEVFLAGS_NONE, IMU_ICM42688_ALIGN);

// Backup para gyro 6000 (caso a placa tenha variações)
BUSDEV_REGISTER_SPI_TAG(busdev_mpu6000_1, DEVHW_MPU6000, GYRO1_SPI_BUS, GYRO1_CS_PIN, NONE, 0, DEVFLAGS_NONE, CW270_DEG);
BUSDEV_REGISTER_SPI_TAG(busdev_mpu6000_2, DEVHW_MPU6000, GYRO2_SPI_BUS, GYRO2_CS_PIN, NONE, 1, DEVFLAGS_NONE, CW270_DEG);

timerHardware_t timerHardware[] = {
    DEF_TIM(TIM5, CH1, PA0, TIM_USE_OUTPUT_AUTO, 0, 0),
    DEF_TIM(TIM5, CH2, PA1, TIM_USE_OUTPUT_AUTO, 0, 0),
    DEF_TIM(TIM5, CH3, PA2, TIM_USE_OUTPUT_AUTO, 0, 0),
    DEF_TIM(TIM5, CH4, PA3, TIM_USE_OUTPUT_AUTO, 0, 0),
    
    DEF_TIM(TIM3, CH1, PB4, TIM_USE_OUTPUT_AUTO, 0, 0),
    DEF_TIM(TIM3, CH2, PB5, TIM_USE_OUTPUT_AUTO, 0, 0),
    DEF_TIM(TIM3, CH3, PB0, TIM_USE_OUTPUT_AUTO, 0, 0),
    DEF_TIM(TIM3, CH4, PB1, TIM_USE_OUTPUT_AUTO, 0, 0),

    DEF_TIM(TIM4, CH3, PB8, TIM_USE_LED,   0, 0), // Leds
    DEF_TIM(TIM1, CH1, PA10, TIM_USE_BEEPER, 0, 0), // Buzzer
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);

#endif // USE_TARGET_CONFIG
