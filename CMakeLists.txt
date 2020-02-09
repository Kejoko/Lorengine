cmake_minimum_required(VERSION 3.14)

add_compile_options(-std=c++17 -Wall -Wpedantic -Wextra -Werror -g)

file(GLOB lib_files
	"lib/src/*.cpp"
	"lib/src/beings/*.cpp"
	"lib/src/items/*.cpp"
	"lib/src/locations/*.cpp"
	"lib/src/plants/*.cpp"
)

project(Lorengine)

add_library(lore_lib ${lib_files})
add_executable(Lorengine main.cpp)
target_link_libraries(Lorengine lore_lib)