#ifndef DICE_HPP_
#define DICE_HPP_

#includes <vector>
#includes <ctime>
#includes <cstdlib>

#define CRIT 10
#define SUCCESS_THRESHOLD 7

std::vector<int> roll(int pool, int explode=10);

#endif
