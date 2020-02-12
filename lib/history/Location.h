/*  Created 2020, February 9th by Keegan Kochis
 *  This class is the base class for all locations/places in the world.
 *  All places, large or small, extend from this class.
*/

#ifndef LOCATION_H_INCLUDE
#define LOCATION_H_INCLUDE

#include <string>

#include "../Calendar.h"

class Location {
public:
    Day creation_date;
    Day destruction_date;
    std::string name;
    
};

#endif /* LOCATION_H_INCLUDE */
