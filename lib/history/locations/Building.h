/*  Created 2020, February 10th by Keegan Kochis
 *  This class extends from Location.
 *  This class is the base class for all buildings.
*/

#ifndef BUILDING_H_INCLUDE
#define BUILDING_H_INCLUDE

#include <vector>

#include "../Being.h"

#include "../Location.h"

#include "../Organization.h"

class Building : virtual public Location {
public:
    std::vector<Being*> private_owners;
    Organization* group_owner;
    Location* town;
};

#endif /* BUILDING_H_INCLUDE */
