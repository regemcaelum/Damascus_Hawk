#include "dice.hpp"

using namespace std;

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
