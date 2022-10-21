cmake_minimum_required(VERSION 3.5)

project(Ej_9 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Ej_9 main.cpp)

install(TARGETS Ej_9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
