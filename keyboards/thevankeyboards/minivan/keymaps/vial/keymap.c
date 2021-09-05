#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT( /* Qwerty */
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENTER,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
    KC_LCTL, _______, KC_LGUI,                   KC_ENT,  KC_SPC,                    KC_RALT, KC_ESC,  _______
  ),
  LAYOUT( /* LAYER 1 */
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    _______, KC_BSLS, KC_QUOT, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_DOWN, KC_UP,   KC_LEFT, KC_RGHT, _______,
    _______, KC_ESC,  _______, KC_PSCR, _______, _______, _______, KC_MSTP, KC_MPLY, KC_MPRV, KC_MNXT, KC_RSFT,
    _______, KC_LGUI, _______,                   _______, _______,                   _______, _______, _______
  ),
  LAYOUT( /* LAYER 2 */
    _______, _______,  _______,  _______, _______, _______, _______, KC_7,    KC_8,    KC_9,    KC_0,    _______,
    KC_ESC,  KC_PIPE, KC_DQUO, KC_UNDS, KC_PLUS, _______, _______, KC_4,    KC_5,    KC_6,    KC_VOLU, KC_ENT,
    _______, _______, _______, _______, _______, _______, KC_0,    KC_1,    KC_2,    KC_3,    KC_VOLD, _______,
    _______, _______, _______,                   _______, _______,                   _______, _______, _______
  ),
  LAYOUT( /* LAYER 3 */
    _______, _______, _______, _______, _______, _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,
    KC_ESC,  _______, _______, _______, _______, _______, _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______,
    KC_LSFT, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
    _______, KC_LSFT, KC_B,                      KC_SPC,  KC_C,                      _______, _______, _______
  )
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {0,1,2,3,4,5,6,7,8,9,10,11},
  {23,22,21,20,19,18,17,16,15,14,13,12},
  {24,25,26,27,28,29,30,31,32,33,34,35},
  {45,44,43,42,41,40,39,38,37,36},
}, {
  // LED Index to Physical Position
  {0,0},{20,0},{40,0},{61,0},{81,0},{101,0},{122,0},{142,0},{162,0},{183,0},{203,0},{224,0},
  {224,21},{203,21},{183,21},{162,21},{142,21},{122,21},{101,21},{81,21},{61,21},{40,21},{20,21},{0,21},
  {0,42},{20,42},{40,42},{61,42},{81,42},{101,42},{122,42},{142,42},{162,42},{183,42},{203,42},{224,42},
  {224,64},{203,64},{183,64},{162,64},{122,64},{101,64},{61,64},{40,64},{20,64},{0,64},
  {10,48},{65,48},{142,48},{210,48},{210,10},{142,10},{65,10},{10,10},
}, {
  // LED Index to Flag
  1,4,4,4,4,4,4,4,4,4,4,1,1,4,4,4,4,4,4,4,4,4,4,1,1,4,4,4,4,4,4,4,4,4,4,1,1,1,1,1,4,4,4,1,1,1,2,2,2,2,2,2,2,2
} };
