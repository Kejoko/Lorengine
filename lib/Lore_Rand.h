/*  Created 2020, February 14th by Keegan Kochis
 *  This class is responsible for random generation.
*/

#ifndef LORE_RAND_H_INCLUDE
#define LORE_RAND_H_INCLUDE

#include <random>

class Lore_Rand {
public:
    const static std::default_random_engine generator;
    const static std::seed_seq seed;
    
    Lore_Rand(std::seq_seed);
};

#endif /* LORE_RAND_H_INCLUDE */
