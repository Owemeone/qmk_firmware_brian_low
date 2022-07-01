// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.h
// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

char wpm_str[10];

enum layers
{
  BASE,
  BUTTON,
  MEDIA,
  NAV,
  MOUSE,
  SYM,
  NUM,
  FUN,
  GAME
};

#if defined MIRYOKU_CLIPBOARD_FUN
#define U_RDO KC_AGIN
#define U_PST KC_PSTE
#define U_CPY KC_COPY
#define U_CUT KC_CUT
#define U_UND KC_UNDO
#elif defined MIRYOKU_CLIPBOARD_MAC
#define U_RDO SCMD(KC_Z)
#define U_PST LCMD(KC_V)
#define U_CPY LCMD(KC_C)
#define U_CUT LCMD(KC_X)
#define U_UND LCMD(KC_Z)
#elif defined MIRYOKU_CLIPBOARD_WIN
#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)
#else
#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO
#endif

// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.c
// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if defined MIRYOKU_LAYERS_FLIP
    [BASE] = LAYOUT_miryoku(
#if defined MIRYOKU_ALPHAS_AZERTY
        KC_A, KC_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        LGUI_T(KC_Q), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_M),
        LT(BUTTON, KC_W), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_COMM, KC_DOT, ALGR_T(KC_SLSH), LT(BUTTON, KC_QUOT),
        U_NP, U_NP, LT(FUN, KC_DEL), LT(NUM, KC_BSPC), LT(SYM, KC_ENT), LT(MOUSE, KC_TAB), LT(NAV, KC_SPC), LT(MEDIA, KC_ESC), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_COLEMAK
        KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_D, KC_H, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O),
        LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(FUN, KC_DEL), LT(NUM, KC_BSPC), LT(SYM, KC_ENT), LT(MOUSE, KC_TAB), LT(NAV, KC_SPC), LT(MEDIA, KC_ESC), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_COLEMAKDHK
        KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_K, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O),
        LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_M, KC_H, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(FUN, KC_DEL), LT(NUM, KC_BSPC), LT(SYM, KC_ENT), LT(MOUSE, KC_TAB), LT(NAV, KC_SPC), LT(MEDIA, KC_ESC), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_DVORAK
        KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L,
        LGUI_T(KC_A), LALT_T(KC_O), LCTL_T(KC_E), LSFT_T(KC_U), KC_I, KC_D, RSFT_T(KC_H), RCTL_T(KC_T), RALT_T(KC_N), RGUI_T(KC_S),
        LT(BUTTON, KC_SLSH), ALGR_T(KC_Q), KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, ALGR_T(KC_V), LT(BUTTON, KC_Z),
        U_NP, U_NP, LT(FUN, KC_DEL), LT(NUM, KC_BSPC), LT(SYM, KC_ENT), LT(MOUSE, KC_TAB), LT(NAV, KC_SPC), LT(MEDIA, KC_ESC), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_HALMAK
        KC_W, KC_L, KC_R, KC_B, KC_Z, KC_QUOT, KC_Q, KC_U, KC_D, KC_J,
        LGUI_T(KC_S), LALT_T(KC_H), LCTL_T(KC_N), LSFT_T(KC_T), KC_COMM, KC_DOT, RSFT_T(KC_A), RCTL_T(KC_E), RALT_T(KC_O), RGUI_T(KC_I),
        LT(BUTTON, KC_F), ALGR_T(KC_M), KC_V, KC_C, KC_SLSH, KC_G, KC_P, KC_X, ALGR_T(KC_K), LT(BUTTON, KC_Y),
        U_NP, U_NP, LT(FUN, KC_DEL), LT(NUM, KC_BSPC), LT(SYM, KC_ENT), LT(MOUSE, KC_TAB), LT(NAV, KC_SPC), LT(MEDIA, KC_ESC), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_WORKMAN
        KC_Q, KC_D, KC_R, KC_W, KC_B, KC_J, KC_F, KC_U, KC_P, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_H), LSFT_T(KC_T), KC_G, KC_Y, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_O), RGUI_T(KC_I),
        LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_M, KC_C, KC_V, KC_K, KC_L, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(FUN, KC_DEL), LT(NUM, KC_BSPC), LT(SYM, KC_ENT), LT(MOUSE, KC_TAB), LT(NAV, KC_SPC), LT(MEDIA, KC_ESC), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_QWERTY
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_QUOT),
        LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(FUN, KC_DEL), LT(NUM, KC_BSPC), LT(SYM, KC_ENT), LT(MOUSE, KC_TAB), LT(NAV, KC_SPC), LT(MEDIA, KC_ESC), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_QWERTZ
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P,
        LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_QUOT),
        LT(BUTTON, KC_Y), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(FUN, KC_DEL), LT(NUM, KC_BSPC), LT(SYM, KC_ENT), LT(MOUSE, KC_TAB), LT(NAV, KC_SPC), LT(MEDIA, KC_ESC), U_NP, U_NP
