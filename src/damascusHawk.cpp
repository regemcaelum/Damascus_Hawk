#include <iostream>
#include <vector>
#include <cstdlib>
#include <iterator>
#include "dice.hpp"

using namespace std;

int main() {
    vector< vector<int> > rolls(3);

    rolls.push_back(roll(5));
    rolls.push_back(roll(7));
    rolls.push_back(roll(15));

    for(unsigned int i=0; i < rolls.size(); i++) {
      copy(rolls[i].begin(), rolls[i].end(), ostream_iterator<int>(cout, " "));
      cout << endl;
    }
    return 0;
}
