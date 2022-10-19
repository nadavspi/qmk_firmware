#pragma once
#include "nadavspi.h"

// Base
#define _________________QWERTY_L1_________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_DEFAULT_________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L2_________________       MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_G
#define _________________QWERTY_L3_________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_DEFAULT_________       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R2_________________       KC_H,    MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCOLON)
#define _________________QWERTY_R3_________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define _________________COLEMAK_L1________________ KC_Q,    KC_W,    KC_F,    KC_P,    KC_G
#define _________________COLEMAK_L2_DEFAULT________ KC_A,    KC_R,    KC_S,    KC_T,    KC_D
#define _________________COLEMAK_L2________________ MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LGUI, KC_S),MT(MOD_LSFT, KC_T),KC_D
#define _________________COLEMAK_L3________________ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________COLEMAK_R1________________ KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define _________________COLEMAK_R2_DEFAULT________ KC_H,    KC_N,    KC_E,    KC_I,    KC_O
#define _________________COLEMAK_R2________________ KC_H,    MT(MOD_RSFT, KC_N),MT(MOD_RGUI, KC_E),MT(MOD_RALT, KC_I),MT(MOD_RCTL, KC_O)
#define _________________COLEMAK_R3________________ KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ___________________BLANK___________________       _______, _______, _______, _______, _______
#define ___________________BLANK___________________       _______, _______, _______, _______, _______

// Layers
#define DEFAULT_L1 _______,   ________________NUMBER_LEFT________________
#define DEFAULT_L2 KC_TAB,    _________________COLEMAK_L1________________
#define DEFAULT_L3 KC_BSPACE, _________________COLEMAK_L2________________
#define DEFAULT_L4 CAPSWRD,   _________________COLEMAK_L3________________
#define DEFAULT_L5 _______, _______, LT(NUM, KC_SPC)
#define DEFAULT_L_THUMB TD(TD_LEAD_FUNC)

#define DEFAULT_R1 ________________NUMBER_RIGHT_______________, KC_GRAVE
#define DEFAULT_R2 _________________COLEMAK_R1________________, _______
#define DEFAULT_R3 _________________COLEMAK_R2________________, _______
#define DEFAULT_R4 _________________COLEMAK_R3________________, KC_EQUAL
#define DEFAULT_R_THUMB TD(TD_ALFRED_NUM)
#define DEFAULT_R5 LT(FUNC, KC_ENT), TD(TD_OBSIDIAN), _______

#define NUM_L1 _______, _______, _______, _______, _______, _______
#define NUM_L2 _______, _______, _______, _______, _______, KC_PIPE  
#define NUM_L3 _______, G(KC_1), G(KC_2), G(KC_3), G(KC_4), G(KC_5)   
#define NUM_L4 _______, _______, _______, _______, _______, _______
#define NUM_L5 _______, _______, _______
#define NUM_L_THUMB _______

#define NUM_R1 _______,   _______, _______, _______, KC_KP_SLASH,    _______ 
#define NUM_R2 _______,   KC_7,    KC_8,    KC_9,    KC_KP_ASTERISK, _______ 
#define NUM_R3 _______,   KC_4,    KC_5,    KC_6,    KC_KP_MINUS,    _______ 
#define NUM_R4 KC_BSPACE, KC_1,    KC_2,    KC_3,    KC_KP_PLUS,     _______ 
#define NUM_R_THUMB  KC_ENT
#define NUM_R5 KC_0, _______, _______

#define FUNC_L1 _______, _______, _______, _______, _______, _______
#define FUNC_L2 KC_BRID, KC_BRIU, KC_MUTE, KC_VOLD, KC_VOLU, ZOOM_MUTE
#define FUNC_L3 _______, _______, _______, SPACE_L, SPACE_R, _______
#define FUNC_L4 _______, BACK,    FWD,     TAB_L,   TAB_R,   SW_WIN
#define FUNC_L5 TD(TD_THROW_L), TD(TD_THROW_R), _______
#define FUNC_L_THUMB KVM

#define FUNC_R1 _______   , _______   , _______ , _______    , KC_MAKE, RESET
#define FUNC_R2 KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, _______, _______
#define FUNC_R3 KC_LEFT   , KC_DOWN   , KC_UP   , KC_RIGHT   , _______, _______
#define FUNC_R4 KC_WH_L,    KC_WH_D,    KC_WH_U,  KC_WH_R ,    _______, _______
#define FUNC_R_THUMB KC_BTN1 
#define FUNC_R5 KC_BTN2, _______, _______
   

#define STENO_L1 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX 
#define STENO_L2 XXXXXXX, STN_N1, STN_N2, STN_N3, STN_N4, STN_N5
#define STENO_L3 XXXXXXX, STN_S1, STN_TL, STN_PL, STN_HL, STN_ST1
#define STENO_L4 XXXXXXX, STN_S2, STN_KL, STN_WL, STN_RL, STN_ST2

#define STENO_R1 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX 
#define STENO_R2 STN_N6,  STN_N7, STN_N8, STN_N9, STN_NA, STN_NB
#define STENO_R3 STN_ST3, STN_FR, STN_PR, STN_LR, STN_TR, STN_DR
#define STENO_R4 STN_ST4, STN_RR, STN_BR, STN_GR, STN_SR, STN_ZR 