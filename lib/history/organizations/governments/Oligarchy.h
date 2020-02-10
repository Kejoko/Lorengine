/*  Created 2020, February 10th by Keegan Kochis
 *  This class extends from Government.
 *  This class is the base class for all types of oligarchic governing bodies.
*/

#ifndef OLIGARCHY_H_INCLUDE
#define OLIGARCHY_H_INCLUDE

#include "../../Organization.h"
#include "../Government.h"

class Oligarchy : virtual public Government {
public:
    Organization* ruling_group;
    
};

#endif /* OLIGARCHY_H_INCLUDE */
