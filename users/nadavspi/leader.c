#include "nadavspi.h"

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_H) {
    //   SEND_STRING(SS_LCTL(SS_LSFT(SS_LALT(SS_LGUI(XS_F)))));
    }
  }
}
