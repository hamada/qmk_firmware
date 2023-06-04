// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _LOWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* [0] = LAYOUT_ortho_1x4( */
        /* KC_P1,   KC_P2,   KC_P3,   KC_P4 */
    /* ) */
    /* [0] = LAYOUT_ortho_2x4( */
        /* KC_P1,   KC_P2,   KC_P3,   KC_P4, */
        /* KC_P5,   KC_P6,   KC_P7,   KC_P8 */
    /* ) */
    [_BASE] = LAYOUT_ortho_5x8(
        KC_P7,      KC_P8,   KC_P9,   KC_P0,   KC_MINS, KC_EQL,   KC_BSPC, KC_NO,
        KC_Y,       KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,
        KC_H,       KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,  KC_NO,
        KC_N,       KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  KC_NO,   KC_NO,
        MO(_LOWER), KC_SPC,  KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN,  KC_UP,   KC_RIGHT
    ),
    [_LOWER] = LAYOUT_ortho_5x8(
        KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_TRNS,    KC_TRNS,   LSA(KC_I), KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
        LSA(KC_H),  LSA(KC_J), LSA(KC_K), LSA(KC_L), KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
        MO(_LOWER), KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS
    )
};
