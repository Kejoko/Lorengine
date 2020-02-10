/*  Created 2020, February 10th by Keegan Kochis
 *  This class extends from Location.
 *  This class is the base class for all districts and divisions of settlements.
*/

#ifndef DISTRICT_H_INCLUDE
#define DISTRICT_H_INCLUDE

#include <vector>

#include "../Location.h"
#include "Building.h"

class District : virtual public Location {
public:
    std::vector<Building*> buildings;
};

#endif /* DISTRICT_H_INCLUDE */
