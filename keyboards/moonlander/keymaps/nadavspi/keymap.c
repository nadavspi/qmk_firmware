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

  [_NUM] = LAYOUT_moonlander_wrapper(
    NUM_L1, _______, _______, NUM_R1,
    NUM_L2, _______, _______, NUM_R2,
    NUM_L3, _______, _______, NUM_R3,
    NUM_L4, NUM_R4,

    _______, _______, NUM_L5, 
      _______, _______, // big thumb keys
    NUM_R5, _______, _______,

    NUM_L_THUMB, _______, _______, _______, _______, NUM_R_THUMB
  ),

  [_FUNC] = LAYOUT_moonlander_wrapper(
    FUNC_L1, _______, _______, FUNC_R1,
    FUNC_L2, _______, _______, FUNC_R2,
    FUNC_L3, _______, _______, FUNC_R3,
    FUNC_L4, FUNC_R4,

    _______, _______,  FUNC_L5, 
      _______, _______, // big thumb keys
     FUNC_R5, _______, _______,

     FUNC_L_THUMB, _______, _______, _______, _______, FUNC_R_THUMB 
  ),

  [_SYM] = LAYOUT_moonlander_wrapper(
    SYM_L1, _______, _______, SYM_R1,
    SYM_L2, _______, _______, SYM_R2,
    SYM_L3, _______, _______, SYM_R3,
    SYM_L4, SYM_R4,

    _______, _______,  SYM_L5, 
      _______, _______, // big thumb keys
     SYM_R5, _______, _______,

     SYM_L_THUMB, _______, _______, _______, _______, SYM_R_THUMB 
  ),

};
