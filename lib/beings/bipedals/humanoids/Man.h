/*  Created 2020, February 9th by Keegan Kochis
 *  This class extends from Humanoid.
 *  This class is the base class for all human like races.
*/

#ifndef MAN_H_INCLUDE
#define MAN_H_INCLUDE

#include <string>

#include "../../Sentient.h"
#include "../Humanoid.h"

#include "../../../organizations/Family.h"

class Man : public Humanoid, public Sentient {
public:
    std::string race;
    
    Family* birth_family;
    Family* true_family;
    
    Man* birth_father;
    Man* birth_mother;
    Man* true_father;
    Man* true_mother;
    
    
};

#endif /* MAN_H_INCLUDE */
