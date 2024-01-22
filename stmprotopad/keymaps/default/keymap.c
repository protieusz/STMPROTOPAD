#include QMK_KEYBOARD_H

enum combo_events {
  COMBO_DIVIDE,
  COMBO_MULTI,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo_divide[] = {KC_KP_MINUS, KC_0, COMBO_END};
const uint16_t PROGMEM combo_multi[] = {KC_0, KC_KP_PLUS, COMBO_END};


combo_t key_combos[] = {
  [COMBO_DIVIDE] = COMBO(combo_divide, KC_KP_SLASH),
  [COMBO_MULTI] = COMBO(combo_multi, KC_KP_ASTERISK),

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
[0] = LAYOUT(

KC_7, KC_8, KC_9,       
KC_4, KC_5, KC_6,
KC_1, KC_2, KC_3,
KC_KP_MINUS, KC_0, KC_KP_PLUS,
KC_BSPC, KC_DOT, KC_ENT

)
};
