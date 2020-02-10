/*  Created 2020, February 10th by Keegan Kochis
 *  This class extends from Location.
 *  This class is the base class for all settlements and communities.
*/

#ifndef SETTLEMENT_H_INCLUDE
#define SETTLEMENT_H_INCLUDE

#include <vector>

#include "../Being.h"

#include "../Location.h"

#include "../Organization.h"

class Settlement : virtual public Location {
public:
    Organization* governing_body;
    std::vector<Being*> inhabitants;
    
};

#endif /* SETTLEMENT_H_INCLUDE */
