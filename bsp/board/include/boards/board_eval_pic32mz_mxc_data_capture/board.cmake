if(${_MSDK_BOARD_NAME_} STREQUAL "PIC32MZ_MXS_DATA_CAPTURE_BOARD")
    set(BOARD_PATH "include/boards/board_eval_pic32mz_mxc_data_capture")
    set(MCU_CARD FALSE)
    set(SHIELD FALSE)
endif()