#include QMK_KEYBOARD_H


/*
 * Custom config for zoldar.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
          KC_Q, KC_W, KC_F, KC_P, KC_B,
          KC_J, KC_L, KC_U, KC_Y, KC_NUBS,

          KC_A, KC_R, KC_S, KC_T, KC_G,
	      KC_M, KC_N, KC_E, KC_I, KC_O,

          LSFT_T(KC_Z), LCTL_T(KC_X), LALT_T(KC_C), LCMD_T(KC_D), KC_V,
          KC_K, RCMD_T(KC_H), RALT_T(KC_COMM), RCTL_T(KC_DOT), RSFT_T(KC_QUOTE),

          MO(2), MO(1),
          KC_SPC, MO(3)
    ),
	[1] = LAYOUT(
          KC_1, KC_2, KC_3, KC_4, KC_5,
          KC_6, KC_7, KC_8, KC_9, KC_0,

          LCTL(KC_Z), MS_BTN3, MS_BTN2, MS_BTN1, KC_NO,
          KC_PGUP, KC_HOME, KC_UP, KC_END, KC_ESC,


          OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), OSL(3),
          KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TAB,

          KC_NO, KC_NO,
          KC_ENT, KC_BSPC
    ),
	[2] = LAYOUT(
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR , KC_HASH,

          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          S(KC_MINS), KC_LPRN, KC_RPRN, KC_SCLN, KC_DQUO,

          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_AT  , S(KC_SLSH), KC_COMM, KC_DOT , KC_QUOT,

          KC_NO, KC_NO,
          S(KC_SCLN), MO(4)
    ),
    [3] = LAYOUT(
          S(KC_NUBS), KC_LABK, KC_RABK, KC_MINS, KC_PIPE,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

          KC_EXLM, KC_ASTR, KC_SLSH, KC_EQL, KC_AMPR,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

          KC_BSLS, KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

          MO(4), KC_NO,
          KC_NO, KC_NO
    ),
	[4] = LAYOUT(
          KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
          KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,

          KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, KC_F11,
          KC_F12, KC_NO, KC_NO, KC_NO, KC_NO,

          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

          KC_NO, KC_NO,
          KC_NO, KC_NO
	)
};

