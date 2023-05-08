#include QMK_KEYBOARD_H
#include "color.h"

enum layer_number {
  _BASE,
  _SPCLY,
  _FNLY,
  _ADJUST,
};

#define KC_SPLO  LT(_SPCLY, KC_SPC)
#define KC_FNLY  MO(_FNLY)
#define KC_AJST  MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT(
		 KC_ESC,     KC_1,    KC_2,     KC_3,    KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSPC,  KC_INS, KC_AJST,
		 KC_TAB,     KC_Q,    KC_W,     KC_E,    KC_R,     KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS,  KC_DEL,  KC_END,
		 KC_GRV,    KC_A,    KC_S,     KC_D,    KC_F,     KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT, KC_PAUS, KC_PGUP,
		 KC_LSFT,    KC_Z,    KC_X,     KC_C,    KC_V,     KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_LSFT,   KC_UP, KC_PGDN,
		 KC_LCTL, KC_LWIN, KC_LALT,  KC_SPLO, KC_RALT,  KC_FNLY, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

	[_SPCLY] = LAYOUT(
		A(KC_F4),     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,  KC_F8,  KC_F9,   KC_F10, KC_F11,   KC_F12, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TAB,  KC_BACKSLASH, KC_UP,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  C(LSFT(KC_P)), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,  KC_LEFT,  KC_DOWN, KC_RGHT, LSFT(KC_RBRC), LSFT(KC_BSLS),  KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, LCA(KC_LEFT), LCA(KC_RGHT), LCA(LSFT(KC_C)), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_HOME, KC_TRNS, KC_END),

	[_FNLY] = LAYOUT(
		KC_TRNS, KC_BRID, KC_BRIU, KC_TRNS, KC_SLEP, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_DEL, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[_ADJUST] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,   RESET, KC_TRNS, EEPROM_RESET, AG_SWAP, AG_NORM, KC_TRNS, OUT_USB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_CAPS, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS, RGB_M_P, RGB_M_B, RGB_M_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};


#define RGB_MONOKAI_DARKPINK 250, 37, 115
#define RGB_MONOKAI_LEMON 255, 217, 102
#define RGB_MONOKAI_GOLD 255, 150, 31
#define RGB_MONOKAI_OCEAN 103, 217, 240
#define RGB_MONOKAI_GREEN 160, 227, 27
// #define RGB_MONOKAI_MAGENTA 174, 130, 255
#define RGB_PASTEL_RED 230, 32, 55

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max)
{
    if (get_highest_layer(layer_state) == _BASE) {
        //bcspc
        rgb_matrix_set_color(13, RGB_PASTEL_RED);
        //del
        rgb_matrix_set_color(30, RGB_PASTEL_RED);
    }

    if (get_mods() & MOD_MASK_ALT) {
        // back-slash
        rgb_matrix_set_color(17, RGB_MONOKAI_LEMON);
        //[]
        //rgb_matrix_set_color(36, RGB_MONOKAI_LEMON);
        //rgb_matrix_set_color(37, RGB_MONOKAI_LEMON);
        //`
        rgb_matrix_set_color(38, RGB_MONOKAI_GOLD);
        //'
        //rgb_matrix_set_color(39, RGB_MONOKAI_LEMON);

        //$
        rgb_matrix_set_color(42, RGB_MONOKAI_GOLD);
        // {} B N
        rgb_matrix_set_color(52, RGB_MONOKAI_OCEAN);
        rgb_matrix_set_color(53, RGB_MONOKAI_OCEAN);
        // <>
        rgb_matrix_set_color(55, RGB_MONOKAI_LEMON);
        rgb_matrix_set_color(56, RGB_MONOKAI_LEMON);
        // *
        rgb_matrix_set_color(57, RGB_MONOKAI_OCEAN);
    }

    // if (get_mods() & MOD_MASK_SHIFT) {
    //     rgb_matrix_set_color(29, RGB_MONOKAI_GREEN);
    //     rgb_matrix_set_color(28, RGB_MONOKAI_GREEN);
    // }

    if (get_highest_layer(layer_state) == _SPCLY) {
        //lemon layer indicator
        rgb_matrix_set_color(64, RGB_MONOKAI_LEMON);
        //F1-12
        rgb_matrix_set_color(0, RGB_MONOKAI_LEMON);
        rgb_matrix_set_color(1, RGB_MONOKAI_OCEAN);
        rgb_matrix_set_color(2, RGB_MONOKAI_LEMON);
        rgb_matrix_set_color(3, RGB_MONOKAI_OCEAN);
        rgb_matrix_set_color(4, RGB_MONOKAI_OCEAN);
        rgb_matrix_set_color(5, RGB_MONOKAI_LEMON);
        rgb_matrix_set_color(6, RGB_MONOKAI_OCEAN);
        rgb_matrix_set_color(7, RGB_MONOKAI_OCEAN);
        rgb_matrix_set_color(8, RGB_MONOKAI_OCEAN);
        rgb_matrix_set_color(9, RGB_MONOKAI_OCEAN);
        rgb_matrix_set_color(10, RGB_MONOKAI_OCEAN);
        rgb_matrix_set_color(11, RGB_MONOKAI_OCEAN);
        rgb_matrix_set_color(12, RGB_MONOKAI_LEMON);

        //()
        rgb_matrix_set_color(36, RGB_MONOKAI_GREEN);
        rgb_matrix_set_color(37, RGB_MONOKAI_GREEN);

        //arrows home-end
        rgb_matrix_set_color(68, RGB_MONOKAI_DARKPINK);
        rgb_matrix_set_color(70, RGB_MONOKAI_DARKPINK);

        //YX switch monitor
        rgb_matrix_set_color(48, RGB_MONOKAI_LEMON);
        rgb_matrix_set_color(49, RGB_MONOKAI_LEMON);
        //C for copy class reference
        rgb_matrix_set_color(50, RGB_MONOKAI_OCEAN);


        //popup action menu phpstorm+vscode
        rgb_matrix_set_color(26, RGB_MONOKAI_LEMON);

        //Q = alt+F4
        //rgb_matrix_set_color(17, RGB_PASTEL_RED);
    }

    if (get_highest_layer(layer_state) == _FNLY) {
        //print screen
        rgb_matrix_set_color(26, RGB_MONOKAI_LEMON);

        //bcspc
        rgb_matrix_set_color(13, RGB_MONOKAI_DARKPINK);
    }
}
