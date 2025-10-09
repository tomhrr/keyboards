#include QMK_KEYBOARD_H

void matrix_init_user(void)
{
    debug_enable = true;
    debug_matrix = true;
}

const key_override_t no_shift_comm_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_COMM);
const key_override_t no_shift_dot_override  = ko_make_basic(MOD_MASK_SHIFT, KC_DOT,  KC_DOT);
const key_override_t no_shift_grv_override  = ko_make_basic(MOD_MASK_SHIFT, KC_GRV,  KC_GRV);
const key_override_t no_shift_mins_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, KC_MINS);
const key_override_t no_shift_quot_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_QUOT);
const key_override_t no_shift_eql_override  = ko_make_basic(MOD_MASK_SHIFT, KC_EQL,  KC_EQL);
const key_override_t no_shift_bsls_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSLS, KC_BSLS);

const key_override_t no_shift_lbrc_override = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, KC_LBRC);
const key_override_t no_shift_rbrc_override = ko_make_basic(MOD_MASK_SHIFT, KC_RBRC, KC_RBRC);
const key_override_t no_shift_scln_override = ko_make_basic(MOD_MASK_SHIFT, KC_SCLN, KC_SCLN);
const key_override_t no_shift_slsh_override = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_SLSH);

const key_override_t no_shift_1_override = ko_make_basic(MOD_MASK_SHIFT, KC_1, KC_1);
const key_override_t no_shift_2_override = ko_make_basic(MOD_MASK_SHIFT, KC_2, KC_2);
const key_override_t no_shift_3_override = ko_make_basic(MOD_MASK_SHIFT, KC_3, KC_3);
const key_override_t no_shift_4_override = ko_make_basic(MOD_MASK_SHIFT, KC_4, KC_4);
const key_override_t no_shift_5_override = ko_make_basic(MOD_MASK_SHIFT, KC_5, KC_5);
const key_override_t no_shift_6_override = ko_make_basic(MOD_MASK_SHIFT, KC_6, KC_6);
const key_override_t no_shift_7_override = ko_make_basic(MOD_MASK_SHIFT, KC_7, KC_7);
const key_override_t no_shift_8_override = ko_make_basic(MOD_MASK_SHIFT, KC_8, KC_8);
const key_override_t no_shift_9_override = ko_make_basic(MOD_MASK_SHIFT, KC_9, KC_9);
const key_override_t no_shift_0_override = ko_make_basic(MOD_MASK_SHIFT, KC_0, KC_0);

const key_override_t no_shift_f21_override = ko_make_basic(MOD_MASK_SHIFT, KC_F21, KC_F21);
const key_override_t no_shift_f22_override = ko_make_basic(MOD_MASK_SHIFT, KC_F22, KC_F22);
const key_override_t no_shift_f23_override = ko_make_basic(MOD_MASK_SHIFT, KC_F23, KC_F23);
const key_override_t no_shift_f24_override = ko_make_basic(MOD_MASK_SHIFT, KC_F24, KC_F24);

const key_override_t *key_overrides[] = {
    &no_shift_comm_override,
    &no_shift_dot_override,
    &no_shift_grv_override,
    &no_shift_mins_override,
    &no_shift_quot_override,
    &no_shift_eql_override,
    &no_shift_bsls_override,

    &no_shift_lbrc_override,
    &no_shift_rbrc_override,
    &no_shift_scln_override,
    &no_shift_slsh_override,

    &no_shift_1_override,
    &no_shift_2_override,
    &no_shift_3_override,
    &no_shift_4_override,
    &no_shift_5_override,
    &no_shift_6_override,
    &no_shift_7_override,
    &no_shift_8_override,
    &no_shift_9_override,
    &no_shift_0_override,

    &no_shift_f21_override,
    &no_shift_f22_override,
    &no_shift_f23_override,
    &no_shift_f24_override
};

#define MTN(K) MT(KC_NO, K)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        MTN(KC_Q), MTN(KC_W), MTN(KC_E), MTN(KC_R), MTN(KC_T),
        MTN(KC_Y), MTN(KC_U), MTN(KC_I), MTN(KC_O), MTN(KC_P),

        MTN(KC_A), MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), MTN(KC_G),
        MTN(KC_H), MT(MOD_RSFT, KC_J), MT(MOD_RCTL, KC_K), MT(MOD_RALT, KC_L), MTN(KC_F23),

        MTN(KC_Z), MTN(KC_X), MTN(KC_C),   MTN(KC_V),   MTN(KC_B),
        MTN(KC_N), MTN(KC_M), MTN(KC_F21), MTN(KC_F22), MTN(KC_F24),

        MO(2), KC_SPC, MO(1), MO(3)
    ),

    [1] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_6, KC_7, KC_8, KC_9, KC_0,

        KC_LT,  KC_GT,   KC_ESC, KC_TAB,  KC_QUOT,
        KC_DQT, KC_BSPC, KC_ENT, KC_LBRC, KC_RBRC,

        KC_NO,   KC_BSLS, KC_MINS, KC_UNDS, KC_QUES,
        KC_COLN, KC_EQL , KC_PLUS, KC_LCBR, KC_RCBR,

        LCTL(KC_A), CW_TOGG, _______, _______
    ),

    [2] = LAYOUT(
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,
        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,

        KC_NO,   KC_GRV,   KC_TILD, KC_PIPE, KC_NO,
        KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, KC_NO,

        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,

        _______, _______, _______, _______
    ),

    [3] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,
        MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_NO,

        KC_NO, KC_NO,   MS_BTN1, MS_BTN2, KC_NO,
        KC_NO, KC_PGDN, KC_PGUP, KC_NO,   KC_NO,

        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_NO,

        _______, _______, _______, _______
    )
};

void process_key(uint16_t new_keycode)
{
    if (get_mods() & MOD_BIT(KC_LSFT)) {
        clear_mods();
        register_code(new_keycode);
        unregister_code(new_keycode);
        set_mods(get_mods() | (MOD_BIT(KC_LSFT)));
    } else if (get_mods() & MOD_BIT(KC_RSFT)) {
        clear_mods();
        register_code(new_keycode);
        unregister_code(new_keycode);
        set_mods(get_mods() | (MOD_BIT(KC_RSFT)));
    } else {
        tap_code16(new_keycode);
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode) {
        case MT(KC_NO, KC_F24):
            if (record->tap.count && record->event.pressed) {
                process_key(KC_SLSH);
		return false;
            }
            break;
        case MT(KC_NO, KC_F23):
            if (record->tap.count && record->event.pressed) {
                process_key(KC_SCLN);
		return false;
            }
            break;
        case MT(KC_NO, KC_F22):
            if (record->tap.count && record->event.pressed) {
                process_key(KC_DOT);
		return false;
            }
            break;
        case MT(KC_NO, KC_F21):
            if (record->tap.count && record->event.pressed) {
                process_key(KC_COMMA);
		return false;
            }
            break;
    }
    return true;
}

// clang-format on
