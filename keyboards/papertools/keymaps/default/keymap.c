// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    *  ┌───┬───┬───┬── ──┐
    *  │ A │ B │ C │ G   │
    *  ├───┼───┼───│  e0 │
    *  │ D │ E │ F │     │
    *  └───┴───┴───┴─────┘
    */
    [0] = LAYOUT(
        KC_A, KC_B, KC_C,
        KC_G,
        KC_D, KC_E, KC_F
    )
};

// e0
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_AUDIO_VOL_UP);
        } else {
            tap_code(KC_AUDIO_VOL_DOWN);
        }
        return true;
    }
    return false;
}
