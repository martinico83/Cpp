cmake_minimum_required(VERSION 3.5)

project(2doSimulacroDe2doParcial LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(2doSimulacroDe2doParcial main.cpp)

install(TARGETS 2doSimulacroDe2doParcial
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
