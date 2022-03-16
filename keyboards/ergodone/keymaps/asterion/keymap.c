#include QMK_KEYBOARD_H
#include "version.h"

#define LETR 0 // letters
#define AROW 1 // directional arrows
#define SYMB 2 // symbols
#define NUMP 3 // num pad
#define MOUS 4 // mouse control
#define GAME 5 // mouse control

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[LETR] = LAYOUT_ergodox(
  KC_ESCAPE,KC_1,KC_2,KC_3,KC_4,KC_5,KC_PSCREEN,
  KC_NO,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_NO,
  KC_LSHIFT,CTL_T(KC_A),SFT_T(KC_S),ALT_T(KC_D),ALGR_T(KC_F),RWIN_T(KC_G),
  KC_LCTRL,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_NO,
  KC_NO,KC_NO,KC_LALT,MO(3),MO(1),

  KC_NO,KC_NO,
  KC_NO,
  KC_SPACE,KC_BSPACE,KC_NO,


  KC_NO,KC_6,KC_7,KC_8,KC_9,KC_0,LGUI(KC_L),
  KC_NO,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_NO,
  RWIN_T(KC_H),ALGR_T(KC_J),ALT_T(KC_K),SFT_T(KC_L),RCTL_T(KC_SCLN),KC_RSHIFT,
  KC_NO,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RCTRL,
  MO(2),MO(4),KC_RALT,KC_TRNS,KC_TRNS,

  KC_NO,KC_NO,
  KC_NO,
  KC_NO,KC_TAB,KC_ENTER
  ),

[AROW] = LAYOUT_ergodox(
  KC_ESCAPE,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_PSCREEN,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_NO,KC_LCTRL,KC_LSHIFT,KC_LALT,KC_RALT,KC_LGUI,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_TRNS,KC_TRNS,

  KC_NO,KC_NO,
  KC_NO,
  KC_APP,KC_DELETE,KC_NO,


  KC_NO,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_UP,KC_PGUP,KC_NO,KC_NO,
  KC_HOME,KC_LEFT,KC_DOWN,KC_RIGHT,KC_END,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_PGDOWN,KC_NO,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_TRNS,KC_TRNS,

  KC_NO,KC_NO,
  KC_NO,
  KC_NO,KC_PSCREEN,KC_INS
  ),

[SYMB] = LAYOUT_ergodox(
  KC_NO,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_PSCREEN,
  KC_NO,KC_0,KC_7,KC_2,KC_QUOT,KC_9,KC_NO,
  KC_NO,KC_1,KC_RBRC,KC_5,KC_MINS,KC_6,
  KC_NO,KC_NUBS,KC_3,KC_4,KC_EQL,KC_8,KC_NO,
  KC_NO,KC_LBRC,KC_NUHS,KC_TRNS,KC_TRNS,

  KC_NO,KC_NO,
  KC_NO,
  KC_APP,KC_DELETE,KC_NO,


  KC_NO,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,DF(5),
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_LGUI,KC_RALT,KC_LALT,KC_RSHIFT,KC_RCTRL,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_TRNS,KC_TRNS,

  KC_NO,KC_NO,
  KC_NO,
  KC_NO,KC_PSCREEN,KC_INS
  ),

[NUMP] = LAYOUT_ergodox(
  KC_NO,KC_F11,KC_F12,KC_F13,KC_F14,KC_F15,KC_PSCREEN,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_NO,KC_LCTRL,KC_LSHIFT,KC_LALT,KC_RALT,KC_LGUI,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_TRNS,KC_TRNS,

  KC_NO,KC_NO,
  KC_NO,
  KC_APP,KC_DELETE,KC_NO,


  KC_NO,KC_F16,KC_F17,KC_F18,KC_F19,KC_F20,KC_NO,
  KC_NO,KC_KP_PLUS,KC_KP_7,KC_KP_8,KC_KP_9,KC_KP_ASTERISK,KC_NO,
  KC_KP_MINUS,KC_KP_4,KC_KP_5,KC_KP_6,KC_KP_SLASH,KC_NO,
  KC_NO,KC_KP_0,KC_KP_1,KC_KP_2,KC_KP_3,KC_KP_DOT,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_TRNS,KC_TRNS,

  KC_NO,KC_NO,
  KC_NO,
  KC_NO,KC_PSCREEN,KC_INS
  ),

[MOUS] = LAYOUT_ergodox(
  KC_NO,KC_F11,KC_F12,KC_F13,KC_F14,KC_F15,KC_PSCREEN,
  KC_NO,KC_NO,KC_MS_WH_LEFT,KC_MS_UP,KC_MS_WH_RIGHT,KC_NO,KC_NO,
  KC_LALT,KC_LCTRL,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_TRNS,KC_TRNS,

  KC_NO,KC_NO,
  KC_NO,
  KC_APP,KC_DELETE,KC_NO,


  KC_NO,KC_F16,KC_F17,KC_F18,KC_F19,KC_F20,KC_NO,
  KC_NO,KC_NO,KC_MS_WH_UP,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_NO,KC_MS_BTN1,KC_MS_BTN3,KC_MS_BTN2,KC_LSHIFT,KC_NO,
  KC_NO,KC_NO,KC_MS_WH_DOWN,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_TRNS,KC_TRNS,

  KC_NO,KC_NO,
  KC_NO,
  KC_NO,KC_PSCREEN,KC_INS
  ),
[GAME] = LAYOUT_ergodox(
  KC_ESCAPE,KC_1,KC_2,KC_3,KC_4,KC_5,KC_NO,
  KC_GRV,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_NO,
  KC_LSHIFT,KC_A,KC_S,KC_D,KC_F,KC_G,
  KC_LCTRL,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_NO,
  KC_NO,KC_LGUI,KC_LALT,KC_TRNS,KC_TRNS,

  KC_NO,KC_NO,
  KC_NO,
  KC_SPACE,KC_BSPACE,KC_NO,


  KC_NO,KC_6,KC_7,KC_8,KC_9,KC_0,DF(0),
  KC_NO,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_RALT,
  KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_RSHIFT,
  KC_NO,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RCTRL,
  KC_TRNS,KC_TRNS,KC_RALT,KC_TRNS,KC_TRNS,

  KC_NO,KC_NO,
  KC_NO,
  KC_NO,KC_TAB,KC_ENTER
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_on();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    if(layer & 1) {
        ergodox_right_led_1_on();
    } else {
        ergodox_right_led_1_off();
    }

    if(layer & 2) {
        ergodox_right_led_2_on();
    } else {
        ergodox_right_led_2_off();
    }

    if(layer & 4) {
        ergodox_right_led_3_on();
    } else {
        ergodox_right_led_3_off();
    }

};
