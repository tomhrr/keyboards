#include QMK_KEYBOARD_H

void matrix_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

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

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        MTN(KC_Q), MTN(KC_W), MTN(KC_E), MTN(KC_R), MTN(KC_T),
        MTN(KC_Y), MTN(KC_U), MTN(KC_I),    MTN(KC_O),   MTN(KC_P),

        MTN(KC_A), MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), MTN(KC_G),
        MTN(KC_H), MT(MOD_RSFT, KC_J), MT(MOD_RCTL, KC_K), MT(MOD_RALT, KC_L), MTN(KC_SCLN),

        MTN(KC_Z), MTN(KC_X), MTN(KC_C), MTN(KC_V), MTN(KC_B),
        MTN(KC_N), MTN(KC_M), MTN(KC_COMM), MTN(KC_DOT), MTN(KC_SLSH),

                          MO(2), KC_SPC, MO(1), MO(3)
        ),
	[1] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LT,   KC_GT,  KC_ESC, KC_TAB, KC_QUOT,                      KC_DQT,  KC_BSPC,  KC_ENT, KC_LBRC, KC_RBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     _______, _______, KC_MINS, KC_UNDS, _______,                      _______, KC_EQL , KC_PLUS, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, CW_TOGG,    _______, _______
                                      //`--------------------------'  `--------------------------'
        ),
    [2] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_PIPE, KC_GRV,  KC_TILD,  KC_BSLS,  KC_NO,                       KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______,    _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
    [3] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO, KC_NO, XXXXXXX, XXXXXXX, XXXXXXX,                        MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,  KC_NO,  MS_BTN1, MS_BTN2, XXXXXXX,                      XXXXXXX, KC_PGDN, KC_PGUP, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO, KC_NO, KC_NO, XXXXXXX, XXXXXXX,                      XXXXXXX, MS_WHLD, MS_WHLU, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,   _______, _______
                                      //`--------------------------'  `--------------------------'
  )



};
// clang-format on
