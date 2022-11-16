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

static tap shift_num_tap_state = {
  .is_press_action = true,
  .state = 0
};

//Functions that control what our tap dance key does
void shift_num_finished (qk_tap_dance_state_t *state, void *user_data) {
  shift_num_tap_state.state = current_dance(state);
  switch (shift_num_tap_state.state) {
    case SINGLE_TAP: 
      set_oneshot_mods(MOD_BIT(KC_LSFT));
      break;
    case SINGLE_HOLD: 
      layer_on(_NUM); 
      break; 
  }
}

void shift_num_reset (qk_tap_dance_state_t *state, void *user_data) {
  if (shift_num_tap_state.state==SINGLE_HOLD) {
    layer_off(_NUM);
  }
  shift_num_tap_state.state = 0;
}

static tap lead_func_tap_state = {
  .is_press_action = true,
  .state = 0
};

void lead_func_finished (qk_tap_dance_state_t *state, void *user_data) {
  lead_func_tap_state.state = current_dance(state);
  switch (lead_func_tap_state.state) {
    case SINGLE_TAP: 
      /* qk_leader_start(); */
      break;
    case SINGLE_HOLD: 
      layer_on(_FUNC); 
      break;
  }
}

void lead_func_reset (qk_tap_dance_state_t *state, void *user_data) {
  //if the key was held down and now is released then switch off the layer
  if (lead_func_tap_state.state==SINGLE_HOLD) {
    layer_off(_FUNC);
  }
  lead_func_tap_state.state = 0;
}

static tap raise_steno_tap_state = {
  .is_press_action = true,
  .state = 0
};

void raise_steno_finished (qk_tap_dance_state_t *state, void *user_data) {
  raise_steno_tap_state.state = current_dance(state);
  switch (raise_steno_tap_state.state) {
    case SINGLE_HOLD: 
      layer_on(_NUM); 
      break;
    case DOUBLE_TAP: 
      //check to see if the layer is already set
      if (layer_state_is(_STENO)) {
        //if already set, then switch it off
        layer_off(_STENO);
      } else { 
        //if not already set, then switch the layer on
        layer_on(_STENO);
      }
      break;
  }
}

void raise_steno_reset (qk_tap_dance_state_t *state, void *user_data) {
  //if the key was held down and now is released then switch off the layer
  if (raise_steno_tap_state.state==SINGLE_HOLD) {
    layer_off(_NUM);
  }
  raise_steno_tap_state.state = 0;
}

// Tap dance
qk_tap_dance_action_t tap_dance_actions[] = {
  // Activate Obsidian on tap, open daily note on double tap
  [TD_OBSIDIAN] = ACTION_TAP_DANCE_DOUBLE(LGUI(LSFT(KC_SCOLON)), LCTL(LSFT(KC_D))),
  [TD_SHIFT_NUM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, shift_num_finished, shift_num_reset),
  [TD_THROW_L] = ACTION_TAP_DANCE_DOUBLE(LGUI(LCTL(KC_H)), LALT(LGUI(KC_H))),
  [TD_THROW_R] = ACTION_TAP_DANCE_DOUBLE(LGUI(LCTL(KC_I)), LALT(LGUI(KC_I))),
  // [TD_LEAD_FUNC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, lead_func_finished, lead_func_reset),
  // [TD_NUM_STENO] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, raise_steno_finished, raise_steno_reset)
};
