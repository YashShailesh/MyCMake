set(TARGET_LIB print)

add_library(${TARGET_LIB}
    src/print_result.cpp
)

target_include_directories(${TARGET_LIB}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

