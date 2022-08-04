cmake_minimum_required(VERSION 3.0.0)

set(TARGET_NAME Mathemetics)

# Read ReadMe.docx
#set(CMAKE_C_COMPILER "gcc" )
#set(CMAKE_CXX_COMPILER "g++")

project(${TARGET_NAME} VERSION 1.0.0)

add_subdirectory(src/my_math)
add_subdirectory(src/my_print)

add_executable(${TARGET_NAME} 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

target_link_libraries(${TARGET_NAME}
    PRIVATE 
    math 
    print
)
