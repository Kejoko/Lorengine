#include <iostream>
#include <string>

#include "lib/all_includes.h"

int main() {
	std::cout << "Welcome to Lorengine!\n";
    
    //  Testing
    Being b;
    b.set_species("Human");
    std::cout << b.get_species() << "\n";
    
	return 0;
}
