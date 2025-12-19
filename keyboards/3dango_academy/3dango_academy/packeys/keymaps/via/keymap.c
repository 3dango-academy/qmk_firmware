
#include QMK_KEYBOARD_H

enum keymap_layer {
  BASE,
  FN1,
  FN2,
  FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_Q,   KC_W,   KC_E,
        KC_A,   KC_S,   KC_D,
        KC_Z,   KC_X,   KC_C,
        TG(FN1), TG(FN2),  TG(FN3)
    ),
    [FN1] = LAYOUT(
        KC_VOLU,   KC_MUTE,   KC_VOLD,
        KC_MNXT,   KC_UP,   KC_MPRV,
        KC_LEFT,   KC_DOWN,   KC_RIGHT,
        TG(FN1), TG(FN2),  TG(FN3)
    ),
    [FN2] = LAYOUT(
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        TG(FN1), TG(FN2),  TG(FN3)
    ),
    [FN3] = LAYOUT(
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   QK_BOOT,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        TG(FN1), TG(FN2),  TG(FN3)
    )
};
