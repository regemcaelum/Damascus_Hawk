#include "dice.hpp"

using namespace std;

/*!
    Uses vector and generate random number in equlivent to the value of the pool
    parameter. If a number is greater than or equal to the explode parameter,
    which defaults to 10, then another die is added to the pool.
*/
std::vector<int> roll(int pool, int explode) {
    vector<int> results(pool);
    vector<int>::iterator die;

    srand(time(NULL));
    for(die = results.begin(); die != results.end(); ++die) {
        *die = rand()%10+1;
        if(*die >= explode) {
            pool++;
            results.resize(pool);
        }
    }

    return results;
}
