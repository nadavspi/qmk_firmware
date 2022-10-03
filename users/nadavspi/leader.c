#include "nadavspi.h"

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_TWO_KEYS(KC_O, KC_F) {
      tap_code16(HYPR(KC_F));
    }

    SEQ_TWO_KEYS(KC_O, KC_T) {
      tap_code16(HYPR(KC_T));
    }

    SEQ_TWO_KEYS(KC_O, KC_V) {
      tap_code16(HYPR(KC_V));
    }

    SEQ_TWO_KEYS(KC_O, KC_C) {
      tap_code16(HYPR(KC_C));
    }

    SEQ_TWO_KEYS(KC_O, KC_O) {
      tap_code16(HYPR(KC_O));
    }

    SEQ_TWO_KEYS(KC_O, KC_W) {
      tap_code16(HYPR(KC_W));
    }

    SEQ_TWO_KEYS(KC_O, KC_D) {
      tap_code16(HYPR(KC_D));
    }
  }
}
