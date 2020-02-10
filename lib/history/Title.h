/*  Created 2020, February 9th by Keegan Kochis
 *  This class is the base class for all titles.
 *  All titles, jobs, positions and earned names extend from this class.
*/

#ifndef TITLE_H_INCLUDE
#define TITLE_H_INCLUDE

#include <string>

#include "Being.h"

#include "Organization.h"

class Title {
public:
    int start_year;
    int start_month;
    int start_day;
    std::string title;
    Being* awarder;
    Organization* organization;
};

#endif /* TITLE_H_INCLUDE */
