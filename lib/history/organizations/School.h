/*  Created 2020, February 10th by Keegan Kochis
 *  This class extends from Organization.
 *  This class is the base class for all schools which formally teach lessons.
*/

#ifndef SCHOOL_H_INCLUDE
#define SCHOOL_H_INCLUDE

#include <vector>

#include "../Organization.h"
#include "Ideology.h"

class School : virtual public Organization {
public:
    std::vector<Ideology*> curriculum;
};

#endif /* SCHOOL_H_INCLUDE */
