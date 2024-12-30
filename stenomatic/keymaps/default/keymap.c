#include QMK_KEYBOARD_H
#include "print.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        STN_SL, STN_PL, STN_O, 	  STN_PR, STN_NUM, // Row 1
        STN_DR, STN_BR, STN_STR,  STN_WL, STN_NUM, // Row 2
        STN_ZR, STN_LR, STN_U,    STN_HL, STN_SR,   // Row 3
        STN_E, 	STN_GR, STN_FR,   STN_RR, STN_TR,  // Row 4
        STN_TL, STN_RL, STN_A,    STN_KL           // Row 5
    )
};

void keyboard_pre_init_user(void) {
    gpio_set_pin_output(GP16);
    gpio_set_pin_output(GP17);
    gpio_set_pin_output(GP25);

}

void keyboard_post_init_user(void) {
    gpio_write_pin_high(GP16);
    gpio_write_pin_high(GP17);
    gpio_write_pin_high(GP25);

}
