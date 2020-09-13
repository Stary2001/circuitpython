#include "shared-bindings/board/__init__.h"


STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_PA02) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_PA04) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_PA05) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A6), MP_ROM_PTR(&pin_PA06) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A7), MP_ROM_PTR(&pin_PA07) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A8), MP_ROM_PTR(&pin_PA08) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A9), MP_ROM_PTR(&pin_PA09) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A10), MP_ROM_PTR(&pin_PA10) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_B10), MP_ROM_PTR(&pin_PB10) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_B11), MP_ROM_PTR(&pin_PB11) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_B12), MP_ROM_PTR(&pin_PB12) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_B13), MP_ROM_PTR(&pin_PB13) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_A16), MP_ROM_PTR(&pin_PA16) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A17), MP_ROM_PTR(&pin_PA17) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A18), MP_ROM_PTR(&pin_PA18) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A19), MP_ROM_PTR(&pin_PA19) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_B16), MP_ROM_PTR(&pin_PB16) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_B17), MP_ROM_PTR(&pin_PB17) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_A20), MP_ROM_PTR(&pin_PA20) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A22), MP_ROM_PTR(&pin_PA22) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_B22), MP_ROM_PTR(&pin_PB22) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_B23), MP_ROM_PTR(&pin_PB23) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_A27), MP_ROM_PTR(&pin_PA27) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_B30), MP_ROM_PTR(&pin_PB30) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_B31), MP_ROM_PTR(&pin_PB31) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_B0), MP_ROM_PTR(&pin_PB00) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_B1), MP_ROM_PTR(&pin_PB01) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_B2), MP_ROM_PTR(&pin_PB02) },


     { MP_OBJ_NEW_QSTR(MP_QSTR_B8), MP_ROM_PTR(&pin_PB08) },
    // todo: fix all these

    { MP_OBJ_NEW_QSTR(MP_QSTR_SDA),MP_ROM_PTR(&pin_PB02) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SCL),MP_ROM_PTR(&pin_PB03) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_NEOPIXEL),MP_ROM_PTR(&pin_PB22) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SCK),MP_ROM_PTR(&pin_PA13) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MOSI),MP_ROM_PTR(&pin_PA12) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MISO),MP_ROM_PTR(&pin_PA14) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_LED_RX),MP_ROM_PTR(&pin_PB06) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LED_TX),MP_ROM_PTR(&pin_PA27) },
    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);
