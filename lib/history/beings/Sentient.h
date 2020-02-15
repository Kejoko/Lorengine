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
    Day birth_date;
    Day death_date;
    Location* birth_place;
    Location* death_place;
    Location* resting_place;
    Event* death_event;
    
    int age;
    
    Location* current_location;
    
    /*  Big 5 Personality Traits */
    bool outgoing;
    bool challenging;
    bool confident;
    bool cautious;
    bool organized;
    
    /* Weaknesses */
    bool weakness[7];   //  Envy, rage, greed, sloth, pride, gluttony. lust
    
    /* Characteristics */
    /* Personallity Traits */
    
    
    
    Sentient(Day*);
    
    void kill();
    void change_location();
    void generate_personality();
    void generate_weakness();
    
};

#endif /* SENTIENT_H_INCLUDE */
