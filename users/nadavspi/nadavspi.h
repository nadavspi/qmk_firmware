#pragma once

#include "quantum.h"
#include "action.h"
#include "version.h"

#include "keymap_steno.h"

#include "wrappers.h"

#define KC_BSPACE KC_BACKSPACE
#define KC_LBRACKET KC_LEFT_BRACKET
#define KC_RBRACKET KC_RIGHT_BRACKET
#define KC_SCOLON KC_SCLN

#define ALFRED LCTL(KC_SPACE)
#define CLIPBOARD LALT(LGUI(KC_C))
#define ZOOM_MUTE LGUI(LSFT(KC_M))
#undef RESET
#define RESET QK_BOOT
#define NUM MO(_NUM)
#define FUNC MO(_FUNC)
#define FWD G(KC_RBRC)
#define BACK G(KC_LBRC)
#define TAB_L G(S(KC_LBRC))
#define TAB_R G(S(KC_RBRC))
#define SPACE_L C(KC_LEFT)
#define SPACE_R C(KC_RGHT)
#define KVM G(KC_F15)
#define CTXS S(G(KC_TAB))

enum userspace_layers {
  _DEFAULT,
  _NUM,
  _FUNC,
  _SYM,
  _STENO,
};

enum custom_keycodes {
  KC_MAKE = SAFE_RANGE,
  NEW_SAFE_RANGE  //use "NEW_SAFE_RANGE" for keymap specific codes
};

enum tap_dance_codes {
  TD_OBSIDIAN,
  TD_ALFRED_NUM,
  TD_THROW_L,
  TD_THROW_R,
  TD_LEAD_FUNC,
  TD_NUM_STENO
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