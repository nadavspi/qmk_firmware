#include QMK_KEYBOARD_H
#include "nadavspi.h"

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_wrapper(
    DEFAULT_L1,                    DEFAULT_R1,
    DEFAULT_L2,                    DEFAULT_R2,
    DEFAULT_L3,                    DEFAULT_R3,
    DEFAULT_L4, KC_LBRC,  KC_RBRC, DEFAULT_R4,
                KC_LALT, LOWER, KC_SPC, KC_LGUI,         RAISE, KC_ENT, _______, KC_RGUI
  ),

  [_RAISE] = LAYOUT_wrapper(
    RAISE_L1, RAISE_R1,
    RAISE_L2, RAISE_R2,
    RAISE_L3, RAISE_R3,
    RAISE_L4, _______, _______, RAISE_R4,
                               _______, _______, _______,  _______, _______,  _______, _______, _______
  ),

  [_LOWER] = LAYOUT_wrapper(
    LOWER_L1, LOWER_R1,
    LOWER_L2, LOWER_R2,
    LOWER_L3, LOWER_R3,
    LOWER_L4, _______, _______, LOWER_R4,
                               _______, _______, _______,  _______, _______,  _______, _______, _______
  ),
};