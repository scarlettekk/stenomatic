#include QMK_KEYBOARD_H
#include "print.h"

enum custom_keycodes {
    NUMBER_LAYER_LEFT, // Left Number Layer Key
    NUMBER_LAYER_RIGHT // Right Number Layer Key
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q, 		      KC_E, 	       KC_V, 	 	 KC_I, NUMBER_LAYER_LEFT,  // Row 1
        KC_LEFT_BRACKET,      KC_K, 	       KC_T,     	 KC_D, NUMBER_LAYER_RIGHT, // Row 2
        KC_QUOTE,   	      KC_O, 	       KC_M,     	 KC_R, KC_SEMICOLON,       // Row 3
        KC_N, 		      KC_L, 	       KC_U,     	 KC_J, KC_P,  		   // Row 4
        KC_W, 		      KC_F,    	       KC_C,             KC_S       		   // Row 5
    ),
    [1] = LAYOUT(
        KC_Q,                 KC_LEFT_BRACKET, KC_QUOTE,         KC_N, NUMBER_LAYER_LEFT,  // Row 1
        KC_E,                 KC_K,            KC_O,             KC_L, NUMBER_LAYER_RIGHT, // Row 2
        KC_V,                 KC_T,            KC_M,             KC_U, KC_F,               // Row 3
        KC_I,                 KC_D,            KC_R,             KC_J, KC_C,               // Row 4
        KC_Z, KC_SEMICOLON,    KC_P,             KC_S                      // Row 5
    ),
    [2] = LAYOUT(
        KC_Q,                 KC_LEFT_BRACKET, KC_QUOTE,         KC_N, NUMBER_LAYER_LEFT,  // Row 1
        KC_E,                 KC_K,            KC_O,             KC_L, NUMBER_LAYER_RIGHT, // Row 2
        KC_V,                 KC_T,            KC_M,             KC_U, KC_F,               // Row 3
        KC_I,                 KC_D,            KC_R,             KC_J, KC_C,               // Row 4
        KC_Z, KC_SEMICOLON,    KC_P,             KC_S                      // Row 5
    )
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == NUMBER_LAYER_LEFT) {
        if (record->event.pressed) {
            layer_on(1);
        } else {
            layer_off(1);
        }
        return false;
    }
        if (keycode == NUMBER_LAYER_RIGHT) {
        if (record->event.pressed) {
            layer_on(2);
        } else {
            layer_off(2);
        }
        return false;
    }
    return true;
}
