#ifndef STATS_H_
#define STATS_H_

using namespace std;

class Stats {
    protected:
        int priority;
        int points;
        int spentPoints;

    public:
        void setPriority(int level);
        void determinePoints();
};

#endif