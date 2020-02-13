/*  Created 2020, February 12th by Keegan Kochis
 *  This class is representative of an era (span of days).
*/

#ifndef MONTH_H_INCLUDE
#define MONTH_H_INCLUDE

#include <string>
#include <vector>

#include "Day.h"

class Year;

class Month {
public:
    std::string month_name;
    int current_month;
    std::vector<Day*> current_day;
    Year* current_year;
};

#endif /* MONTH_H_INCLUDE */
