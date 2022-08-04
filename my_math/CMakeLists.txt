set(TARGET_LIB my_math)

file(GLOB_RECURSE SRC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

add_library(${TARGET_LIB} ${SRC_FILES})

target_include_directories(${TARGET_LIB} 
    PUBLIC  ${CMAKE_CURRENT_SOURCE_DIR}/include
)
