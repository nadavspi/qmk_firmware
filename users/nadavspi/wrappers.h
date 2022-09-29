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


#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ___________________BLANK___________________       _______, _______, _______, _______, _______
#define ___________________BLANK___________________       _______, _______, _______, _______, _______

// Layers
#define DEFAULT_L1 KC_ESCAPE, ________________NUMBER_LEFT________________
#define DEFAULT_L2 KC_TAB,    _________________QWERTY_L1_________________
#define DEFAULT_L3 KC_BSPACE, _________________QWERTY_L2_________________
#define DEFAULT_L4 CAPSWRD,   _________________QWERTY_L3_________________

#define DEFAULT_R1 ________________NUMBER_RIGHT_______________, KC_GRAVE
#define DEFAULT_R2 _________________QWERTY_R1_________________, KC_MINUS
#define DEFAULT_R3 _________________QWERTY_R2_________________, KC_QUOTE
#define DEFAULT_R4 _________________QWERTY_R3_________________, _______

#define RAISE_L1 _______, _______, _______, _______, _______, _______ 
#define RAISE_L2 _______, _______, _______, KC_LBRACKET, KC_RBRACKET, KC_PIPE  
#define RAISE_L3 _______, _______, _______, KC_LPRN,     KC_RPRN,     KC_GRAVE    
#define RAISE_L4 _______, _______, _______, KC_LCBR,     KC_RCBR,     KC_BSLASH

#define RAISE_R1 _______, _______, _______, _______, _______, _______ 
#define RAISE_R2 _______, _______, _______, _______, _______, _______ 
#define RAISE_R3 _______, _______, _______, _______, _______, _______ 
#define RAISE_R4 _______, _______, _______, _______, _______, _______ 

#define LOWER_L1 _______,  _______,             _______,      _______,           _______,              _______
#define LOWER_L2 _______,  _______,             _______,      _______,           LGUI(LSFT(KC_SPACE)), _______
#define LOWER_L3 _______,  KC_MEDIA_PLAY_PAUSE, KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,     ZOOM_MUTE
#define LOWER_L4 _______,  _______,             _______,      CLIPBOARD,         LGUI(KC_BSLASH),      _______

#define LOWER_R1 _______   , _______   , _______ , _______    , _______, RESET
#define LOWER_R2 KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, _______, _______
#define LOWER_R3 KC_LEFT   , KC_DOWN   , KC_UP   , KC_RIGHT   , _______, _______
#define LOWER_R4 _______   , _______   , _______ , _______    , _______, _______
