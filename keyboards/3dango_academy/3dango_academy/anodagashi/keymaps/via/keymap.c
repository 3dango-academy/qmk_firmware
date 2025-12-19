
#include QMK_KEYBOARD_H

enum keymap_layer {
  BASE,
  FN1,
  FN2,
  FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_P1,   KC_P2,   KC_P3,
        KC_P4,   KC_P5,   KC_P6,
        KC_P7,   KC_P8,   KC_P9,
        MO(FN1), KC_P0,  KC_PENT
    ),
    [FN1] = LAYOUT(
        KC_PSLS,   KC_PAST,   KC_PMNS,
        KC_SPACE,   KC_UP,   KC_PPLS,
        KC_LEFT,   KC_DOWN,   KC_RIGHT,
        MO(FN1), MO(FN2),  KC_BSPC
    ),
    [FN2] = LAYOUT(
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   QK_BOOT
    ),
    [FN3] = LAYOUT(
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS
    )
};
