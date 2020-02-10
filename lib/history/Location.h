/*  Created 2020, February 9th by Keegan Kochis
 *  This class is the base class for all locations/places in the world.
 *  All places, large or small, extend from this class.
*/

#ifndef LOCATION_H_INCLUDE
#define LOCATION_H_INCLUDE

#include <string>

class Location {
public:
    int creation_year;
    int creation_month;
    int creation_day;
    int destruction_year;
    int destructionn_month;
    int destruction_day;
    std::string name;
    
};

#endif /* LOCATION_H_INCLUDE */
