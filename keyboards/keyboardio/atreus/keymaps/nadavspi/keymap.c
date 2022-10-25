#include QMK_KEYBOARD_H
#include "nadavspi.h" 

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_wrapper(
    DEFAULT_L2,                    DEFAULT_R2,
    DEFAULT_L3,                    DEFAULT_R3,
    DEFAULT_L4, ZOOM_MUTE,  _______, DEFAULT_R4,
           _______, _______, DEFAULT_L5, DEFAULT_L_THUMB, DEFAULT_R_THUMB, DEFAULT_R5, _______, _______ 
  ),

  [_NUM] = LAYOUT_wrapper(
    NUM_L2, NUM_R2,
    NUM_L3, NUM_R3,
    NUM_L4, _______, _______, NUM_R4,
           _______, _______, NUM_L5, NUM_L_THUMB, NUM_R_THUMB, NUM_R5, _______, _______ 
  ),

  [_FUNC] = LAYOUT_wrapper(
    FUNC_L2, FUNC_R2,
    FUNC_L3, FUNC_R3,
    FUNC_L4, _______, _______, FUNC_R4,
           _______, _______, FUNC_L5, FUNC_L_THUMB, FUNC_R_THUMB, FUNC_R5, _______, _______ 
  ),

   [_SYM] = LAYOUT_wrapper(
    SYM_L2, SYM_R2,
    SYM_L3, SYM_R3,
    SYM_L4, _______, _______, SYM_R4,
           _______, _______, SYM_L5, SYM_L_THUMB, SYM_R_THUMB, SYM_R5, _______, _______ 
  )
};