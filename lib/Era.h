/*  Created 2020, February 12th by Keegan Kochis
 *  This class is representative of an era (span of years).
*/

#ifndef ERA_H_INCLUDE
#define ERA_H_INCLUDE

#include <string>
#include <vector>

#include "Year.h"

class Event;

class Era {
public:
    std::string era_name;
    int current_era;
    std::vector<Year*> years;
    Event* defining_events[2];
};

#endif /* ERA_H_INCLUDE */
