cmake_minimum_required(VERSION 3.5)

project(Ejercicio_7 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Ejercicio_7 main.cpp)

install(TARGETS Ejercicio_7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