#else
        KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O),
        LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(FUN, KC_DEL), LT(NUM, KC_BSPC), LT(SYM, KC_ENT), LT(MOUSE, KC_TAB), LT(NAV, KC_SPC), LT(MEDIA, KC_ESC), U_NP, U_NP
#endif
        ),
#if defined MIRYOKU_NAV_INVERTEDT
    [NAV] = LAYOUT_miryoku(
        KC_PGUP, KC_HOME, KC_UP, KC_END, KC_INS, U_NA, U_NA, U_NA, U_NA, RESET,
        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_CAPS, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_NA, U_NA, U_NA, KC_ALGR, U_NA,
        U_NP, U_NP, KC_DEL, KC_BSPC, KC_ENT, U_NA, U_NA, U_NA, U_NP, U_NP),
    [MOUSE] = LAYOUT_miryoku(
        KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, U_NU, U_NA, U_NA, U_NA, U_NA, RESET,
        KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, U_NU, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_NA, U_NA, U_NA, KC_ALGR, U_NA,
        U_NP, U_NP, KC_BTN2, KC_BTN3, KC_BTN1, U_NA, U_NA, U_NA, U_NP, U_NP),
    [MEDIA] = LAYOUT_miryoku(
        U_NU, U_NU, KC_VOLU, U_NU, U_NU, U_NA, U_NA, U_NA, U_NA, RESET,
        U_NU, KC_MPRV, KC_VOLD, KC_MNXT, U_NU, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, U_NA, U_NA, U_NA, KC_ALGR, U_NA,
        U_NP, U_NP, KC_MUTE, KC_MPLY, KC_MSTP, U_NA, U_NA, U_NA, U_NP, U_NP),
#else
    [NAV] = LAYOUT_miryoku(
        KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS, U_NA, U_NA, U_NA, U_NA, RESET,
        KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_CAPS, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_NA, U_NA, U_NA, KC_ALGR, U_NA,
        U_NP, U_NP, KC_DEL, KC_BSPC, KC_ENT, U_NA, U_NA, U_NA, U_NP, U_NP),
    [MOUSE] = LAYOUT_miryoku(
        KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU, U_NA, U_NA, U_NA, U_NA, RESET,
        KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_NA, U_NA, U_NA, KC_ALGR, U_NA,
        U_NP, U_NP, KC_BTN2, KC_BTN3, KC_BTN1, U_NA, U_NA, U_NA, U_NP, U_NP),
    [MEDIA] = LAYOUT_miryoku(
        RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, U_NA, U_NA, U_NA, U_NA, RESET,
        KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        U_NU, U_NU, U_NU, U_NU, U_NU, U_NA, U_NA, U_NA, KC_ALGR, U_NA,
        U_NP, U_NP, KC_MUTE, KC_MPLY, KC_MSTP, U_NA, U_NA, U_NA, U_NP, U_NP),
#endif
    [NUM] = LAYOUT_miryoku(
        RESET, U_NA, U_NA, U_NA, U_NA, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_EQL, KC_4, KC_5, KC_6, KC_SCLN,
        U_NA, KC_ALGR, U_NA, U_NA, U_NA, KC_BSLS, KC_1, KC_2, KC_3, KC_GRV,
        U_NP, U_NP, U_NA, U_NA, U_NA, KC_MINS, KC_0, KC_DOT, U_NP, U_NP),
    [SYM] = LAYOUT_miryoku(
        RESET, U_NA, U_NA, U_NA, U_NA, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_PLUS, KC_DLR, KC_PERC, KC_CIRC, KC_COLN,
        U_NA, KC_ALGR, U_NA, U_NA, U_NA, KC_PIPE, KC_EXLM, KC_AT, KC_HASH, KC_TILD,
        U_NP, U_NP, U_NA, U_NA, U_NA, KC_UNDS, KC_LPRN, KC_RPRN, U_NP, U_NP),
    [FUN] = LAYOUT_miryoku(
        RESET, U_NA, U_NA, U_NA, U_NA, KC_PSCR, KC_F7, KC_F8, KC_F9, KC_F12,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_SLCK, KC_F4, KC_F5, KC_F6, KC_F11,
        U_NA, KC_ALGR, U_NA, U_NA, U_NA, KC_PAUS, KC_F1, KC_F2, KC_F3, KC_F10,
        U_NP, U_NP, U_NA, U_NA, U_NA, KC_TAB, KC_SPC, KC_APP, U_NP, U_NP),
