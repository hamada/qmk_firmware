// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* [0] = LAYOUT_ortho_1x4( */
        /* KC_P1,   KC_P2,   KC_P3,   KC_P4 */
    /* ) */
    /* [0] = LAYOUT_ortho_2x4( */
        /* KC_P1,   KC_P2,   KC_P3,   KC_P4, */
        /* KC_P5,   KC_P6,   KC_P7,   KC_P8 */
    /* ) */
    [0] = LAYOUT_ortho_5x8(
        KC_P1,   KC_P2,   KC_P3,   KC_P4, KC_P5, KC_P6, KC_P7, KC_P8,
        KC_P9,   KC_P0,   KC_A,    KC_B,  KC_C,  KC_D,  KC_E,  KC_F,
        KC_G,    KC_H,    KC_I,    KC_J,  KC_K,  KC_L,  KC_M,  KC_N,
        KC_O,    KC_P,    KC_Q,    KC_R,  KC_S,  KC_T,  KC_U,  KC_W,
        KC_V,    KC_W,    KC_X,    KC_Y,  KC_Z,  KC_SPACE,  KC_BACKSPACE,  KC_ENTER
    )
};
