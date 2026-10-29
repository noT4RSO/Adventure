cmake_minimum_required(VERSION 4.1)
project(Adventure)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    add_compile_options(/W4 /WX /permissive-)
else()
    add_compile_options(-Wall -Wextra -Wconversion -Wsign-conversion -Wpedantic -Werror)
endif()

add_executable(Adventure src/main.cpp
        src/io.cpp
        src/io.h)