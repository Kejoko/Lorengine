/*  Created 2020, February 10th by Keegan Kochis
 *  This class extends from Autocracy.
 *  This class is the base class for all types of monarchy governments.
*/

#ifndef MONARCHY_H_INCLUDE
#define MONARCHY_H_INCLUDE

#include "../../../Being.h"

#include "../../Family.h"
#include "../Autocracy.h"

class Monarchy : public Autocracy {
public:
    Family* ruling_family;
    
};

#endif /* MONARCHY_H_INCLUDE */
