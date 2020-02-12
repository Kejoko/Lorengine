/*  Created 2020, February 10th by Keegan Kochis
 *  This class is representative of the entire world.
 *  This class is responsible for the generation and simulation of everything.
*/

#ifndef WORLD_H_INCLUDE
#define WORLD_H_INCLUDE

#include <string>
#include <vector>

#include "history/all_history_includes.h"
#include "Era.h"

class World {
private:
    std::string world_name;
    Calendar calendar;
    std::vector<Era*> eras;
    std::vector<Location*> continents;
    
public:
    std::string get_world_name();
    Calendar* get_calendar();
    Era* get_era(int);
    Location* get_continent(std::string);
    
    World();
    
    void generate_world_name();
    void generate_calendar();
    void generate_continents();
    
    void progress_day();
    void progress_month();
    void progress_year();
};

#endif /* WORLD_H_INCLUDE */
