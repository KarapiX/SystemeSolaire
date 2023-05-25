cmake_minimum_required(VERSION 3.18)
project(Projet_C C)

set(CMAKE_C_STANDARD 99)

add_executable(Projet_C main.c fichier.c fichier.h Euler.c Euler.h)
target_link_libraries(Projet_C m)