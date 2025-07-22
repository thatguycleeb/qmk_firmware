#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0003
#define DEVICE_VER      0x0001
#define MANUFACTURER    thatguycleeb
#define PRODUCT         BitfocusMacroPad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { D4, E6, B4, B5 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }

/* COL2ROW or ROW2COL */

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#endif