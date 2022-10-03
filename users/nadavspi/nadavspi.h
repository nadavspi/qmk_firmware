#pragma once

#include "quantum.h"
#include "action.h"
#include "version.h"

#include "keymap_steno.h"

#include "wrappers.h"

#define ALFRED LCTL(KC_SPACE)
#define CLIPBOARD LALT(LGUI(KC_C))
#define ZOOM_MUTE LGUI(LSFT(KC_M))
#define RESET QK_BOOT
#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

enum userspace_layers {
  _DEFAULT,
  _RAISE,
  _LOWER,
  _STENO,
};

enum custom_keycodes {
  KC_MAKE = SAFE_RANGE,
  NEW_SAFE_RANGE  //use "NEW_SAFE_RANGE" for keymap specific codes
};

enum tap_dance_codes {
  TD_OBSIDIAN,
  TD_ALFRED_RAISE,
  TD_THROW_L,
  TD_THROW_R,
  TD_LEAD_LOWER,
  TD_RAISE_STENO
};
enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD,
  DOUBLE_TAP,
  DOUBLE_HOLD,
  DOUBLE_SINGLE_TAP,
  MORE_TAPS
};
typedef struct {
  bool is_press_action;
  int state;
} tap;