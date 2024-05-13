/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// https://docs.qmk.fm/#/config_options?id=hardware-options

//#define DIODE_DIRECTION COL2ROW

//#define MATRIX_ROWS 5
//#define MATRIX_COLS 15

//#define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
//#define MATRIX_COL_PINS { D7, D6, D4, B4, B5, B6, C6, C7, F7, F6, F5, F4, F1, F0, E6 }

// https://docs.qmk.fm/#/config_options?id=features-that-can-be-disabled

/* disable debugging */
#ifndef NO_DEBUG
    #define NO_DEBUG
#endif

/* disable printing/debugging using hid_listen */
#ifndef NO_PRINT
    #define NO_PRINT
#endif

// https://docs.qmk.fm/#/squeezing_avr?id=configh-settings

/* disable layers */
//#define NO_ACTION_LAYER

/* limit amount of layers */
#define LAYER_STATE_8BIT

/* disable lock key support */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

/* disable one-shot modifiers */
#define NO_ACTION_ONESHOT

/* disable tap dance and other tapping features */
#define NO_ACTION_TAPPING

// https://docs.qmk.fm/#/feature_audio?id=avr-based-boards

//#ifdef AUDIO_ENABLE
//    /* define audio pin */
//    #define AUDIO_PIN B7
//
//    /* disable music mode */
//    #ifdef MUSIC_ENABLE
//        #define NO_MUSIC_MODE
//    #endif
//
//    /* enable delay during startup song to accomidate for usb startup issues */
//    #define AUDIO_INIT_DELAY
//
//    /* enable startup sound */
//    #define STARTUP_SONG SONG(STARTUP_SOUND)
//
//    /* disable all other sounds */
//    #undef GOODBYE_SONG
//    #undef AG_NORM_SONG
//    #undef AG_SWAP_SONG
//    #undef CG_NORM_SONG
//    #undef CG_SWAP_SONG
//    #undef MUSIC_ON_SONG
//    #undef MUSIC_OFF_SONG
//    #undef CHROMATIC_SONG
//    #undef GUITAR_SONG
//    #undef VIOLIN_SONG
//    #undef MAJOR_SONG
//#endif

// https://docs.qmk.fm/#/feature_bootmagic?id=bootmagic-lite

//#ifdef BOOTMAGIC_ENABLE
//    /* ESC */
//    //#define BOOTMAGIC_LITE_ROW 0
//    //#define BOOTMAGIC_LITE_COLUMN 0
//
//    /* CAPS_LOCK */
//    //#define BOOTMAGIC_LITE_ROW 2
//    //#define BOOTMAGIC_LITE_COLUMN 0
//
//    /* LEFT_CTRL */
//    //#define BOOTMAGIC_LITE_ROW 4
//    //#define BOOTMAGIC_LITE_COLUMN 0
//
//    /* LEFT_ALT */
//    //#define BOOTMAGIC_LITE_ROW 4
//    //#define BOOTMAGIC_LITE_COLUMN 2
//
//    /* ENTER */
//    #define BOOTMAGIC_LITE_ROW 2
//    #define BOOTMAGIC_LITE_COLUMN 12
//#endif
