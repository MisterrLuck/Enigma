cmake_minimum_required(VERSION 4.2)
project(Enigma)

include_directories(${include})

set(CMAKE_CXX_STANDARD 20)

add_executable(Enigma src/main.cpp
        src/rotor.cpp
        include/rotor.hpp
        src/enigma.cpp
        include/enigma.hpp)
