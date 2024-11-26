#include "stats.hpp"

void Stats::setPriority(short level) {
    Stats::priority = level;
}

void Stats::determinePoints() {
    if (Stats::priority == 1) {
        Stats::points = 5;
        return;
    }
    if (Stats::priority == 2) {
        Stats::points = 4;
        return;
    }
    Stats::points = 3;
}

void Stats::increment(string stat){
    if(stats[stat] < MAX_STAT) {
        stats[stat]++;
    }
}

void Stats::decrement(string stat){
    if(stats[stat] > MIN_STAT) {
        stats[stat]--;
    }
}
