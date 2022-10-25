#ifdef RGB_ENABLE
#include "rgb_matrix.h"
#endif
#include "print.h"

#include "nadavspi.h"
#include "tapdance.c"
/* #include "leader.c" */
#include "g/keymap_combo.h"

#ifdef OLED_ENABLE
#include "oled.c"
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _FUNC, _NUM, _SYM);
}

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  #ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, index: %2u\n", keycode, record->event.key.col, record->event.key.row, g_led_config.matrix_co[record->event.key.row][record->event.key.col]);
  #endif 

  switch (keycode) {
    case KC_MAKE:  // Compiles the firmware, and adds the flash command based on keyboard bootloader
            if (!record->event.pressed) {
            uint8_t temp_mod = get_mods();
            clear_mods(); clear_oneshot_mods();
            SEND_STRING("make " QMK_KEYBOARD ":" QMK_KEYMAP);
            SEND_STRING(":flash");
            SEND_STRING(" -j8");
            set_mods(temp_mod);
        }
        break;

  }
  return process_record_keymap(keycode, record);
}

// Caps word
bool caps_word_press_user(uint16_t keycode) {
    if (IS_MT(keycode)) { 
      add_weak_mods(MOD_BIT(KC_LSFT));
      return true; 
    }

    switch (keycode) {
      // Keycodes that continue Caps Word, with shift applied.
      case KC_A ... KC_Z:
      case KC_MINS:
        add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to the next key.
        return true;

      // Keycodes that continue Caps Word, without shifting.
      case KC_1 ... KC_0:
      case KC_BSPC:
      case KC_DEL:
      case KC_UNDS:
        return true;

      default:
        return false;  // Deactivate Caps Word.
    }
}

void keyboard_post_init_user(void) {
    #ifndef RGB_ENABLE
    /* rgb_matrix_disable(); */
    #endif
    #ifdef RGB_ENABLE
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_OFF);
    #endif
    #ifdef CONSOLE_ENABLE
    debug_enable=true;
    debug_matrix=true;
    #endif 
}

#ifdef RGB_ENABLE
void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
   if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index <= led_max && index != NO_LED &&
                 keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                  switch (get_highest_layer(layer_state)) {
                    case _FUNC:
                      rgb_matrix_set_color(index, RGB_ORANGE);
                      break;
                    case _NUM:
                      rgb_matrix_set_color(index, RGB_PURPLE);
                      break;
                    case _SYM:
                      rgb_matrix_set_color(index, RGB_RED);
                      break;
                    case _STENO:
                      rgb_matrix_set_color(index, RGB_GREEN);
                      break;
                    default:
                      break;
                  }
                }
            }
        }
    }
}
#endif

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_F15);
        } else {
            tap_code(KC_F14);
        }
    }
    return false;
}
#endif
