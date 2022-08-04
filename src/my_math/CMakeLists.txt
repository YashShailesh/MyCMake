set(TARGET_LIB math)

add_library(${TARGET_LIB}
    src/math.cpp
)

target_include_directories(${TARGET_LIB}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)


