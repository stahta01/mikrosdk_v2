if(${_MSDK_BOARD_NAME_} STREQUAL "BOARD_EVAL_WITH_STM32L476ZG_MCU")
    set(BOARD_PATH   "include/boards/board_eval_with_stm32l476zg")
    set(MCU_CARD  FALSE)
    set(SHIELD FALSE)
endif()
