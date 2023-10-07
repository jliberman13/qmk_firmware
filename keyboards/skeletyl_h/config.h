// Copyright 2023 Jonathan Liberman (@jliberman13)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/*#define LAYOUT_split_3x5_3( \
    L00, L01, L02, L03, L04, R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14, R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24, R20, R21, R22, R23, R24, \
              L30, L31, L32, R30, R31, R32 \
) \
{ \
    {   L00,   L01, L02, L03, L04, R00, R01, R02,   R03,   R04 }, \
    {   L10,   L11, L12, L13, L14, R10, R11, R12,   R13,   R14 }, \
    {   L20,   L21, L22, L23, L24, R20, R21, R22,   R23,   R24 }, \
    { KC_NO, KC_NO, L30, L31, L32, R30, R31, R32, KC_NO, KC_NO }, \
}
*/
