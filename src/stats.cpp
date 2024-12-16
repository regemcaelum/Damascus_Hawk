#include "stats.hpp"

void Stats::setPriority(short level) {
    Stats::priority = level;
}

void Stats::determinePoints() {
    Stats::spentPoints = 0;
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
    if(Stats::stats[stat] < MAX_STAT && Stats::spentPoints < Stats::points) {
        Stats::stats[stat]++;
        Stats::spentPoints++;
    }
}

void Stats::decrement(string stat){
    if(Stats::stats[stat] > MIN_STAT && Stats::spentPoints > 0) {
        Stats::stats[stat]--;
        Stats::spentPoints--;
    }
}
