/*  Created 2020, February 9th by Keegan Kochis
 *  This class extends Being.
 *  All living things with personality extend from this class.
*/

#ifndef SENTIENT_H_INCLUDE
#define SENTIENT_H_INCLUDE

#include "../../Calendar.h"

#include "../Being.h"

#include "../Event.h"

#include "../Location.h"

class Sentient : virtual public Being {
public:
    Calendar::Date birth_date;
    Calendar::Date death_date;
    Location* birth_place;
    Location* death_place;
    Location* resting_place;
    Event* death_event;
    
    int age;
    
    Location* current_location;
    
    /*  Myers Briggs Personality Type */
    bool introvert; //  Introvert or Extrovert (I/E)
    bool sensor;    //  Sensor or Intuitive (S/N)
    bool thinker;   //  Thinker or Feeler (T/F)
    bool judger;    //  Judger or Perciever (J/P)
    
    /* Fatal flaw */
    
    
    /* Motivation */
    
    
    /* Characteristics */
    
    
    
    Sentient(Calendar::Date);
    void kill();
    void change_location();
    void generate_personality();
    void generate_flaw();
    void generate_motivation();
    void generate_characteristics();
    void timestep_month();
    
};

#endif /* SENTIENT_H_INCLUDE */
