/*  Created 2020, February 9th by Keegan Kochis
 *  This class is the base class for all events.
 *  All historical events and actions extend from this class.
*/

#ifndef EVENT_H_INCLUDE
#define EVENT_H_INCLUDE

#include "../Calendar.h"

#include "Location.h"

class Event {
public:
    Day start_date;
    Day end_date;
    Location* start_location;
    Location* end_location;
};

#endif /* EVENT_H_INCLUDE */
