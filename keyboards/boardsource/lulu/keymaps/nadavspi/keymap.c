#include QMK_KEYBOARD_H
#include "nadavspi.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_wrapper(
    DEFAULT_L1,                    DEFAULT_R1,
    DEFAULT_L2,                    DEFAULT_R2,
    DEFAULT_L3,                    DEFAULT_R3,
    DEFAULT_L4, ZOOM_MUTE,  _______, DEFAULT_R4,
              DEFAULT_L5, DEFAULT_L_THUMB, DEFAULT_R_THUMB, DEFAULT_R5        
  ),

  [_RAISE] = LAYOUT_wrapper(
    RAISE_L1, RAISE_R1,
    RAISE_L2, RAISE_R2,
    RAISE_L3, RAISE_R3,
    RAISE_L4, _______, _______, RAISE_R4,
    RAISE_L5, RAISE_L_THUMB, RAISE_R_THUMB, RAISE_R5
  ),

  [_LOWER] = LAYOUT_wrapper(
    LOWER_L1, LOWER_R1,
    LOWER_L2, LOWER_R2,
    LOWER_L3, LOWER_R3,
    LOWER_L4, _______, _______, LOWER_R4,
    LOWER_L5, LOWER_L_THUMB, LOWER_R_THUMB, LOWER_R5                          
  )
};