/* Copyright 2021 ColinTravis <colin@colintravis.com>
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
#include "rev1.h"

void eeconfig_init_kb(void) {
#ifdef RGBLIGHT_ENABLE
    rgblight_enable(); // Enable RGB by default
    rgblight_sethsv(0, 255, 255);  // Set default HSV - red hue, full saturation, full brightness
#ifdef RGBLIGHT_ANIMATIONS
    rgblight_mode(RGBLIGHT_MODE_RAINBOW_SWIRL + 2); // set to RGB_RAINBOW_SWIRL by default
#endif
#endif

    eeconfig_init_user();
}
