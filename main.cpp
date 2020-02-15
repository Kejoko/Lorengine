#include <iostream>
#include <random>
#include <string>

#include "lib/history/all_history_includes.h"

int main() {
    std::cout << "Welcome to Lorengine!\n";
    
    //  Create random object to use with a world name and time as seed
    std::string world_name;
    std::cout << "Enter world name: ";
    std::cin >> world_name;
    std::seed_seq seed(world_name.begin(), world_name.end());
    std::default_random_engine generator(seed);
    
	return 0;
}
