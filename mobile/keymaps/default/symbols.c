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
 * This is the directory for some less-common keycodes used in the Mobile30 keymap.  
 *
 * But this directory can be easily used by other keyboards so long as
 * 
 * UNICODEMAP_ENABLE = yes 
 * 
 * is enabled in your rules.mk.
*/

enum unicode_names {
    EUROS,
    JPYEN,
    POUND,
    DEGRE,
    BULLT,
};


// Use X(EURO), X(POUND) etc... In Your Keymap to call these characters.

void eeconfig_init_user(void) {

set_unicode_input_mode(UC_WIN);
}

const uint32_t PROGMEM unicode_map[] = {
// Smiles
    [EUROS] = 0x20CF,  // €
    [JPYEN] = 0x00A5, // ¥ 
    [POUND] = 0x00A3, // £
    [DEGRE] = 0x00B0, // ° (Degree Symbol)
    [BULLT] = 0x2022 , // • (Bullet)
};


