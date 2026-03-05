#include QMK_KEYBOARD_H


/*
 * Custom config for zoldar.
 */


void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
          KC_Q, KC_W, KC_F, KC_P, KC_B,
          KC_J, KC_L, KC_U, KC_Y, KC_NUBS,

          KC_A, KC_R, KC_S, KC_T, KC_G,
	      KC_M, KC_N, KC_E, KC_I, KC_O,

          KC_Z, KC_X, KC_C, KC_D, KC_V,
          KC_K, KC_H, KC_COMM, KC_DOT, KC_QUOTE,

          MO(2), MO(1),
          KC_SPC, KC_RSFT
    ),
	[1] = LAYOUT(
          KC_1, KC_2, KC_3, KC_4, KC_5,
          KC_6, KC_7, KC_8, KC_9, KC_0,

          OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), OSL(3),
          KC_PGUP, KC_HOME, KC_UP, KC_END, KC_ESC,


          LCTL(KC_Z), KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY,
          KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TAB,

          KC_NO, KC_NO,
          KC_ENT, KC_BSPC
    ),
	[2] = LAYOUT(
          S(KC_NUBS), KC_LABK, KC_RABK, KC_MINS, KC_PIPE,
          KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR , KC_HASH,

          KC_EXLM, KC_ASTR, KC_SLSH, KC_EQL, KC_AMPR,
          S(KC_MINS), KC_LPRN, KC_RPRN, KC_SCLN, KC_DQUO,

          KC_BSLS, KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC,
          KC_AT  , S(KC_SLSH), KC_COMM, KC_DOT , KC_QUOT,

          KC_TRNS, KC_TRNS,
          S(KC_SCLN), KC_NO
    ),
	[3] = LAYOUT(
          KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
          KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,

          KC_NO, KC_NO, KC_NO, KC_NO, KC_F11,
          KC_F12, KC_NO, KC_NO, KC_NO, KC_NO,

          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

          KC_NO, KC_NO,
          KC_NO, KC_NO
	)
};

