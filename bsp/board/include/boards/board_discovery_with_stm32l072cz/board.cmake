if(${_MSDK_BOARD_NAME_} STREQUAL "KIT_DISCOVERY_WITH_STM32L072CZ_MCU")
    set(BOARD_PATH   "include/boards/board_discovery_with_stm32l072cz")
    set(MCU_CARD  FALSE)
    set(SHIELD FALSE)
endif()