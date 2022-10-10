cmake_minimum_required(VERSION 3.23)
project(Client)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Server)
include_directories(Server)
add_executable(Client main.cpp Server/src/MessageMaker.cpp)
