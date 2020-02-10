/*  Created 2020, February 10th by Keegan Kochis
 *  This class extends from Location.
 *  This class is the base class for all realms and kingdoms.
*/

#ifndef REALM_H_INCLUDE
#define REALM_H_INCLUDE

#include <vector>

#include "../Location.h"
#include "Settlement.h"

#include "../organizations/Government.h"

class Realm : public Location {
public:
    Government* ruling_body;
    std::vector<Settlement*> settlements;
};

#endif /* REALM_H_INCLUDE */
