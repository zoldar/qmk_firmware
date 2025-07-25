#include QMK_KEYBOARD_H


/*
 * Custom config for zoldar.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
          KC_Q, KC_W, KC_F, KC_P, KC_B,
          KC_J, KC_L, KC_U, KC_Y, KC_SLSH,

          LCMD_T(KC_A), LOPT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G,
	      KC_M, RSFT_T(KC_N), RCTL_T(KC_E), ROPT_T(KC_I), RCMD_T(KC_O),

          LT(0,KC_Z), KC_X, KC_C, KC_D, KC_V,
          KC_K, KC_H, KC_COMM, KC_DOT, KC_QUOTE,

          LT(3,KC_TAB), LT(1,KC_SPC),
          LT(2,KC_ENT), KC_BSPC
        ),
	[1] = LAYOUT(
          KC_MPLY, KC_MPRV, KC_MNXT, KC_BTN2, KC_WH_U,
          KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO,

          KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_WH_D,
          KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_NO,

          KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_LSFT,
          KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_CAPS,

          KC_TRNS, KC_TRNS,
          KC_ESC, KC_TRNS
        ),
	[2] = LAYOUT(
          KC_NUBS, KC_LABK, KC_RABK, KC_MINS, KC_PIPE,
          KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR , KC_HASH,

          LCMD_T(KC_EXLM), LOPT_T(KC_ASTR), LCTL_T(KC_SLSH), LSFT_T(KC_EQL), KC_AMPR,
          S(KC_MINS), RSFT_T(KC_LPRN), RCTL_T(KC_RPRN), ROPT_T(KC_SCLN), RCMD_T(KC_DQUO),

          S(KC_NUBS), KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC,
          KC_AT  , KC_COLN, KC_COMM, KC_DOT , KC_QUOT,

          KC_TRNS, S(KC_SCLN),
          KC_TRNS, KC_TRNS
        ),
	[3] = LAYOUT(
          KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
          KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,

          KC_1, KC_2, KC_3, KC_4, KC_5,
          KC_6, KC_7, KC_8, KC_9, KC_0,

          KC_LCMD, KC_LOPT, KC_LCTL, KC_LSFT, KC_F11,
          KC_F12, KC_RSFT, KC_RCTL, KC_ROPT, KC_RCMD,

          KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS
	)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCMD_T(KC_EXLM):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_EXLM);
                return false;
            }
            break;
        case LOPT_T(KC_ASTR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_ASTR);
                return false;
            }
            break;
        case LCTL_T(KC_SLSH):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_SLSH);
                return false;
            }
            break;
        case LSFT_T(KC_EQL):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_EQL);
                return false;
            }
            break;
        case RSFT_T(KC_LPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LPRN);
                return false;
            }
            break;
        case RCTL_T(KC_RPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RPRN);
                return false;
            }
            break;
        case ROPT_T(KC_SCLN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_SCLN);
                return false;
            }
            break;
        case RCMD_T(KC_DQUO):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_DQUO);
                return false;
            }
            break;
    }
    return true;
}
