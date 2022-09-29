#pragma once

#include "quantum.h"
#include "action.h"
#include "version.h"

#include "wrappers.h"

#define ALFRED LCTL(KC_SPACE)
#define CLIPBOARD LALT(LGUI(KC_C))
#define ZOOM_MUTE LGUI(LSFT(KC_M))

enum userspace_layers {
  _DEFAULT,
  _LOWER,
  _RAISE,
  _ADJUST,
};

enum custom_keycodes {
  KC_MAKE = SAFE_RANGE,
  NEW_SAFE_RANGE  //use "NEW_SAFE_RANGE" for keymap specific codes
};

enum tap_dance_codes {
  TD_OBSIDIAN
};
enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD,
  DOUBLE_TAP,
  DOUBLE_HOLD,
  DOUBLE_SINGLE_TAP,
  MORE_TAPS
};