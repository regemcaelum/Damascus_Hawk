#ifndef STATS_H_
#define STATS_H_

#include <string>
#include <unordered_map>

#define MAX_STAT 5
#define MIN_STAT 1

using namespace std;

class Stats {
    protected:
        short priority;
        short points;
        short spentPoints;
        unordered_map<string, short> stats;

    public:
        void setPriority(short level);
        void determinePoints();
        void increment(string stat);
        void decrement(string stat);
};

#endif