#else
    [BASE] = LAYOUT_miryoku(
#if defined MIRYOKU_ALPHAS_AZERTY
        KC_A, KC_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        LGUI_T(KC_Q), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_M),
        LT(BUTTON, KC_W), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_COMM, KC_DOT, ALGR_T(KC_SLSH), LT(BUTTON, KC_QUOT),
        U_NP, U_NP, LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), LT(MOUSE, KC_TAB), LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_COLEMAK
        KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_D, KC_H, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O),
        LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), LT(MOUSE, KC_TAB), LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_COLEMAKDHK
        KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_K, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O),
        LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_M, KC_H, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), LT(MOUSE, KC_TAB), LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_DVORAK
        KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L,
        LGUI_T(KC_A), LALT_T(KC_O), LCTL_T(KC_E), LSFT_T(KC_U), KC_I, KC_D, RSFT_T(KC_H), RCTL_T(KC_T), RALT_T(KC_N), RGUI_T(KC_S),
        LT(BUTTON, KC_SLSH), ALGR_T(KC_Q), KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, ALGR_T(KC_V), LT(BUTTON, KC_Z),
        U_NP, U_NP, LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), LT(MOUSE, KC_TAB), LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_HALMAK
        KC_W, KC_L, KC_R, KC_B, KC_Z, KC_QUOT, KC_Q, KC_U, KC_D, KC_J,
        LGUI_T(KC_S), LALT_T(KC_H), LCTL_T(KC_N), LSFT_T(KC_T), KC_COMM, KC_DOT, RSFT_T(KC_A), RCTL_T(KC_E), RALT_T(KC_O), RGUI_T(KC_I),
        LT(BUTTON, KC_F), ALGR_T(KC_M), KC_V, KC_C, KC_SLSH, KC_G, KC_P, KC_X, ALGR_T(KC_K), LT(BUTTON, KC_Y),
        U_NP, U_NP, LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), LT(MOUSE, KC_TAB), LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_WORKMAN
        KC_Q, KC_D, KC_R, KC_W, KC_B, KC_J, KC_F, KC_U, KC_P, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_H), LSFT_T(KC_T), KC_G, KC_Y, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_O), RGUI_T(KC_I),
        LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_M, KC_C, KC_V, KC_K, KC_L, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), LT(MOUSE, KC_TAB), LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_QWERTY
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_QUOT),
        LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), LT(MOUSE, KC_TAB), LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL), U_NP, U_NP
#elif defined MIRYOKU_ALPHAS_QWERTZ
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P,
        LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_QUOT),
        LT(BUTTON, KC_Y), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), LT(MOUSE, KC_TAB), LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL), U_NP, U_NP
#else
        KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O),
        LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH),
        U_NP, U_NP, LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), LT(MOUSE, KC_TAB), LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL), U_NP, U_NP
#endif
        ),
#if defined MIRYOKU_NAV_VI
    [NAV] = LAYOUT_miryoku(
        RESET, U_NA, U_NA, U_NA, U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_CAPS,
        U_NA, KC_ALGR, U_NA, U_NA, U_NA, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS,
        U_NP, U_NP, U_NA, U_NA, U_NA, KC_ENT, KC_BSPC, KC_DEL, U_NP, U_NP),
    [MOUSE] = LAYOUT_miryoku(
        RESET, U_NA, U_NA, U_NA, U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,
        U_NA, KC_ALGR, U_NA, U_NA, U_NA, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,
        U_NP, U_NP, U_NA, U_NA, U_NA, KC_BTN1, KC_BTN3, KC_BTN2, U_NP, U_NP),
    [MEDIA] = LAYOUT_miryoku(
        RESET, U_NA, U_NA, U_NA, U_NA, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,
        U_NA, KC_ALGR, U_NA, U_NA, U_NA, U_NU, U_NU, U_NU, U_NU, U_NU,
        U_NP, U_NP, U_NA, U_NA, U_NA, KC_MSTP, KC_MPLY, KC_MUTE, U_NP, U_NP),
