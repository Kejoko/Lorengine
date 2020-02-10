/*  Created 2020, February 10th by Keegan Kochis
 *  This class extends from Government.
 *  This class is the base class for all types of autocratic governing bodies.
*/

#ifndef AUTOCRACY_H_INCLUDE
#define AUTOCRACY_H_INCLUDE

#include "../../Being.h"

#include "../Government.h"

class Autocracy : virtual public Government {
public:
    Being* current_ruler;
    Being* next_ruler;
    
};

#endif /* AUTOCRACY_H_INCLUDE */
