#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( 
        KC_BTN1, DRAG_SCROLL, KC_BTN2,
          KC_F8, MO(1)
    ),
    [1] = LAYOUT(
        KC_BTN4, DRAG_SCROLL, KC_BTN5,
          DPI_CONFIG, _______
    )
};
