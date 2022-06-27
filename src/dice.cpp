#includes "dice.hpp"

using namespace std;

std::vector<int> roll(int pool, int explode) {
    vector<int> results(pool);

    srand(time(NULL));
    for(int roll = 0; roll < pool; roll++) {
        results.at(roll) = rand()%10+1;
        if(results.at(roll) >= explode) {
            pool++;
            results.resize(pool);
        }
    }

    return results;
}
