#pragma once

#define TARGET_BOARD_IDENTIFIER "WDIY"
#define USBD_PRODUCT_STRING     "WDIYH743"

#define LED0_PIN                PE12
#define LED1_PIN                PE13

#define BEEPER                  PA10

// *************** SPI *****************
#define USE_SPI
#define USE_SPI_DEVICE_1 // GYRO 1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_SPI_DEVICE_2 // OSD
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PC2
#define SPI2_MOSI_PIN           PC3

#define USE_SPI_DEVICE_3 // FLASH
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PB2

#define USE_SPI_DEVICE_4 // GYRO 2
#define SPI4_SCK_PIN            PE2
#define SPI4_MISO_PIN           PE5
#define SPI4_MOSI_PIN           PE6

// *************** I2C *****************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL_PIN            PB6
#define I2C1_SDA_PIN            PB7

#define USE_I2C_DEVICE_2
#define I2C2_SCL_PIN            PB10
#define I2C2_SDA_PIN            PB11

// *************** UART *****************
#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PB15

#define USE_UART2
#define UART2_TX_PIN            PD5
#define UART2_RX_PIN            PD6

#define USE_UART3
#define UART3_TX_PIN            PD8
#define UART3_RX_PIN            PD9

#define USE_UART4
#define UART4_TX_PIN            PD1
#define UART4_RX_PIN            PD0

#define USE_UART6
#define UART6_TX_PIN            PC6
#define UART6_RX_PIN            PC7

#define USE_UART7
#define UART7_TX_PIN            PE8
#define UART7_RX_PIN            PE7

#define USE_UART8
#define UART8_TX_PIN            PE1
#define UART8_RX_PIN            PE0

#define SERIAL_PORT_COUNT       8

// *************** ADC *****************
#define USE_ADC
#define ADC_INSTANCE            ADC1
#define ADC1_DMA_STREAM         DMA2_Stream0

#define VBAT_ADC_PIN            PC0
#define CURRENT_METER_ADC_PIN   PC1
#define RSSI_ADC_PIN            PC4

// *************** GYRO / ACCEL *****************
#define USE_IMU_ICM42688P
#define USE_IMU_MPU6000
#define USE_IMU_BMI270

#define IMU_CS_PIN              PA4
#define IMU_SPI_INSTANCE        SPI1
#define IMU_EXTI_PIN            PE9

// *************** BARO / COMPASS *****************
#define USE_BARO
#define USE_BARO_BMP280
#define BARO_I2C_INSTANCE       I2C2

#define USE_MAG
#define MAG_I2C_INSTANCE        I2C1

// *************** OSD *****************
#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    SPI2
#define MAX7456_SPI_CS_PIN      PB12
#define MAX7456_SPI_CLK         (SPI_CLOCK_STANDARD)

// *************** FLASH *****************
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define FLASH_SPI_INSTANCE      SPI3
#define FLASH_CS_PIN            PA15

#define DEFAULT_FEATURES        (FEATURE_OSD)
#define TARGET_HSE_HZ           8000000

#define WS2811_PIN              PB8
#define TARGET_MOTOR_COUNT      8
#define USE_SERIAL_4WAY_BLHELI_INTERFACE
