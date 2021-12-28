#include QMK_KEYBOARD_H


/* 
 * Custom config for zoldar.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
          LT(0,KC_Q), LT(0,KC_W), LT(0,KC_F), LT(0,KC_P), LT(0,KC_B), 
          LT(0,KC_J), LT(0,KC_L), LT(0,KC_U), LT(0,KC_Y), LT(0,KC_SCLN), 

          LCMD_T(KC_A), LOPT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), LT(4,KC_G), LT(5,KC_M), 
          RSFT_T(KC_N), RCTL_T(KC_E), ROPT_T(KC_I), RCMD_T(KC_O), 

          LT(0,KC_Z), KC_X, KC_C, KC_D, KC_V, 
          KC_K, KC_H, KC_COMM, KC_DOT, KC_QUOTE, 

          LT(3,KC_TAB), LT(1,KC_SPC), 
          LT(2,KC_ENT), LT(0,KC_BSPC)
        ),
	[1] = LAYOUT(
          KC_MPLY, KC_MPRV, KC_MNXT, KC_BTN3, KC_TRNS, 
          KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS, 

          KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, 
          KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRNS, 
          
          KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, 
          KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_TRNS, 
          
          KC_TRNS, KC_TRNS, 
          KC_ESC, KC_TRNS
        ),
	[2] = LAYOUT(
          KC_EQUAL, S(KC_COMM), S(KC_BSLS), S(KC_DOT), S(KC_3), 
          KC_TRNS, KC_LBRC, KC_RBRC, S(KC_5), S(KC_MINUS), 
          
          LCMD_T(KC_ASTR), LOPT_T(KC_EXLM), LCTL_T(KC_MINUS), LSFT_T(KC_PLUS), S(KC_QUOTE), 
          KC_GRAVE, RSFT_T(KC_LPRN), RCTL_T(KC_RPRN), ROPT_T(KC_CIRC), RCMD_T(KC_DLR), 
          
          S(KC_SLASH), S(KC_2), KC_BACKSLASH, KC_SLASH, KC_TRNS, 
          KC_TRNS, S(KC_LBRC), S(KC_RBRC), S(KC_GRAVE), S(KC_7), 

          KC_TRNS, S(KC_SCLN), 
          KC_TRNS, KC_TRNS
        ),
	[3] = LAYOUT(
          KC_1, KC_2, KC_3, KC_4, KC_5, 
          KC_6, KC_7, KC_8, KC_9, KC_0, 

          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
 
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 

	  KC_TRNS, KC_TRNS, 
	  KC_TRNS, KC_TRNS
	),
	[4] = LAYOUT(
	  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	  KC_TRNS, C(G(KC_LEFT)), LAG(KC_UP), C(G(KC_RIGHT)), KC_TRNS, 
	  
	  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	  KC_TRNS, LAG(KC_LEFT), LAG(KC_C), LAG(KC_RIGHT), LAG(KC_F), 
	  
	  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	  KC_TRNS, C(S(G(KC_LEFT))), LAG(KC_DOWN), C(S(G(KC_RIGHT))), KC_TRNS, 

	  KC_TRNS, KC_TRNS, 
	  KC_TRNS, KC_TRNS
	),
	[5] = LAYOUT(
	  KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, 
	  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 

	  KC_TRNS, KC_F4, KC_F5, KC_F6, KC_F11, 
	  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 

	  KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F12, 
	  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 

	  KC_TRNS, KC_TRNS, 
	  KC_TRNS, KC_TRNS
	)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(0,KC_Q):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_1);
                return false;
            }
	    return true;
        case LT(0,KC_W):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_2);
                return false;
            }
            return true;
        case LT(0,KC_F):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_3);
                return false;
            }
            return true;
        case LT(0,KC_P):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_4);
                return false;
            }
            return true;
        case LT(0,KC_B):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_5);
                return false;
            }
            return true;
        case LT(0,KC_J):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_6);
                return false;
            }
            return true;
        case LT(0,KC_L):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_7);
                return false;
            }
            return true;
        case LT(0,KC_U):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_8);
                return false;
            }
            return true;
        case LT(0,KC_Y):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_9);
                return false;
            }
            return true;
        case LT(0,KC_SCLN):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_0);
                return false;
            }
            return true;
        case LT(0,KC_Z):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_ESC);
                return false;
            }
            return true;
        case LT(0,KC_BSPC):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LOPT(KC_BSPC));
                return false;
            } 
            return true;
        case LCMD_T(KC_ASTR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_ASTR);
                return false;
            } 
            break;
        case LOPT_T(KC_EXLM):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_EXLM);
                return false;
            } 
            break;
        case LSFT_T(KC_PLUS):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_PLUS);
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
        case ROPT_T(KC_CIRC):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_CIRC);
                return false;
            } 
            break;
        case RCMD_T(KC_DLR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_DLR);
                return false;
            } 
            break;
    }
    return true;
}
