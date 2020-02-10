/*  Created 2020, February 9th by Keegan Kochis
 *  This class is the base class for all groups and organizations.
 *  All organizations and populations extend from this class.
*/

#ifndef ORGANIZATION_H_INCLUDE
#define ORGANIZATION_H_INCLUDE

#include <vector>

#include "Being.h"

#include "Location.h"

class Organization {
public:
    int start_year;
    int start_month;
    int start_day;
    int end_year;
    int end_month;
    int end_day;
    std::vector<Being*> founders;
    Location* origin;
    std::vector<Being*> members;
    Location* headquarters;
};

#endif /* ORGANIZATION_H_INCLUDE */
