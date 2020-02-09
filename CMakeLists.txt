cmake_minimum_required(VERSION 3.14)

add_compile_options(-std=c++17 -Wall -Wpedantic -Wextra -Werror -g)

file(GLOB lib_files
	"lib/*.cpp"
	"lib/*.h"
)

project(Lorengine)

add_library(lore_lib ${lib_files})
add_executable(Lorengine main.cpp)
target_link_libraries(Lorengine lore_lib)