/*  Created 2020, February 12th by Keegan Kochis
 *  This class is representative of an year (span of months).
*/

#ifndef YEAR_H_INCLUDE
#define YEAR_H_INCLUDE

#include <string>
#include <vector>

#include "Month.h"

class Era;

class Year {
public:
    int year_number;
    int moon_cycles_per_year;
    std::vector<std::string> month_names;
    std::vector<Month*> months;
    Era* current_era;
};

#endif /* YEAR_H_INCLUDE */
