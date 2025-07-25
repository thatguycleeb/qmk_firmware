#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,                                                     KC_7, KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                                                     KC_Y, KC_U,   KC_I,   KC_O,   KC_P,   KC_BSLS,
        KC_ESC, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,     KC_LCTL,KC_LALT,              KC_RGUI,KC_RCTL,  KC_H, KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,             KC_HOME,              KC_PGUP,          KC_N, KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,
                KC_GRV, MO(1),  KC_LEFT,KC_RIGHT,KC_BSPC, KC_DEL, KC_END,               KC_PGDN,KC_ENT, KC_SPC, KC_DOWN,KC_UP,  KC_LBRC,KC_RBRC                                              
        ),

        [1] = LAYOUT(
        KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,                                                  KC_F7, KC_F8,   KC_F9,  KC_F10, KC_F11, KC_F12,
        KC_CAPS,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                KC_MPLY,KC_MPRV,KC_MNXT,KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO, KC_NO,                 KC_NO,  KC_NO,  KC_MUTE,KC_VOLD,KC_VOLU,KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,           KC_NO,                 KC_NO,          KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,
                KC_NO,  KC_NO,  MO(2),  KC_NO,  KC_NO,    KC_NO, KC_NO,                 KC_NO,  KC_NO,  KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO                                              
        ),

        [2] = LAYOUT(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                  KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                  KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO, KC_NO,                 KC_NO,  KC_NO,  KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,           KC_NO,                 KC_NO,          KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,
                KC_NO,  KC_NO,  KC_NO,  MO(3),  KC_NO,    KC_NO, KC_NO,                 KC_NO,  KC_NO,  KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO                                              
        ),

        [3] = LAYOUT(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                  KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO,  QK_BOOT,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                  KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO, KC_NO,                 KC_NO,  KC_NO,  KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,           KC_NO,                 KC_NO,          KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,
                KC_NO,  KC_NO,  KC_NO,  MO(3),  KC_NO,    KC_NO, KC_NO,                 KC_NO,  KC_NO,  KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO                                              
        )

};