#else
    [NAV] = LAYOUT_miryoku(
        RESET, U_NA, U_NA, U_NA, U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,
        U_NA, KC_ALGR, U_NA, U_NA, U_NA, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
        U_NP, U_NP, U_NA, U_NA, U_NA, KC_ENT, KC_BSPC, KC_DEL, U_NP, U_NP),
    [MOUSE] = LAYOUT_miryoku(
        RESET, U_NA, U_NA, U_NA, U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, U_NU, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
        U_NA, KC_ALGR, U_NA, U_NA, U_NA, U_NU, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
        U_NP, U_NP, U_NA, U_NA, U_NA, KC_BTN1, KC_BTN3, KC_BTN2, U_NP, U_NP),
    [MEDIA] = LAYOUT_miryoku(
        RESET, U_NA, U_NA, U_NA, U_NA, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, U_NU, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
        U_NA, KC_ALGR, U_NA, U_NA, U_NA, U_NU, U_NU, U_NU, U_NU, U_NU,
        U_NP, U_NP, U_NA, U_NA, U_NA, KC_MSTP, KC_MPLY, KC_MUTE, U_NP, U_NP),
#endif
    [NUM] = LAYOUT_miryoku(
        KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, U_NA, U_NA, U_NA, U_NA, RESET,
        KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, U_NA, U_NA, U_NA, KC_ALGR, U_NA,
        U_NP, U_NP, KC_DOT, KC_0, KC_MINS, U_NA, U_NA, U_NA, U_NP, U_NP),
    [SYM] = LAYOUT_miryoku(
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA, U_NA, U_NA, U_NA, RESET,
        KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, U_NA, U_NA, U_NA, KC_ALGR, U_NA,
        U_NP, U_NP, KC_LPRN, KC_RPRN, KC_UNDS, U_NA, U_NA, U_NA, U_NP, U_NP),
    [FUN] = LAYOUT_miryoku(
        KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, RESET,
        KC_F11, KC_F4, KC_F5, KC_F6, KC_SLCK, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, RGB_HUD, RGB_SAD, RGB_VAD, KC_ALGR, U_NA,
        U_NP, U_NP, KC_APP, KC_SPC, KC_TAB, U_NA, U_NA, U_NA, U_NP, U_NP),
#endif
    [BUTTON] = LAYOUT_miryoku(
        U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_RDO, U_PST, U_CPY, U_CUT, U_UND,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_RDO, U_PST, U_CPY, U_CUT, U_UND,
        U_NP, U_NP, KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN1, KC_BTN3, KC_BTN2, U_NP, U_NP),
    [GAME] = LAYOUT(
        KC_GRV,     KC_1,   KC_2,     KC_3,   KC_4,   KC_5,                     KC_6,     KC_7,   KC_8,     KC_9,   KC_0,     TG(GAME),
        KC_LALT,    KC_Q,   KC_W,     KC_E,   KC_R,   KC_T,                     KC_Y,     KC_U,   KC_I,     KC_O,   KC_P,     KC_RALT,
        KC_LCTL,    KC_A,   KC_S,     KC_D,   KC_F,   KC_G,                     KC_H,     KC_J,   KC_K,     KC_L,   KC_QUOT,  KC_RCTL,
        KC_LSFT,    KC_Z,   KC_X,     KC_C,   KC_V,   KC_B,   U_NU,     U_NU,   KC_N,     KC_M,   KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                            KC_LGUI,  U_NU,   KC_ESC, KC_SPC, KC_TAB,   KC_ENT, KC_BSPC,  KC_DEL, U_NU,     KC_RGUI)};

#ifdef OLED_ENABLE

static void render_logo(void)
{
  static const char PROGMEM logo[] = {
      0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x10, 0x00, 0x00, 0x00, 0x40, 0xe0, 0xe0, 0xc8, 0xfc, 0xfe,
      0xfe, 0xfc, 0xc8, 0xe0, 0xe0, 0x40, 0x00, 0x00, 0x00, 0x10, 0x60, 0xc0, 0x80, 0x00, 0x00, 0x00,
      0x00, 0xf8, 0xfe, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0xff, 0xff,
      0xff, 0xff, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xf8, 0x80,
      0x00, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xf8, 0xf8, 0xfc, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xfc, 0xf8, 0xf8, 0xf8, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x01,
      0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff,
      0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x00};

  // oled_write_P(logo, false);
  oled_write_raw_P(logo, sizeof(logo));
}

