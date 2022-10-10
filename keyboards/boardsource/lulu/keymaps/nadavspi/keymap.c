#include QMK_KEYBOARD_H
#include "nadavspi.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    DEFAULT_L2,                    DEFAULT_R2,
    DEFAULT_L3,                    DEFAULT_R3,
    DEFAULT_L4, ZOOM_MUTE,  KC_RBRC, DEFAULT_R4,
                RAISE, _______, LT(RAISE, KC_SPC), TD(TD_LEAD_LOWER),         TD(TD_ALFRED_RAISE), KC_ENT, TD(TD_OBSIDIAN), LOWER
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
                               TD(TD_THROW_L), TD(TD_THROW_R), _______,   _______, KC_BTN1,  KC_BTN2, _______, _______
  )
};

void caps_word_set_user(bool active) {
}

