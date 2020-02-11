cmake_minimum_required(VERSION 3.14)

add_compile_options(-std=c++17 -Wall -Wpedantic -Wextra -g)

file(GLOB world_files
	"lib/*.cpp"

)

file(GLOB lib_history_files
	"lib/history/src/*.cpp"

	"lib/history/src/beings/*.cpp"
	"lib/history/src/beings/bipedals/*.cpp"
	"lib/history/src/beings/bipedals/humanoids/*.cpp"

	"lib/history/src/events/*.cpp"

	"lib/history/src/items/*.cpp"

	"lib/history/src/locations/*.cpp"

	"lib/history/src/organizations/*.cpp"
	"lib/history/src/organizations/governments/*.cpp"
	"lib/history/src/organizations/governments/autocracies/*.cpp"
	"lib/history/src/organizations/governments/democracies/*.cpp"
	"lib/history/src/organizations/governments/oligarchies/*.cpp"
	"lib/history/src/organizations/ideologies/*.cpp"
	"lib/history/src/organizations/ideologies/religions/*.cpp"

	"lib/history/src/plants/*.cpp"

	"lib/history/src/titles/*.cpp"
)

file(GLOB lib_map_files

)

file(GLOB lib_wiki_files

)

project(Lorengine)

add_library(lore_lib ${world_files} ${lib_history_files})
add_executable(Lorengine main.cpp)
target_link_libraries(Lorengine lore_lib)