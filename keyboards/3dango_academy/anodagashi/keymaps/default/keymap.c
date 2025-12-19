
#include QMK_KEYBOARD_H

enum keymap_layer {
  BASE,
  FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* BASE
     * ┌───┬───┬───┐
     * │ 1 │ 2 │ 3 │
     * ├───┼───┼───┤
     * │ 4 │ 5 │ 6 │
     * ├───┼───┼───┤
     * │ 7 │ 8 │ 9 │
     * ├───┼───┼───┤
     * │FN │ 0 │Ent│
     * └───┴───┴───┘
     */

    /* FN
     * ┌───┬───┬───┐
     * │ / │ * │ - │
     * ├───┼───┼───┤
     * │SPC│ ↑ │ + │
     * ├───┼───┼───┤
     * │ ← │ ↓ │ → │
     * ├───┼───┼───┤
     * │FN │ . │BSP│
     * └───┴───┴───┘
     */
    [BASE] = LAYOUT(
        KC_P1,   KC_P2,   KC_P3,
        KC_P4,   KC_P5,   KC_P6,
        KC_P7,   KC_P8,   KC_P9,
        MO(FN), KC_P0,  KC_PENT
    ),
    [FN] = LAYOUT(
        KC_PSLS,   KC_PAST,   KC_PMNS,
        KC_SPACE,   KC_UP,   KC_PPLS,
        KC_LEFT,   KC_DOWN,   KC_RIGHT,
        MO(FN), KC_PDOT,  KC_BSPC
    )
};
