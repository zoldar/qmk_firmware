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

          LT(0,KC_Z), KC_X, KC_C, KC_D, KC_V,
          KC_K, KC_H, KC_COMM, KC_DOT, KC_QUOTE,

          LT(1,KC_TAB), LT(3,KC_SPC),
          LT(2,KC_ENT), KC_BSPC
    ),
	[1] = LAYOUT(
          KC_MPLY, KC_VOLD, KC_VOLU, KC_BTN2, LCMD(KC_RIGHT),
          LCTL(LOPT(KC_D)), LCTL(LOPT(KC_E)), LCTL(LOPT(KC_C)), LCTL(LOPT(KC_T)), LCTL(LOPT(KC_G)),

          KC_TRNS, OSM(MOD_LCTL), OSM(MOD_LALT), KC_BTN1, LCMD(KC_LEFT),
          KC_PGUP, KC_HOME, KC_UP, KC_END, LCTL(LOPT(KC_I)),

          LCTL(KC_Z), KC_MUTE, KC_NO, OSM(MOD_LGUI), KC_NO,
          KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, LCTL(LOPT(KC_K)),

          KC_TRNS, KC_TRNS,
          MO(4), KC_TRNS
    ),
	[2] = LAYOUT(
          S(KC_NUBS), KC_LABK, KC_RABK, KC_MINS, KC_PIPE,
          KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR , KC_HASH,

          KC_EXLM, KC_ASTR, KC_SLSH, KC_EQL, KC_AMPR,
          S(KC_MINS), KC_LPRN, KC_RPRN, KC_SCLN, KC_DQUO,

          KC_NUBS, KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC,
          KC_AT  , S(KC_SLSH), KC_COMM, KC_DOT , KC_QUOT,

          KC_TRNS, S(KC_SCLN),
          KC_TRNS, KC_TRNS
    ),
	[3] = LAYOUT(
          KC_1, KC_2, KC_3, KC_4, KC_5,
          KC_6, KC_7, KC_8, KC_9, KC_0,

          KC_F1, OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LSFT), KC_F11,
          KC_F12, OSM(MOD_RSFT), OSM(MOD_RALT), OSM(MOD_RCTL), KC_F10,

          KC_F2, KC_F3, KC_F4, OSM(MOD_LGUI), KC_F5,
          KC_F6, OSM(MOD_RGUI), KC_F7, KC_F8, KC_F9,

          KC_TRNS, KC_TRNS,
          KC_ESC, KC_TRNS
	),
	[4] = LAYOUT(
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          MS_WHLU, MS_WHLL, MS_UP, MS_WHLR, KC_TRNS,

          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          MS_WHLD, MS_LEFT, MS_DOWN, MS_RGHT, KC_TRNS,

          KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS
    ),
};

uint8_t mod_state;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    mod_state = get_mods();

    switch (keycode) {
        case LCTL(LOPT(KC_I)):
            if ((mod_state & MOD_MASK_GUI) && record->event.pressed) {
                tap_code16(LCTL(LOPT(KC_U)));
		        return false;
            }
        case LCTL(LOPT(KC_K)):
            if ((mod_state & MOD_MASK_GUI) && record->event.pressed) {
                tap_code16(LCTL(LOPT(KC_J)));
		        return false;
            }
        case LT(0,KC_Z):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_ESC);
                return false;
            }
            return true;
    }
    return true;
}
