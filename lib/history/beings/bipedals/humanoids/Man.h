/*  Created 2020, February 9th by Keegan Kochis
 *  This class extends from Humanoid.
 *  This class is the base class for all human like races.
*/

#ifndef MAN_H_INCLUDE
#define MAN_H_INCLUDE

#include <string>

#include "../../Sentient.h"
#include "../Humanoid.h"

#include "../../../Event.h"

#include "../../../Location.h"

#include "../../../Organization.h"
#include "../../../organizations/Family.h"

#include "../../../Title.h"

class Man : public Humanoid, public Sentient {
public:
    std::string first_name;
    std::string family_name;
    std::string surname;
    std::string nick_name;
    Title title;
    
    Family* birth_family;
    Family* true_family;
    Man* birth_father;
    Man* birth_mother;
    Man* true_father;
    Man* true_mother;
    Man* murderer;
    
    int birth_year;
    int birth_month;
    int birth_date;
    Location* birth_place;
    int death_year;
    int death_month;
    int death_date;
    Location* death_place;
    Location* resting_place;
    
    std::string race;
    int height;
    int age;
    
    Location* current_location;
    Organization* workplace;
    Title job;
    
};

#endif /* MAN_H_INCLUDE */
