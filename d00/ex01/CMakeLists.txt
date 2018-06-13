cmake_minimum_required(VERSION 3.11)
project(phonebook)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(phonebook
        main.cpp
        Phonebook.class.cpp
        Phonebook.class.hpp
        )
