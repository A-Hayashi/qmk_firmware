#include QMK_KEYBOARD_H
#include "keymap_jp.h" 

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1
#define SYMB 2
#define GAME 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  | Tab  |   Q  |   W  |   E  |   R  |  T   |   |  Y   |   U  |   I  |   O  |   P  |   [  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Del  | RCtrl|   A  |   S  |   D  |   F  |  G   |   |  H   |   J  |   K  |   L  |   ;  |   ]  | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB | LSft |   Z  |   X  |   C  |   V  |  B   |   |  N   |   M  |   ,  |   .  |   /  |  UP  | RSft |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | LGUI | LCtrl|   `  |   \  | LAlt | META |Space |   |Space |   '  |   -  |   =  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_TAB,   KC_Q,     KC_W,    KC_E,    KC_R,     KC_T,     XXXXXXX,   KC_Y,   KC_U,      KC_I,    KC_O,   KC_P,    JP_AT,    JP_LBRC, \
    KC_LCTL,  KC_A,     KC_S,    KC_D,    KC_F,     KC_G,     XXXXXXX,   KC_H,   KC_J,      KC_K,    KC_L,   JP_SCLN, JP_COLN,  JP_RBRC, \
    KC_LSFT,  KC_Z,     KC_X,    KC_C,    KC_V,     KC_B,     XXXXXXX,   KC_N,   KC_M,      JP_COMM, JP_DOT, JP_SLSH, JP_BSLS,   XXXXXXX, \
    XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, KC_LALT,  MO(META), KC_SPC,    KC_SPC, MO(SYMB),  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX \
  ),

  /* META
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Reset|   1  |   2  |   3  |   4  |   5  |  [   |   |  ]   |   6  |   7  |   8  |   9  |   0  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Del  |  F1  |      |Muhen | Henk |      |      |   | Left | Down |  Up  |Right |      |      | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB |  F2  |  F3  |  F4  |  F5  |  F6  |  {   |   |  }   |  F7  |  F8  |  F9  | F10  | F11  | F12  |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | LGUI | LCtrl|   `  |   \  | LAlt | META |Space |   |Space |   '  |   -  |   =  |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    _______,  XXXXXXX,  KC_ESC,   KC_SPC,   JP_ZHTG,  XXXXXXX,  XXXXXXX,  KC_PGUP,  KC_HOME,  KC_UP,    KC_END,   XXXXXXX,  JP_GRV,   JP_LCBR,   \
    _______,  XXXXXXX,  KC_TAB,   KC_DEL,   KC_BSPC,  XXXXXXX,  XXXXXXX,  KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  JP_ASTR,  JP_PLUS,  JP_RCBR,  \
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  JP_LT,    JP_GT,    JP_QUES,  JP_UNDS,  \
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LALT,  XXXXXXX,  XXXXXXX,  KC_ENT,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX   \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  |   !  |   @  |   #  |   $  |   %  |  [   |   |  ]   |   ^  |   &  |   *  |   (  |   )  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Del  |      |      |      |      |      |  (   |   |  )   |      |      |      |      |      | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB |      |      |      |      |      |  {   |   |  }   |      |      |      |      |  UP  | Sft  |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | LGUI | LCtrl|   `  |   \  | LAlt | META |Space |   |Space |   '  |   -  |   =  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     JP_MINS,  JP_CIRC,  JP_BSLS,   \
    _______,  JP_EXLM,  JP_DQT,   JP_HASH,  JP_DLR,   JP_PERC,  JP_AMPR,  JP_QUOT,  JP_LPRN,  JP_RPRN,  XXXXXXX,  JP_EQL,   JP_TILD,  JP_PIPE,  \
    _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   XXXXXXX,  \
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LALT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX   \
  )

};

