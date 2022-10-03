#include "nadavspi.h"

//Determine the current tap dance state
int current_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) {
    if (!state->pressed) {
      return SINGLE_TAP;
    } else {
      return SINGLE_HOLD;
    }
  } else if (state->count == 2) {
    return DOUBLE_TAP;
  }
  else return 8;
}

static tap alfred_raise_tap_state = {
  .is_press_action = true,
  .state = 0
};

//Functions that control what our tap dance key does
void alfred_raise_finished (qk_tap_dance_state_t *state, void *user_data) {
  alfred_raise_tap_state.state = current_dance(state);
  switch (alfred_raise_tap_state.state) {
    case SINGLE_TAP: 
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE))); 
      break;
    case SINGLE_HOLD: 
      layer_on(_RAISE); 
      break;
    case DOUBLE_TAP: 
      //check to see if the layer is already set
      if (layer_state_is(_RAISE)) {
        //if already set, then switch it off
        layer_off(_RAISE);
      } else { 
        //if not already set, then switch the layer on
        layer_on(_RAISE);
      }
      break;
  }
}

void alfred_raise_reset (qk_tap_dance_state_t *state, void *user_data) {
  //if the key was held down and now is released then switch off the layer
  if (alfred_raise_tap_state.state==SINGLE_HOLD) {
    layer_off(_RAISE);
  }
  alfred_raise_tap_state.state = 0;
}

static tap lead_lower_tap_state = {
  .is_press_action = true,
  .state = 0
};

void lead_lower_finished (qk_tap_dance_state_t *state, void *user_data) {
  lead_lower_tap_state.state = current_dance(state);
  switch (lead_lower_tap_state.state) {
    case SINGLE_TAP: 
      qk_leader_start();
      break;
    case SINGLE_HOLD: 
      layer_on(_LOWER); 
      break;
  }
}

void lead_lower_reset (qk_tap_dance_state_t *state, void *user_data) {
  //if the key was held down and now is released then switch off the layer
  if (lead_lower_tap_state.state==SINGLE_HOLD) {
    layer_off(_LOWER);
  }
  alfred_raise_tap_state.state = 0;
}

// Tap dance
qk_tap_dance_action_t tap_dance_actions[] = {
  // Activate Obsidian on tap, open daily note on double tap
  [TD_OBSIDIAN] = ACTION_TAP_DANCE_DOUBLE(LGUI(LSFT(KC_SCOLON)), LCTL(LSFT(KC_D))),
  [TD_ALFRED_RAISE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, alfred_raise_finished, alfred_raise_reset),
  [TD_THROW_L] = ACTION_TAP_DANCE_DOUBLE(LGUI(LCTL(KC_H)), LALT(LGUI(KC_H))),
  [TD_THROW_R] = ACTION_TAP_DANCE_DOUBLE(LGUI(LCTL(KC_I)), LALT(LGUI(KC_I))),
  [TD_LEAD_LOWER] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, lead_lower_finished, lead_lower_reset)
};
