/*  Created 2020, February 10th by Keegan Kochis
 *  This class extends from Organization.
 *  This class is the base class for all types of governing bodies.
*/

#ifndef GOVERNMENT_H_INCLUDE
#define GOVERNMENT_H_INCLUDE

#include <vector>

#include "../Location.h"

#include "../Organization.h"

class Government : virtual public Organization {
public:
    std::vector<Location*> juristiction;
    
};

#endif /* GOVERNMENT_H_INCLUDE */
