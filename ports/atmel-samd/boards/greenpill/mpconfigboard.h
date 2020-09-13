#define MICROPY_HW_BOARD_NAME "Greenpill"
#define MICROPY_HW_MCU_NAME "samd51j20"

#define CIRCUITPY_MCU_FAMILY samd51

// On-board flash TODO
#define SPI_FLASH_MOSI_PIN &pin_PA12
#define SPI_FLASH_MISO_PIN &pin_PA15
#define SPI_FLASH_SCK_PIN  &pin_PA13
#define SPI_FLASH_CS_PIN   &pin_PA14

// These are pins not to reset.
// SPI Data pins
#define MICROPY_PORT_A (PORT_PA12 | PORT_PA13 | PORT_PA14 | PORT_PA15)
#define MICROPY_PORT_B (0)
#define MICROPY_PORT_C (0)
#define MICROPY_PORT_D (0)

#define BOARD_HAS_CRYSTAL 1

#define MICROPY_HW_LED_STATUS   (&pin_PB08)

#define DEFAULT_I2C_BUS_SCL (&pin_PB03)
#define DEFAULT_I2C_BUS_SDA (&pin_PB02)

/*#define DEFAULT_SPI_BUS_SCK (&pin_PA13)
#define DEFAULT_SPI_BUS_MOSI (&pin_PA12)
#define DEFAULT_SPI_BUS_MISO (&pin_PA14)*/

#define DEFAULT_UART_BUS_RX (&pin_PA23)
#define DEFAULT_UART_BUS_TX (&pin_PA22)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
