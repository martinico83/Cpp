cmake_minimum_required(VERSION 3.5)

project(Ej_5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Ej_5 main.cpp)

install(TARGETS Ej_5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
