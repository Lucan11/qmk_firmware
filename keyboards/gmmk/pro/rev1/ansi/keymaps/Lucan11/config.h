/* Copyright 2022 Lucan de Groot
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

#pragma once


/* Note that this does not increase initial latency, due to the algorithm 
 * used. So, setting a higher value does not matter much.
 * A 20ms debounce per key means that you can press at most 50x per second. 
 * That should be sufficient. 
 */
#ifdef DEBOUNCE
    #undef DEBOUNCE
#endif
#define DEBOUNCE 20


/* Enable N-Key rollover (you can press/hold as many keys as you want at the 
 * same time). This function is not supported through many KVM switches and
 * older BIOSes. To disable this, press Fn+N
 */
#define FORCE_NKRO


/* Configure the RGB to:
 *  - Disable when the PC goes to sleep
 *  - Disable after 20 min of idle time
 *  - Set the RGB to a solid color (cyan)
 */
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_TIMEOUT          1200000                         // 20 minutes (20 * 60 * 1000ms)
#define RGB_MATRIX_DEFAULT_MODE     RGB_MATRIX_SOLID_COLOR          
#define RGB_MATRIX_DEFAULT_HUE      127                             