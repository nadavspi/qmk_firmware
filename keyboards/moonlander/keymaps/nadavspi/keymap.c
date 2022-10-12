#include QMK_KEYBOARD_H
 
#include "nadavspi.h"

#define LAYOUT_moonlander_wrapper(...) LAYOUT_moonlander(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_moonlander_wrapper(
    DEFAULT_L1, _______, _______,  DEFAULT_R1,
    DEFAULT_L2, _______, _______, DEFAULT_R2,
    DEFAULT_L3, _______, _______, DEFAULT_R3,
    DEFAULT_L4, DEFAULT_R4,

    _______, _______, DEFAULT_L5, 
    _______, _______, // big thumb keys
    DEFAULT_R5, _______, _______,

    DEFAULT_L_THUMB, _______, _______, _______, _______, DEFAULT_R_THUMB
  ),  

  [1] = LAYOUT_moonlander_wrapper(
    RAISE_L1, _______, _______, RAISE_R1,
    RAISE_L2, _______, _______, RAISE_R2,
    RAISE_L3, _______, _______, RAISE_R3,
    RAISE_L4, RAISE_R4,

    _______, _______, RAISE_L5, 
      _______, _______, // big thumb keys
    RAISE_R5, _______, _______,

    RAISE_L_THUMB, _______, _______, _______, _______, RAISE_R_THUMB
  ),

  [2] = LAYOUT_moonlander_wrapper(
    LOWER_L1, _______, _______, LOWER_R1,
    LOWER_L2, _______, _______, LOWER_R2,
    LOWER_L3, _______, _______, LOWER_R3,
    LOWER_L4, LOWER_R4,

    _______, _______,  LOWER_L5, 
      _______, _______, // big thumb keys
     LOWER_R5, _______, _______,

     LOWER_L_THUMB, _______, _______, _______, _______, LOWER_R_THUMB 
  ),

};
