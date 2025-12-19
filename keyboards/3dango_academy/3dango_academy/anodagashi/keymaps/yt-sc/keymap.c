#include QMK_KEYBOARD_H

enum keymap_layer {
  BASE,
  FN,
};

enum custom_keycodes {
  PRE = SAFE_RANGE,
  NEX
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* BASE
     * ┌───┬───┬───┐
     * │Pre│ ↑ │Nex│
     * ├───┼───┼───┤
     * │ ← │SPC│ → │
     * ├───┼───┼───┤
     * │ < │ ↓ │ > │
     * ├───┼───┼───┤
     * │FN │ M │ F │
     * └───┴───┴───┘
     */

    /* FN
     * ┌───┬───┬───┐
     * │ 1 │ 2 │ 3 │
     * ├───┼───┼───┤
     * │ 4 │ 5 │ 6 │
     * ├───┼───┼───┤
     * │ 7 │ 8 │ 9 │
     * ├───┼───┼───┤
     * │FN │ 0 │ C │
     * └───┴───┴───┘
     */
    [BASE] = LAYOUT(
        PRE,  KC_UP,  NEX,
        KC_LEFT,  KC_SPACE,  KC_RIGHT,
        KC_LT,   KC_DOWN,  KC_GT,
        MO(FN), KC_M,  KC_F
    ),
    [FN] = LAYOUT(
        KC_P7,   KC_P8,   KC_P9,
        KC_P4,   KC_P5,   KC_P6,
        KC_P1,   KC_P2,   KC_P3,
        MO(FN), KC_P0,  KC_C
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case PRE:
            if (record->event.pressed) {
                // Shift + P
                register_code(KC_LSFT);
                register_code(KC_P);
            } else {
                unregister_code(KC_LSFT);
                unregister_code(KC_P);
            }
            return false;

        case NEX:
            if (record->event.pressed) {
                // Shift + N
                register_code(KC_LSFT);
                register_code(KC_N);
            } else {
                unregister_code(KC_LSFT);
                unregister_code(KC_N);
            }
            return false;
    }
    return true;
}
