/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// https://get.vial.today/docs/porting-to-vial.html#5-generate-and-add-unique-keyboard-id

#define VIAL_KEYBOARD_UID { 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B }

// https://get.vial.today/docs/porting-to-vial.html#6-set-up-a-secure-unlock-combination

/* ESC + ENTER */
//#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
//#define VIAL_UNLOCK_COMBO_COLS { 0, 12 }

/* CAPS_LOCK + ENTER */
//#define VIAL_UNLOCK_COMBO_ROWS { 2, 2 }
//#define VIAL_UNLOCK_COMBO_COLS { 0, 12 }

/* LEFT_SHIFT + ENTER */
#define VIAL_UNLOCK_COMBO_ROWS { 3, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 12 }

/* RIGHT_SHIFT + ENTER */
//#define VIAL_UNLOCK_COMBO_ROWS { 3, 2 }
//#define VIAL_UNLOCK_COMBO_COLS { 12, 12 }

/* LEFT_CTRL + ENTER */
//#define VIAL_UNLOCK_COMBO_ROWS { 4, 2 }
//#define VIAL_UNLOCK_COMBO_COLS { 0, 12 }

/* LEFT_ALT + ENTER */
//#define VIAL_UNLOCK_COMBO_ROWS { 4, 2 }
//#define VIAL_UNLOCK_COMBO_COLS { 2, 12 }
