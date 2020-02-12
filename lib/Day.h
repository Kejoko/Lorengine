/*  Created 2020, February 12th by Keegan Kochis
 *  This class is representative of a single day and its events.
*/

#ifndef DAY_H_INCLUDE
#define DAY_H_INCLUDE

#include <vector>

class Event;
class Month;

class Day {
public:
    int current_day;
    std::vector<Event*> events;
    Month* current_month;
};

#endif /* DAY_H_INCLUDE */
