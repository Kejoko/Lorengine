/*  Created 2020, February 10th by Keegan Kochis
 *  This class is representative of the calendar/date system.
 *  This class is responsible for the timekeeping of the world.
*/

#ifndef CALENDAR_H_INCLUDE
#define CALENDAR_H_INCLUDE

#include <string>
#include <vector>

#include "Era.h"
#include "Year.h"
#include "Month.h"
#include "Day.h"

class Event;

class Calendar {
private:
    Era* current_era;
    Year* current_year;
    Month* current_month;
    Day* current_day;
    std::vector<Era*> eras;
    std::vector<Year*> years;
    std::vector<Month*> months;
    std::vector<Day*> days;
    
public:
    class Duration {
    private:
        Day* start_date;
        Day* end_date;
    public:
        void set_start_date(Day*);
        void set_end_date(Day*);
        
        Day* get_start_date();
        Day* get_end_date();
    };
    
    int get_era();
    int get_year();
    int get_month();
    int get_day();
    
    void set_era(int);
    void set_year(int);
    void set_month(int);
    void set_day(int);
    
    void increment_era();
    void increment_year();
    void increment_month();
    void increment_day();
    
    Duration calculate_duration(Day*, Day*);
};

#endif /* CALENDAR_H_INCLUDE */
