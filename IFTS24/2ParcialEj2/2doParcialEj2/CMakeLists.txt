cmake_minimum_required(VERSION 3.5)

project(2doParcialEj2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(2doParcialEj2 main.cpp)

install(TARGETS 2doParcialEj2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
