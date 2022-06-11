cmake_minimum_required(VERSION 3.10)

project(ktr-msc-ss1)
add_library(game Character.cpp Character.hpp Mage.hpp Mage.cpp Warrior.hpp Warrior.cpp)
add_executable(ktr-msc-ss1 main.cpp)
target_link_libraries(ktr-msc-ss1 game)