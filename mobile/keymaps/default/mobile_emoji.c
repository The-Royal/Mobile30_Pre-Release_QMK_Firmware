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
 * 
 * 
 * 
 * This is the directory for the Symbols and emojis used in the Mobile30 keymap.  
 * 
 * 
 * 
*/


enum unicode_names {
    EUROS,
    JPYEN,
    POUND,
    DEGRE,
    BULLT,
    XSSML,
    SMILE,
    LGSML,
    XLSML,
    SWSML,
    TLTSM,
    CRYSM,
    UPSDN,
    WINKD,
    CHEKY,
    ANGEL,
    LOVES,
    LVEYE,
    CRAZY,
    FLATS,
    MASKD,
    WEIRD,
    BLUSH,
    EMBAR,
    TEARD,
    CRIES,
    SHOCK,
    GROSS,
    FUMED,
    ANGER,
    VULGR,
    LV_RD,
    LV_YL,
    HUNDO,
    MOIST,
    GOTEM,
    HORNS,
    RDICL,
    FLBRD,
    PNTLT,
    PNTRT,
    PNTUP,
    PNTDN,
    CLAPD,
    PRAYS
};


// Use X(XSML), X(LOVES) etc... In Your Keymap to call these characters.

const uint32_t PROGMEM unicode_map[] = {
// Symbols
    [EUROS] = 0x20CF,  // €
    [JPYEN] = 0x00A5, // ¥ 
    [POUND] = 0x00A3, // £
    [DEGRE] = 0x00B0, // ° (Degree Symbol)
    [BULLT] = 0x2022 , // • (Bullet)

// Smiles
    [XSSML] = 0x1F642,  // 🙂
    [SMILE] = 0x1F604,  // 😄
    [LGSML] = 0x1F601,  // 😁
    [XLSML] = 0x1F606,  // 😆
    [SWSML] = 0x1F605,  // 😅
    [TLTSM] = 0x1F923,  // 🤣
    [CRYSM] = 0x1F602,  // 😂
    [UPSDN] = 0x1F643,  // 🙃
    [WINKD] = 0x1F609,  // 😉
    [CHEKY] = 0x1F60A,  // 😊
    [ANGEL] = 0x1F607,  // 😇
    [LOVES] = 0x1F970,  // 🥰
    [LVEYE] = 0x1F60D,  // 😍
    [CRAZY] = 0x1F92A,  // 🤪
    [FLATS] = 0x1F610,  // 😐
    [MASKD] = 0x1F637,  // 😷
    [WEIRD] = 0x1F974,  // 🥴
    [BLUSH] = 0x1F633,  // 😳
    [EMBAR] = 0x1F630,  // 😰
    [TEARD] = 0x1F622,  // 😢
    [CRIES] = 0x1F62D,  // 😭
    [SHOCK] = 0x1F631,  // 😱
    [GROSS] = 0x1F616,  // 😖
    [FUMED] = 0x1F624,  // 😤
    [ANGER] = 0x1F621,  // 😡
    [VULGR] = 0x1F92C,  // 🤬

// Hearts
    [LV_RD] = 0x2764,  // ❤  (Red)
    [LV_YL] = 0x1F49B,  // 💛 (Yellow)

// Expresive Action
    [HUNDO] = 0x1F4AF,  // 💯
    [MOIST] = 0x1F4A6,  // 💦
    [GOTEM] = 0x1F44C,  // 👌
    [HORNS] = 0x1F918,  // 🤘
    [RDICL] = 0x1F919,  // 🤙
    [FLBRD] = 0x1F595,  // 🖕
    [PNTLT] = 0x00000,  // 👈
    [PNTRT] = 0x00000,  // 👉
    [PNTUP] = 0x00000,  // 👆
    [PNTDN] = 0x00000,  // 👇
    [CLAPD] = 0x1F44F,  // 👏
    [PRAYS] = 0x1F64F,  // 🙏

};

// Use X(BBBBB), X(PRAYS) etc... In Your Keymap.

