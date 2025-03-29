// Copyright 2023 Kostas Pagratis (@kpagratis)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layers {
    _QWERTY,
    _LOWER,
    _RAISE
};

#define RAISE MO(_RAISE)
// #define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,  KC_I,    KC_O,   KC_P,    KC_BSLS,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,

        RAISE, KC_GRV, KC_LEFT, KC_RIGHT,                                           KC_UP, KC_DOWN, KC_LBRC, KC_RBRC,
                                            KC_BSPC, KC_DEL,        KC_ENT,  KC_SPC,
                                            KC_LCTL, KC_HOME,       KC_PGUP, KC_RCTL,
                                            KC_LALT, KC_END,        KC_PGDN, KC_RGUI
    ),

    [_RAISE] = LAYOUT(
        KC_F1, KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,          KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, KC_VOLU,
        KC_CAPS, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, KC_VOLD,
        _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, KC_MUTE,

        _______, _______, _______, _______,                                           _______, _______, _______, _______,
                                            _______, _______,      _______, _______,
                                            _______, _______,      _______, _______,
                                            _______, _______,      _______, _______
    ),

    /*
    [_BLANK] = LAYOUT(
        _______, _______, ______,  _______, _______, _______,      _______, _______,  _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,      _______, _______,  _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,      _______, _______,  _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,      _______, _______,  _______, _______, _______, _______,

        _______, _______, _______, _______,                                           _______, _______, _______, _______,
                                            _______, _______,      _______, _______,
                                            _______, _______,      _______, _______,
                                            _______, _______,      _______, _______
    ),
    */
};
