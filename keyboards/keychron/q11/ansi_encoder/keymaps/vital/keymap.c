/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers{
    // COLEMAK-DH with mode-tap
    CMK_BASE,
    // QWERTY with mod-tap
    QWR_BASE,
    // No mod-tap
    GAME_BASE,
    FN1,
    FN2,
    FN3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [CMK_BASE] = LAYOUT_91_ansi(
        KC_SLEP,KC_ESC, KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5, KC_F6,   KC_F7,   KC_F8,       KC_F9,       KC_F10,      KC_F11,         KC_F12,  KC_INS,  KC_DEL,  KC_MUTE,
        MC_1,   KC_GRV, KC_1,        KC_2,        KC_3,        KC_4,        KC_5,  KC_6,    KC_7,    KC_8,        KC_9,        KC_0,        KC_MINS,        KC_EQL,  KC_BSPC,          KC_PGUP,
        MC_2,   KC_TAB, KC_Q,        KC_W,        KC_F,        KC_P,        KC_B,  KC_RBRC, KC_J,    KC_L,        KC_U,        KC_Y,        KC_SCLN,        KC_LBRC, KC_BSLS,          KC_PGDN,
        MC_3,   KC_CAPS,LCTL_T(KC_A),LSFT_T(KC_R),LALT_T(KC_S),LGUI_T(KC_T),KC_G,  KC_QUOT, KC_M,    RGUI_T(KC_N),RALT_T(KC_E),RSFT_T(KC_I),RCTL_T(KC_O),            KC_ENT,           KC_HOME,
        MC_4,   KC_LSFT,             KC_X,        KC_C,        KC_D,        KC_V,  KC_Z,    KC_SLSH, KC_K,        KC_H,        KC_COMM,     KC_DOT,                  KC_RSFT, KC_UP,
        MC_5,   KC_LCTL,KC_LWIN,     KC_LALT,     MO(FN1),                  KC_SPC,                  LT(FN1,KC_SPC),           MO(FN2),     KC_RALT,        KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

    [QWR_BASE] = LAYOUT_91_ansi(
        KC_SLEP,KC_ESC, KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5, KC_F6,   KC_F7,   KC_F8,       KC_F9,       KC_F10,      KC_F11,         KC_F12,  KC_INS,  KC_DEL,  KC_MUTE,
        MC_1,   KC_GRV, KC_1,        KC_2,        KC_3,        KC_4,        KC_5,  KC_6,    KC_7,    KC_8,        KC_9,        KC_0,        KC_MINS,        KC_EQL,  KC_BSPC,          KC_PGUP,
        MC_2,   KC_TAB, KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,  KC_RBRC, KC_Y,    KC_U,        KC_I,        KC_O,        KC_P,           KC_LBRC, KC_BSLS,          KC_PGDN,
        MC_3,   KC_CAPS,LCTL_T(KC_A),LSFT_T(KC_S),LALT_T(KC_D),LGUI_T(KC_F),KC_G,  KC_QUOT, KC_H,    RGUI_T(KC_J),RALT_T(KC_K),RSFT_T(KC_L),RCTL_T(KC_SCLN),KC_ENT,                    KC_HOME,
        MC_4,   KC_LSFT,             KC_Z,        KC_X,        KC_C,        KC_V,  KC_B,    KC_SLSH, KC_N,        KC_M,        KC_COMM,     KC_DOT,         KC_RSFT,          KC_UP,
        MC_5,   KC_LCTL,KC_LWIN,     KC_LALT,     MO(FN1),                  KC_SPC,                  LT(FN1,KC_SPC),           MO(FN2),     KC_RALT,        KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

    [GAME_BASE] = LAYOUT_91_ansi(
        KC_SLEP,KC_ESC, KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5, KC_F6,   KC_F7,   KC_F8,       KC_F9,       KC_F10,      KC_F11,         KC_F12,  KC_INS,  KC_DEL,  KC_MUTE,
        MC_1,   KC_GRV, KC_1,        KC_2,        KC_3,        KC_4,        KC_5,  KC_6,    KC_7,    KC_8,        KC_9,        KC_0,        KC_MINS,        KC_EQL,  KC_BSPC,          KC_PGUP,
        MC_2,   KC_TAB, KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,  KC_RBRC, KC_Y,    KC_U,        KC_I,        KC_O,        KC_P,           KC_LBRC, KC_BSLS,          KC_PGDN,
        MC_3,   KC_CAPS,KC_A,        KC_S,        KC_D,        KC_F,        KC_G,  KC_QUOT, KC_H,    KC_J,        KC_K,        KC_L,        KC_SCLN,        KC_ENT,                    KC_HOME,
        MC_4,   KC_LSFT,             KC_Z,        KC_X,        KC_C,        KC_V,  KC_B,    KC_SLSH, KC_N,        KC_M,        KC_COMM,     KC_DOT,         KC_RSFT,          KC_UP,
        MC_5,   KC_LCTL,KC_LWIN,     KC_LALT,     MO(FN1),                  KC_SPC,                  LT(FN1,KC_SPC),           MO(FN2),     KC_RALT,        KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

    [FN1] = LAYOUT_91_ansi(
        RGB_TOG,  DF(0),    KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,   RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  RGB_RMOD, RGB_MOD,  NK_TOGG,
        DF(1),    _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            DT_UP,
        DF(2),    KC_SCRL,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  KC_UP,    _______,  _______,  _______,    _______,  _______,            DT_DOWN,
        TG(3),    _______,  KC_ESCAPE,_______,  _______,  _______,  _______,   _______,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_ENTER, _______,              _______,            DT_PRNT,
        TG(4),    _______,            _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,
        TG(5),    _______,  _______,  _______,  _______,            _______,                       KC_BSPC,            KC_DEL,   _______,    _______,  _______,  _______,  _______),
    
    [FN2] = LAYOUT_91_ansi(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  KC_OPER,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,            _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,  _______,  _______,            _______,                       _______,            _______,  _______,    _______,  _______,  _______,  _______),

    [FN3] = LAYOUT_91_ansi(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,            _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,  _______,  _______,            _______,                       _______,            _______,  _______,    _______,  _______,  _______,  _______),

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [CMK_BASE] = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [QWR_BASE] = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [GAME_BASE]   = { ENCODER_CCW_CW(RGB_SAD, RGB_SAI), ENCODER_CCW_CW(RGB_SPD, RGB_SPI)},
    [FN1]   = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [FN2]   = { ENCODER_CCW_CW(RGB_SAD, RGB_SAI), ENCODER_CCW_CW(RGB_SPD, RGB_SPI)},
    [FN3]   = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
};
#endif // ENCODER_MAP_ENABLE

// clang-format on


void housekeeping_task_user(void) {
    housekeeping_task_keychron();
    
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron(keycode, record)) {
        return false;
    }

    return true;
}
