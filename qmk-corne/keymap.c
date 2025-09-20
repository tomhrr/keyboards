/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const key_override_t no_shift_comm_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_COMM);
const key_override_t no_shift_dot_override  = ko_make_basic(MOD_MASK_SHIFT, KC_DOT,  KC_DOT);
const key_override_t no_shift_grv_override  = ko_make_basic(MOD_MASK_SHIFT, KC_GRV,  KC_GRV);
const key_override_t no_shift_mins_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, KC_MINS);
const key_override_t no_shift_quot_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_QUOT);
const key_override_t no_shift_eql_override  = ko_make_basic(MOD_MASK_SHIFT, KC_EQL,  KC_EQL);
const key_override_t no_shift_bsls_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSLS, KC_BSLS);

const key_override_t *key_overrides[] = {
    &no_shift_comm_override,
    &no_shift_dot_override,
    &no_shift_grv_override,
    &no_shift_mins_override,
    &no_shift_quot_override,
    &no_shift_eql_override,
    &no_shift_bsls_override
};

#define MTN(K) MT(KC_NO, K)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,   MTN(KC_Q),    MTN(KC_W),    MTN(KC_E),    MTN(KC_R),    MTN(KC_T),                         MTN(KC_Y),    MTN(KC_U),    MTN(KC_I),    MTN(KC_O),    MTN(KC_P),  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    MTN(KC_A),    MT(MOD_LALT, KC_S),    MT(MOD_LCTL, KC_D),    MT(MOD_LSFT, KC_F),    MTN(KC_G),                         MTN(KC_H),    MT(MOD_RSFT, KC_J),    MT(MOD_RCTL, KC_K),    MT(MOD_RALT, KC_L),  MTN(KC_SCLN), KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    MTN(KC_Z),    MTN(KC_X),    MTN(KC_C),    MTN(KC_V),    MTN(KC_B),                         MTN(KC_N),    MTN(KC_M),  MTN(KC_COMM),  MTN(KC_DOT), MTN(KC_SLSH),  KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,  MO(2),  KC_SPC,     MO(1),  MO(3), KC_NO
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_LT,   KC_GT,  KC_ESC, KC_TAB, KC_QUOT,                      KC_DQT,  KC_BSPC,  KC_ENT, KC_LBRC, KC_RBRC, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     _______, _______, _______, KC_MINS, KC_UNDS, _______,                      _______, KC_EQL , KC_PLUS, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______, CW_TOGG,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,  KC_PIPE, KC_GRV,  KC_TILD,  KC_BSLS,  KC_NO,                       KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, KC_NO, KC_NO, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NO, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_NO,  KC_NO,  KC_NO, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_PGDN, KC_PGUP, KC_NO, KC_NO, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO, KC_NO, KC_NO, KC_NO, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,   _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};
