#pragma once

#define UNICODE_TYPE_DELAY 0

#define UNICODE_SELECTED_MODES UC_WINC, UC_MAC

#define UNICODE_KEY_WINC KC_RALT

#ifdef RGBLIGHT_ENABLE
    /* ws2812 RGB LED */
    #define RGB_DI_PIN C4
    #define RGBLED_NUM 8    // Number of LEDs

    #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_HUE_STEP 6
    #define RGBLIGHT_SAT_STEP 4
    #define RGBLIGHT_VAL_STEP 8
#endif
