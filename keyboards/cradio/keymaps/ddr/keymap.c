#include QMK_KEYBOARD_H

// Layer Definitions
enum layers {
    _WIN = 0,
    _MAC,
    _LOW_L,
    _RAI_L,
    _BLE_L,
    _ARR_L,
    _NUM_L
};

// Keymaps definition
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_WIN] = LAYOUT_split_3x5_2(
        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,
        LWIN_T(KC_A),   LALT_T(KC_S),   LCTL_T(KC_D),   LSFT_T(KC_F),   KC_G,           KC_H,           RSFT_T(KC_J),   RCTL_T(KC_K),   RALT_T(KC_L),   RGUI_T(KC_QUOT),
        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,
                                                        LT(_ARR_L, KC_ENT), LT(_LOW_L, KC_TAB), MO(_RAI_L), KC_SPC
    ),
    [_MAC] = LAYOUT_split_3x5_2(
        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,
        LGUI_T(KC_A),   LALT_T(KC_S),   LCTL_T(KC_D),   LSFT_T(KC_F),   KC_G,           KC_H,           RSFT_T(KC_J),   RCTL_T(KC_K),   LALT_T(KC_L),   RGUI_T(KC_QUOT),
        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,
                                                        LT(_ARR_L, KC_ENT), LT(_LOW_L, KC_TAB), MO(_RAI_L), KC_SPC
    ),
    [_LOW_L] = LAYOUT_split_3x5_2(
        LSFT(KC_1),     LSFT(KC_2),     LSFT(KC_3),     LSFT(KC_4),     LSFT(KC_5),     LSFT(KC_6),     LSFT(KC_7),     LSFT(KC_8),     LSFT(KC_9),     LSFT(KC_0),
        RALT(KC_1),     RALT(KC_2),     RALT(KC_3),     RALT(KC_4),     RALT(KC_5),     RALT(KC_6),     LSFT(KC_RBRC),  LSFT(KC_EQL),   LSFT(KC_MINS),  KC_EQL,
        LSFT(KC_GRV),   RALT(KC_GRV),   KC_NUHS,        KC_TRNS,        LGUI(LSFT(KC_S)), KC_SCLN,      KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_CAPS,
                                                        KC_ENT,         KC_TRNS,        MO(_ARR_L),     MO(_NUM_L)
    ),
    [_RAI_L] = LAYOUT_split_3x5_2(
        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,
        KC_GRV,         KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        RALT(KC_QUOT),  RALT(KC_NUHS),  RALT(KC_LBRC),  RALT(KC_RBRC),
        KC_LSFT,        KC_TRNS,        LSFT(KC_NUHS),  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_NUBS,        LSFT(KC_NUBS),  KC_TRNS,        KC_TRNS,
                                                        KC_BSPC,        MO(_NUM_L),     KC_TRNS,        KC_TRNS
    ),
    [_BLE_L] = LAYOUT_split_3x5_2(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,        KC_N,           KC_TRNS,        KC_TRNS,        KC_TRNS,        QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_TRNS,
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS
    ),
    [_ARR_L] = LAYOUT_split_3x5_2(
        KC_TAB,         KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_BSPC,
        KC_ESC,         LALT_T(KC_S),   LCTL_T(KC_D),   LSFT_T(KC_F),   KC_TRNS,        KC_TRNS,        KC_LEFT,        KC_DOWN,        KC_RGHT,        KC_LBRC,
        LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     KC_TRNS,        KC_PGDN,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_ENT,
                                                        KC_BSPC,        KC_TRNS,        MS_BTN1,        MS_BTN2
    ),
    [_NUM_L] = LAYOUT_split_3x5_2(
        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRNS,        KC_TRNS,        KC_7,           KC_8,           KC_9,           LSFT(KC_RBRC),
        KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRNS,        KC_TRNS,        KC_4,           KC_5,           KC_6,           KC_RBRC,
        KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRNS,        KC_TRNS,        KC_1,           KC_2,           KC_3,           KC_SLSH,
                                                        KC_TRNS,        MO(_BLE_L),     TG(_MAC),       KC_DOT
    )
};

// Custom dynamic Tapping Terms (Hold-Tap behaviors)
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_F):
        case RSFT_T(KC_J):
            return 180;
        case LGUI_T(KC_A):
        case LALT_T(KC_S):
        case LCTL_T(KC_D):
        case RCTL_T(KC_K):
        case RALT_T(KC_L):
        case RGUI_T(KC_QUOT):
            return 450;
        case LT(_ARR_L, KC_ENT):
        case LT(_LOW_L, KC_TAB):
            return 200;
        default:
            return TAPPING_TERM;
    }
}

// Combos Definitions
enum combos {
    CNTRL_ALT_SUPR_COMBO,
    GRAVE_COMBO,
    APOSTROF_COMBO,
    TAB_COMBO,
    ESC_COMBO,
    ENTER_COMBO,
    SUPR_COMBO,
    DELETE_COMBO
};

const uint16_t PROGMEM cntrl_alt_supr_combo[] = {KC_Y, KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM grave_combo[]          = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM apostrof_combo[]       = {RCTL_T(KC_K), RALT_T(KC_L), COMBO_END};
const uint16_t PROGMEM tab_combo[]            = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM esc_combo[]            = {LALT_T(KC_S), LCTL_T(KC_D), COMBO_END};
const uint16_t PROGMEM enter_combo[]          = {RSFT_T(KC_J), RCTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM supr_combo[]           = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM delete_combo[]         = {KC_U, KC_I, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [CNTRL_ALT_SUPR_COMBO] = COMBO(cntrl_alt_supr_combo, LALT(LCTL(KC_DEL))),
    [GRAVE_COMBO]          = COMBO(grave_combo, KC_LBRC),
    [APOSTROF_COMBO]       = COMBO(apostrof_combo, KC_MINS),
    [TAB_COMBO]            = COMBO(tab_combo, KC_TAB),
    [ESC_COMBO]            = COMBO(esc_combo, KC_ESC),
    [ENTER_COMBO]          = COMBO(enter_combo, KC_ENT),
    [SUPR_COMBO]           = COMBO(supr_combo, KC_BSPC),
    [DELETE_COMBO]         = COMBO(delete_combo, KC_DEL)
};
