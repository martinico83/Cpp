cmake_minimum_required(VERSION 3.5)

project(Simulacro2doParcial LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Simulacro2doParcial main.cpp)

install(TARGETS Simulacro2doParcial
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
