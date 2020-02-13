/*  Created 2020, February 9th by Keegan Kochis
 *  This class extends from Organization.
 *  This class is the base class for all families/houses.
*/

#ifndef FAMILY_H_INCLUDE
#define FAMILY_H_INCLUDE

#include <string>
#include <vector>

#include "../Being.h"

#include "../Location.h"

#include "../Organization.h"

#include "../helpers/Physical_Attributes.h"

class Family : public Organization {
public:
    std::string family_name;
    Physical_Attributes phys_attributes;
};

#endif /* FAMILY_H_INCLUDE */
