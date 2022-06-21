RGB_MATRIX_EFFECT(GAME)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool GAME(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    int wasd[4] = {19, 23, 18 ,13};

    HSV      hsv  = rgb_matrix_config.hsv;
    uint16_t time = scale16by8(g_rgb_timer, rgb_matrix_config.speed / 8);
    hsv.v         = scale8(abs8(sin8(time) - 128) * 2, hsv.v);
    //RGB rgb       = rgb_matrix_hsv_to_rgb(hsv);
    rgb_matrix_set_color_all(RGB_OFF);
    for (uint8_t i = 0; i < 5; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(wasd[i], RGB_BLUE);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS