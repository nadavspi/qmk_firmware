#include QMK_KEYBOARD_H
#include "nadavspi.h" 

#define LAYOUT_wrapper(...) LAYOUT_split_3x5_2(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_wrapper(
    DEFAULT_L2, DEFAULT_R2,
    DEFAULT_L3, DEFAULT_R3,
    DEFAULT_L4, DEFAULT_R4,
          OSM(MOD_LCTL), DEFAULT_L_THUMB, DEFAULT_R_THUMB, OSM(MOD_LCTL)
  ),

  [_NUM] = LAYOUT_wrapper(
    NUM_L2, NUM_R2,
    NUM_L3, NUM_R3,
    NUM_L4, NUM_R4,
           _______, NUM_L_THUMB, NUM_R_THUMB, _______
  ),

  [_FUNC] = LAYOUT_wrapper(
    FUNC_L2, FUNC_R2,
    FUNC_L3, FUNC_R3,
    FUNC_L4, FUNC_R4,
           _______, FUNC_L_THUMB, FUNC_R_THUMB, _______ 
  ),

   [_SYM] = LAYOUT_wrapper(
    SYM_L2, SYM_R2,
    SYM_L3, SYM_R3,
    SYM_L4, SYM_R4,
            _______, SYM_L_THUMB, SYM_R_THUMB, _______
  )
};
