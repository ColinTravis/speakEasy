/* Copyright 2021 ColinTravis <work@ghost7.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        |                   |      | Knob 1: Vol Dn/Up  |
        | Hold: Layer 2     | Up   | Press: Mute        |
        | Left              | Down | Right              |
     */
    [0] = LAYOUT(
        KC_MPRV, KC_MPLY, KC_MNXT,
        KC_LEFT, KC_DOWN, 
        MO(1)
    ),
    /*
        | Held: Layer 2  | Home | RESET      |
        | Media Previous | End  | Media Next |
     */
    [1] = LAYOUT(
        _______, RGB_MOD, RGB_RMOD,
        RGB_VAD, RGB_VAI,
        KC_MNXT
    ),
    // Gotta add these for via to work
    [3] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS
  ),
  [4] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS
  ),
};