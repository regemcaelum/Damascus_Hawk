#include <iostream>
#include <vector>
#include "dice.h"

using namespace std;

int main() {
    vector< vector<int> > rolls(3);

    rolls.push_back(roll(5));
    rolls.push_back(roll(7));
    rolls.push_back(roll(15));

    for(int i=0; i < rolls.size; i++) {
      copy(rolls.at(ii).begin(), rolls.at(i).end(), ostream_iterator<char>(cout, " "));
    }
    return 0;
}
