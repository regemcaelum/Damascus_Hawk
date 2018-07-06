#include <iostream>
#include <vector>
#include <cstdlib>
#include <iterator>
#include "dice.hpp"

using namespace std;

int main() {
    vector< vector<int> > rolls(3);

    rolls[0] = roll(5);
    rolls[1] = roll(7);
    rolls[2] = roll(15);

    //rolls.push_back(roll(5));
    //rolls.push_back(roll(7));
    //rolls.push_back(roll(15));

    for(int i=0; i < rolls.size(); i++) {
      copy(rolls.at(i).begin(), rolls.at(i).end(), ostream_iterator<char>(cout, " "));
    }
    return 0;
}
