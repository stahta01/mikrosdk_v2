if(${_MSDK_BOARD_NAME_} STREQUAL "CURIOSITY_DEVELOPMENT_BOARD")
    set(BOARD_PATH "include/boards/board_curiosity_development")
    set(MCU_CARD FALSE)
    set(SHIELD FALSE)
    set(DIP_SOCKET TRUE)
endif()
