if(${_MSDK_BOARD_NAME_} STREQUAL "BOARD_ARDUINO_UNO_REV3")
    set(BOARD_PATH   "include/boards/board_arduino_uno_rev3")
    set(MCU_CARD  FALSE)
    set(SHIELD TRUE)
endif()