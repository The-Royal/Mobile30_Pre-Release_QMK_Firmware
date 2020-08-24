/* Copyright 2020 Garret Gartner
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
*/

#include QMK_KEYBOARD_H
#include "mobile_emoji.c"
#include "process_unicode.h"

enum layer_names {
    _ALPHAS,
    _FUNCTION,
    _NUMBERS,
    _SYMBOLS,
    _EMOJI
};


//Tap Dance Declarations
enum {
  TD_RST = 0
};

void dance_rst_reset (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count >= 2) {
    reset_keyboard();
    reset_tap_dance(state);
  }
}

//All tap dance functions would go here. Only showing this one.
qk_tap_dance_action_t tap_dance_actions[] = {
 [TD_RST] = ACTION_TAP_DANCE_FN_ADVANCED (NULL, NULL, dance_rst_reset)
};


#define  SMBNUM TG(_SYMBOLS)
#define  FUNCTION MO(_FUNCTION)
#define  NUMALPHA  TG(_NUMBERS)
#define  EMJIALPA   TG(_EMOJI)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Default Layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │
     * └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┘
     *   │ A │ S │ D │ F │ G │ H │ J │ K │ L │
     * ┌─┴───┼───┼───┼───┼───┼───┼───┼───┼───┴─┐
     * │SHIFT│ Z │ X │ C │ V │ B │ N │ M │BKSPC│
     * ├─────┼───┼───┼───┴───┴───┴───┼───┼─────┤
     * │ 123 │STM│ʘwʘ│               │ . │ENTER│
     * └─────┴───┴───┴───────────────┴───┴─────┘
     */

[_ALPHAS] = LAYOUT_mobile(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  
      KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,    
    KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,       KC_BSPC,
    NUMALPHA, EMJIALPA, FUNCTION,              KC_SPACE,                KC_DOT,     KC_ENT
),

    /* Computer Focused Function Layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │
     * └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┘
     *   │ A │ S │ D │ F │ G │ H │ J │ K │ L │
     * ┌─┴───┼───┼───┼───┼───┼───┼───┼───┼───┴─┐
     * │SHIFT│ Z │ X │ C │ V │ B │ N │ M │BKSPC│
     * ├─────┼───┼───┼───┴───┴───┴───┼───┼─────┤
     * │ 123 │STM│ʘwʘ│               │ . │ENTER│
     * └─────┴───┴───┴───────────────┴───┴─────┘
     */

[_FUNCTION] = LAYOUT_mobile(
    KC_DEL,    _______,    _______,    _______,    _______,    LCTL(KC_Y),    _______,    _______,    _______,    TD(TD_RST),  
      LCTL(KC_A),   LCTL(KC_S),    LCTL(KC_D),    LCTL(KC_F),    _______,    _______,    _______,    _______,     UC_MOD,    
    LCTL(KC_Z),  LCTL(KC_X),    LCTL(KC_C),    LCTL(KC_V),    _______,    _______,    _______,    _______,       _______,
    _______, KC_LALT,  _______,              _______,              _______,     KC_TAB
),

    /* Numbers/Punctuation Layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │
     * └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┘
     *   │ A │ S │ D │ F │ G │ H │ J │ K │ L │
     * ┌─┴───┼───┼───┼───┼───┼───┼───┼───┼───┴─┐
     * │SHIFT│ Z │ X │ C │ V │ B │ N │ M │BKSPC│
     * ├─────┼───┼───┼───┴───┴───┴───┼───┼─────┤
     * │ 123 │STM│ʘwʘ│               │ . │ENTER│
     * └─────┴───┴───┴───────────────┴───┴─────┘
     */

[_NUMBERS] = LAYOUT_mobile(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  
      KC_MINUS,   KC_SLSH,    KC_COLN,    KC_SCLN,    KC_LPRN,    KC_RPRN,    KC_DLR,    KC_AMPR,     KC_DQT,    
    SMBNUM,  KC_DOT,    KC_AT,    KC_QUES,    X(BULLT),    X(DEGRE),    KC_EXLM,       KC_GRAVE,  _______,
    NUMALPHA, _______, _______,              _______,               KC_COMMA,     KC_ENTER
),

    /* Other Symbols Function Layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │
     * └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┘
     *   │ A │ S │ D │ F │ G │ H │ J │ K │ L │
     * ┌─┴───┼───┼───┼───┼───┼───┼───┼───┼───┴─┐
     * │SHIFT│ Z │ X │ C │ V │ B │ N │ M │BKSPC│
     * ├─────┼───┼───┼───┴───┴───┴───┼───┼─────┤
     * │ 123 │STM│ʘwʘ│               │ . │ENTER│
     * └─────┴───┴───┴───────────────┴───┴─────┘
     */

[_SYMBOLS] = LAYOUT_mobile(
    KC_LBRC,    KC_RBRC,    KC_LCBR,    KC_RCBR,    KC_HASH,    KC_PERC,    KC_CIRC,    KC_ASTR,    KC_PLUS,    KC_EQL,  
      KC_UNDS,   KC_BSLS,    KC_PIPE,    KC_TILD,    KC_LT,    KC_GT,    X(EUROS),    X(POUND),     X(JPYEN),    
    _______,  KC_DOT,    KC_AT,    KC_QUES,    X(BULLT),    X(DEGRE),    KC_EXLM,       KC_GRAVE,  _______,
    _______,  _______,     _______,              _______,                _______,     _______
),

    /* Emoji Layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │
     * └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┘
     *   │ A │ S │ D │ F │ G │ H │ J │ K │ L │
     * ┌─┴───┼───┼───┼───┼───┼───┼───┼───┼───┴─┐
     * │SHIFT│ Z │ X │ C │ V │ B │ N │ M │BKSPC│
     * ├─────┼───┼───┼───┴───┴───┴───┼───┼─────┤
     * │ 123 │STM│ʘwʘ│               │ . │ENTER│
     * └─────┴───┴───┴───────────────┴───┴─────┘
     */

[_EMOJI] = LAYOUT_mobile(
    X(SMILE),    X(SWSML),    X(ANGEL),    X(LOVES),    X(CRAZY),    X(CRIES),    X(GROSS),    X(LV_RD),    X(CLAPD),    UC_M_MA,  
      X(LGSML),   X(CRYSM),    X(UPSDN),    X(LVEYE),    X(WEIRD),    X(SHOCK),    X(FUMED),    X(LV_YL),     X(HORNS),    
    X(XLSML),  X(TLTSM),    X(WINKD),    X(CHEKY),    X(FLATS),    X(BLUSH),    X(VULGR),       X(HUNDO),  KC_BSPC,
    X(RDICL),  EMJIALPA,    KC_NO,              _______,                UC_M_WC,     KC_RALT
)

};


// ˇˇˇˇˇ LEFT HAND - Function for layer INDICATOR LEDs - [ TOP LED ] ˇˇˇˇˇ //
uint32_t layer_state_set_user(uint32_t state){
    if (biton32(state) == 0) {
    writePinHigh(B5);
	} else {
		writePinLow(B5);}
    if (biton32(state) == 1) {
    writePinHigh(B6);
	} else {
		writePinLow(B6);}
    if (biton32(state) == 2) {
    writePinHigh(B7);
	} else {
		writePinLow(B7);}
    if (biton32(state) == 3) {
    writePinHigh(C7);
	} else {
		writePinLow(C7);}
    if (biton32(state) == 4) {
    writePinHigh(C6);
	} else {
		writePinLow(C6);}
    return state;
 }
