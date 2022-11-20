#pragma once
#include "nadavspi.h"

#define HOME_A MT(MOD_LCTL, KC_A)
#define HOME_R MT(MOD_LALT, KC_R)
#define HOME_S MT(MOD_LGUI, KC_S)
#define HOME_T MT(MOD_LSFT, KC_T)
#define HOME_N MT(MOD_LSFT, KC_N)
#define HOME_E MT(MOD_RGUI, KC_E)
#define HOME_I MT(MOD_RALT, KC_I)
#define HOME_O MT(MOD_RCTL, KC_O)
#define LT_V LT(_NUM, KC_V)

// Base
#define _________________COLEMAK_L1________________ KC_Q,    KC_W,    KC_F,    KC_P,    KC_G
#define _________________COLEMAK_L2_DEFAULT________ KC_A,    KC_R,    KC_S,    KC_T,    KC_D
#define _________________COLEMAK_L2________________ HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_D
#define _________________COLEMAK_L3________________ KC_Z,    KC_X,    KC_C,    LT_V,    KC_B

#define _________________COLEMAK_R1________________ KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOTE
#define _________________COLEMAK_R2_DEFAULT________ KC_H,    KC_N,    KC_E,    KC_I,    KC_O
#define _________________COLEMAK_R2________________ KC_H,    HOME_N,  HOME_E,  HOME_I,  HOME_O
#define _________________COLEMAK_R3________________ KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ___________________BLANK___________________       _______, _______, _______, _______, _______

// Layers
#define DEFAULT_L1 ________________NUMBER_LEFT________________
#define DEFAULT_L2 _________________COLEMAK_L1________________
#define DEFAULT_L3 _________________COLEMAK_L2________________
#define DEFAULT_L4 _________________COLEMAK_L3________________
#define DEFAULT_L5 _______, KC_BTN1, DEFAULT_L_THUMB
#define DEFAULT_L_THUMB LT(_FUNC, KC_SPC)

#define DEFAULT_R1 ________________NUMBER_RIGHT_______________
#define DEFAULT_R2 _________________COLEMAK_R1________________
#define DEFAULT_R3 _________________COLEMAK_R2________________
#define DEFAULT_R4 _________________COLEMAK_R3________________
#define DEFAULT_R_THUMB SHIFT_NUM
#define DEFAULT_R5 DEFAULT_R_THUMB, TD(TD_OBSIDIAN), _______

#define NUM_L1 _______, _______, _______, _______, _______
#define NUM_L2 _______, _______, KC_LBRC, KC_RBRC, KC_BSLS
#define NUM_L3 ________________NUMBER_LEFT________________
#define NUM_L4 ________________NUMBER_RIGHT_______________
#define NUM_L5 _______, _______, _______
#define NUM_L_THUMB _______

#define NUM_R1 _______, _______, _______, _______, _______
#define NUM_R2 KC_PIPE, KC_EQL,  KC_PLUS, KC_MINS, KC_GRV
#define NUM_R3 ________________NUMBER_RIGHT_______________
#define NUM_R4 _______, OSM(MOD_LSFT), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL)
#define NUM_R_THUMB  _______
#define NUM_R5 _______, _______, _______

#define SYM_L1 _______, _______, _______, _______, _______
#define SYM_L2 KVM,     _______, KC_LBRC, KC_RBRC, KC_BSLS
#define SYM_L3 KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define SYM_L4 _______, _______, _______, _______, _______
#define SYM_L5 _______, _______, _______
#define SYM_L_THUMB _______

#define SYM_R1 _______, _______, _______, _______, _______
#define SYM_R2 NUM_R2
#define SYM_R3 KC_CIRC, KC_AMPR, KC_ASTR, KC_SLSH, XXXXXXX
#define SYM_R4 _______, _______, _______, _______, _______
#define SYM_R_THUMB  _______
#define SYM_R5 _______, _______, _______

#define FUNC_L1 _______,   _______, _______, _______, _______
#define FUNC_L2 KC_BRID,   KC_BRIU, KC_VOLD, KC_VOLU, KC_MUTE
#define FUNC_L3 ZOOM_MUTE, _______, SPACE_L, SPACE_R, ALFRED
#define FUNC_L4 BACK,      FWD,     TAB_L,   TAB_R,   CTXS
#define FUNC_L5 TD(TD_THROW_L), TD(TD_THROW_R), _______
#define FUNC_L_THUMB _______

#define FUNC_R1 _______, _______, _______, _______, _______
#define FUNC_R2 _______, _______, _______, KC_MAKE, RESET
#define FUNC_R3 KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, _______
#define FUNC_R4 _______, _______, _______, _______, _______
#define FUNC_R_THUMB _______
#define FUNC_R5 _______, _______, _______


#define STENO_L1 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define STENO_L2 XXXXXXX, STN_N1, STN_N2, STN_N3, STN_N4, STN_N5
#define STENO_L3 XXXXXXX, STN_S1, STN_TL, STN_PL, STN_HL, STN_ST1
#define STENO_L4 XXXXXXX, STN_S2, STN_KL, STN_WL, STN_RL, STN_ST2

#define STENO_R1 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define STENO_R2 STN_N6,  STN_N7, STN_N8, STN_N9, STN_NA, STN_NB
#define STENO_R3 STN_ST3, STN_FR, STN_PR, STN_LR, STN_TR, STN_DR
#define STENO_R4 STN_ST4, STN_RR, STN_BR, STN_GR, STN_SR, STN_ZR
