/*  Created 2020, February 6th by Keegan Kochis
 *  This class is the base class for all animate beings.
 *  All fauna, alive or undead, extend from this class.
*/

#ifndef BEING_H_INCLUDE
#define BEING_H_INCLUDE

#include <string>

class Being {
public:
    std::string species;
    void set_species(std::string);
    std::string get_species();
};

#endif /* BEING_H_INCLUDE */
