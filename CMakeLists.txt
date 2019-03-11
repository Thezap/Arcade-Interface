cmake_minimum_required(VERSION 3.5)

project(Arcade_Interface)

set(CMAKE_CXX_STANDARD 17)

add_library(Arcade_Interface INTERFACE)

target_include_directories(Arcade_Interface INTERFACE ./include)