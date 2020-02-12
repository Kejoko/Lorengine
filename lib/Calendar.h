/*  Created 2020, February 10th by Keegan Kochis
 *  This class is representative of the calendar/date system.
 *  This class is responsible for the timekeeping of the world.
*/

#ifndef CALENDAR_H_INCLUDE
#define CALENDAR_H_INCLUDE

#include <string>
#include <vector>

class Event;

class Calendar {
private:
    static int era;
    static int year;
    static int month;
    static int day;
    static std::vector<std::string> era_names;
    static std::vector<Event*> era_distinguishers;
    
public:

    class Date {
    public:
        const int era;
        const int year;
        const int month;
        const int day;
        
        void set_era(int);
        void set_year(int);
        void set_month(int);
        void set_day(int);
    };

    class Duration {
    public:
        int eras;
        int years;
        int months;
        int days;
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
    
    Duration calculate_duration(Date, Date);
};

#endif /* CALENDAR_H_INCLUDE */
