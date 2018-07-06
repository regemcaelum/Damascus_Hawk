#ifndef DICE_HPP_
#define DICE_HPP_

#include <vector>
#include <ctime>
#include <cstdlib>

#define CRIT 10
#define SUCCESS_THRESHOLD 7

std::vector<int> roll(int pool, int explode=10);

#endif
