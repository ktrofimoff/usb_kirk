
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: default
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.     ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|     |Pwr|Slp|Wak|
     * `---'   `---------------' `---------------' `---------------' `-----------'     `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspa| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |Del|End|PgD| |  7|  8|  9|   |
     * |-----------------------------------------------------------| `-----------' |-----------|  +|
     * |Act0  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|Ent|
     * |Ctrl |Gui |Alt |         Fn1           |Alt |Gui |Menu|Ctrl| |Lef|Dow|Rig| |      0|  .|   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    [0] = KEYMAP(
          ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,
          ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
          TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,FN17,     DEL, END, PGDN,    P7,  P8,  P9,
          FN3, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     FN5,                         P4,  P5,  P6,  PPLS,
          FN2, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          LSFT,          UP,           P1,  P2,  P3,
          FN1, LGUI,LALT,          FN0,                     LGUI,LALT,FN1, LCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

    /* Layer 1: Text Edit, Window navigation
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.     ,-----------.
     * |   |   |   |   |   |   | |   |   |   |   | |   |   |   |   | |   |   |   |     |   |   |   |
     * `---'   `---------------' `---------------' `---------------' `-----------'     `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |    `|   |   |   |   |   |   |PgU|Up |PgD|PrS|   |   |     | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| `-----------' |-----------|   |
     * |      |   |   |   |   |   |Hom|Lef|Dow|Rig|End|   |        |               |   |   |   |   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |        |   |   |   |   |   |   |Men|   |   |   |          |     |   |     |   |   |   |   |
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |     |    |    |                       |    |    |   |     | |   |   |   | |       |   |   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    [1] = KEYMAP(
          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,
          GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
          FN7, FN6, FN14,FN15,FN16,NO,  NO,  PGUP,UP,  PGDN,PSCR,NO,  NO,  TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
          FN4, NO,  FN11,FN12,FN13,NO,  HOME,LEFT,DOWN,RGHT,END, NO,       TRNS,                        TRNS,TRNS,TRNS,TRNS,
          TRNS,FN8, FN9, FN10,NO,  NO,  NO,  APP, NO,  NO,  NO,            TRNS,          TRNS,         TRNS,TRNS,TRNS,
          TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),
    
    /* Layer 1: System & Media key
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.     ,-----------.
     * |   |   |   |   |   |   | |   |   |   |   | |   |   |   |   | |   |   |   |     |   |   |   |
     * `---'   `---------------' `---------------' `---------------' `-----------'     `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |     |   |MwU|McU|MwD|   |   |   |   |   |   |   |   |     | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| `-----------' |-----------|   |
     * |      |MwL|McL|McD|McR|MwR|   |Ac0|Ac1|Ac1|   |   |        |               |   |   |   |   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |        |Mb3|Mb5|Mb2|Mb4|   |   |   |   |   |   |          |     |   |     |   |   |   |   |
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |     |    |    |                       |    |    |   |     | |   |   |   | |       |   |   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    [2] = KEYMAP(
          NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,            TRNS,TRNS,TRNS,
          MUTE,VOLD,VOLU,MPRV,MSTP,MPLY,MNXT,NO,  NO,  NO,  NO,  NO,  NO,  TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
          NO,  MAIL,CALC,MYCM,WH_D,NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
          NO,  WSCH,WHOM,WBAK,WFWD,WSTP,WREF,WFAV,NO,  NO,  NO,  NO,       TRNS,                        TRNS,TRNS,TRNS,TRNS,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,            TRNS,          TRNS,         TRNS,TRNS,TRNS,
          TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),
};


/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0]  = ACTION_LAYER_TAP_KEY(1, KC_SPC),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_MODS_TAP_TOGGLE(MOD_LSFT),
    [3]  = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPC),
    [4]  = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_DEL),
    [5]  = ACTION_MODS_TAP_KEY(MOD_LALT, KC_ENT),
    [6]  = ACTION_MODS_KEY(MOD_LALT, KC_F4),
    [7]  = ACTION_MODS_KEY(MOD_LGUI, KC_W),
    [8]  = ACTION_MODS_KEY(MOD_LGUI | MOD_LALT, KC_P1),
    [9]  = ACTION_MODS_KEY(MOD_LGUI | MOD_LALT, KC_P2),
    [10] = ACTION_MODS_KEY(MOD_LGUI | MOD_LALT, KC_P3),
    [11] = ACTION_MODS_KEY(MOD_LGUI | MOD_LALT, KC_P4),
    [12] = ACTION_MODS_KEY(MOD_LGUI | MOD_LALT, KC_P5),
    [13] = ACTION_MODS_KEY(MOD_LGUI | MOD_LALT, KC_P6),
    [14] = ACTION_MODS_KEY(MOD_LGUI | MOD_LALT, KC_P7),
    [15] = ACTION_MODS_KEY(MOD_LGUI | MOD_LALT, KC_P8),
    [16] = ACTION_MODS_KEY(MOD_LGUI | MOD_LALT, KC_P9),
    [17] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_BSLS),
};


/* translates key to keycode */
uint8_t keymap_key_to_keycode(uint8_t layer, keypos_t key)
{
    return pgm_read_byte(&keymaps[(layer)][(key.row)][(key.col)]);
}

/* translates Fn keycode to action */
action_t keymap_fn_to_action(uint8_t keycode)
{
    return (action_t){ .code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]) };
}
