#include "rgb_matrix.h"
#include "print.h"

#include "nadavspi.h"
#include "tapdance.c"
#include "leader.c"


__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  #ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
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


// Auto shift
bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
    if (IS_MT(keycode)){return true;}
    return false;
}

// Caps word
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
        // KS_SCOLON is actually my o
        case KC_SCOLON:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
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
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_OFF);
    debug_enable=true;
    debug_matrix=true;
}

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
  // if (layer_state_is(_DEFAULT)) {
  //   RGB_MATRIX_INDICATOR_SET_COLOR(22, 31, 255, 255);
  //   RGB_MATRIX_INDICATOR_SET_COLOR(58, 31, 255, 255);
  // }
  
   if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index <= led_max && index != NO_LED &&
                 keymap_key_to_keycode(layer, (keypos_t){col,row}) > 1) {
                  switch (get_highest_layer(layer_state)) {
                    case _LOWER:
                      rgb_matrix_set_color(index, RGB_ORANGE);
                      break;
                    case _RAISE:
                      rgb_matrix_set_color(index, RGB_PURPLE);
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