void write_int_ln(const char *prefix, uint8_t value)
{
  oled_write_P(prefix, false);
  oled_write(get_u8_str(value, ' '), false);
}

static void print_status_narrow(void)
{
  oled_write_ln_P(PSTR("Owemeone  _____"), false);

  if (get_highest_layer(layer_state) == FUN)
  {
    uint8_t mode = rgb_matrix_get_mode();
    HSV hsv = rgb_matrix_get_hsv();
    uint8_t speed = rgb_matrix_get_speed();

    if (keymap_config.swap_lctl_lgui)
    {
      oled_write_ln_P(PSTR("MAC\n"), false);
    }
    else
    {
      oled_write_ln_P(PSTR("WIN\n"), false);
    }

    oled_write_ln("RGB", false);
    write_int_ln(PSTR("Mo"), mode);
    write_int_ln(PSTR("H "), hsv.h);
    write_int_ln(PSTR("S "), hsv.s);
    write_int_ln(PSTR("V "), hsv.v);
    write_int_ln(PSTR("Sp"), speed);
    oled_write_P(PSTR("\n\n\n"), false);
  }
  else
  {
    oled_write_P(PSTR("\n\n\n\n\n\n\n\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    if (led_usb_state.caps_lock)
    {
      oled_write_ln_P(PSTR(" CAP "), true);
    }
    else
    {
      oled_write_ln_P(PSTR("     "), false);
    }
  }

  // Print current layer
  switch (get_highest_layer(layer_state))
  {
  case BASE:
    oled_write_P(PSTR("Alpha"), false);
    break;
  case BUTTON:
    oled_write_P(PSTR("Butto"), false);
    break;
  case MEDIA:
    oled_write_P(PSTR("Media"), false);
    break;
  case NAV:
    oled_write_P(PSTR("Nav  "), false);
    break;
  case MOUSE:
    oled_write_P(PSTR("Mouse"), false);
    break;
  case SYM:
    oled_write_P(PSTR("Sym  "), false);
    break;
  case NUM:
    oled_write_P(PSTR("Num  "), false);
    break;
  case FUN:
    oled_write_P(PSTR("Fun  "), false);
    break;
  case GAME:
    oled_write_P(PSTR("Game "), false);
    break;
  default:
    oled_write_P(PSTR("???  "), false);
  }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation)
{
  // if (is_keyboard_master())
  //{
  return OLED_ROTATION_270;
  //}
  return rotation;
}

bool oled_task_user(void)
{
  if (is_keyboard_master())
  {
    print_status_narrow();
  }
  else
  {
    render_logo();
#ifdef WPM_ENABLE
    oled_set_cursor(0, 13);
    write_int_ln(PSTR("WPM\n"), get_current_wpm());
#endif // WPM_ENABLE
  }

  return false;
}

#endif // OLED_ENABLE

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise)
{
  switch (get_highest_layer(layer_state))
  {
  case BASE:
  case BUTTON:
  case NAV:
  case MOUSE:
  case SYM:
  case NUM:
  case GAME:
    if (index == 0)
    {
      if (clockwise)
      {
        tap_code(KC_VOLU);
      }
      else
      {
        tap_code(KC_VOLD);
      }
    }
    else
    {
      if (clockwise)
      {
        tap_code(KC_WH_U);
      }
      else
      {
        tap_code(KC_WH_D);
      }
    }
    break;
  case MEDIA:
    if (index == 0)
    {
      if (clockwise)
      {
        tap_code(KC_VOLU);
      }
      else
      {
        tap_code(KC_VOLD);
      }
    }
    else
    {
      if (clockwise)
      {
        tap_code(KC_MNXT);
      }
      else
      {
        tap_code(KC_MPRV);
      }
    }
    break;
  case FUN:
    if (index == 0)
    {
      if (clockwise)
      {
        rgb_matrix_step();
      }
      else
      {
        rgb_matrix_step_reverse();
      }
    }
    else if (index == 1)
    {
      if (clockwise)
      {
        rgb_matrix_increase_speed();
      }
      else
      {
        rgb_matrix_decrease_speed();
      }
    }
    break;
  default:
    break;
  }

  return false;
}

#endif // ENCODER_ENABLE