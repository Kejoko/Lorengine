/*  Created 2020, February 9th by Keegan Kochis
 *  This class is the base class for all groups and organizations.
 *  All organizations and populations extend from this class.
*/

#ifndef ORGANIZATION_H_INCLUDE
#define ORGANIZATION_H_INCLUDE

#include <string>
#include <vector>

#include "../Calendar.h"

#include "Being.h"

#include "Location.h"

class Organization {
public:
    std::string name;
    Day start_date;
    Day end_date;
    std::vector<Being*> founders;
    Location* origin;
    std::vector<Being*> members;
    Location* headquarters;
};

#endif /* ORGANIZATION_H_INCLUDE */
