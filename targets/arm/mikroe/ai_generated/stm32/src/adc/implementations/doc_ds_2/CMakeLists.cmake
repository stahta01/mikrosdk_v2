if(${MCU_NAME} MATCHES "^STM32C031C4$|^STM32C031F4$|^STM32C031G4$|^STM32C031K4$|^STM32C031C6$|^STM32C031F6$|^STM32C031G6$|^STM32C031K6$")
    set(adc_subimplementation "${CMAKE_CURRENT_LIST_DIR}/hal_ll_adc.c")
    set(rcc_subimplementation "${CMAKE_CURRENT_SOURCE_DIR}/../../include/rcc/implementations/doc_ds_2")
    set(gpio_subimplementation_include_dir "${CMAKE_CURRENT_SOURCE_DIR}/../../include/gpio/implementations/doc_ds_2")
    list(APPEND hal_ll_def_list "STM32C0xx")
    list(APPEND hal_ll_def_list "STM32C03xx")
    list(APPEND hal_ll_def_list "STM32C031xx")
    set(adc_pin_map "${CMAKE_CURRENT_SOURCE_DIR}/../../include/adc/hal_ll_adc_pin_map/implementations/doc_ds_2")
    list(APPEND hal_ll_def_list "HAL_LL_ADC_RESOLUTION_CMAKE=HAL_LL_ADC_RESOLUTION_12_BIT")
endif()