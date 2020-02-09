/* Created 2020, February 6th by Keegan Kochis
 */

#include <string>
#include "Being.h"

void Being::set_species(std::string species) {
    (*this).species = species;
}

std::string Being::get_species() {
    return (*this).species;
}
