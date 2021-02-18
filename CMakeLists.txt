cmake_minimum_required(VERSION 3.17)
project(Minesweeper_old C)

set(CMAKE_C_STANDARD 11)

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIR})

add_executable(Minesweeper_old main.c game.h rendering.c rendering.h)
target_link_libraries(Minesweeper_old -lmingw32 -lSDL2Main -lSDL2)