cmake_minimum_required(VERSION 3.0.0)

project(Calculator VERSION 1.0.0)

add_subdirectory(my_math)
add_subdirectory(my_print)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE 
    my_math my_print
)
