#include "stats.hpp"

/*!
    Takes in the level that the player wishes to set the level to sets the
    priority attribute to that level.
*/
void Stats::setPriority(short level) {
    Stats::priority = level;
}

/*!
    Uses the priority attribute to determine the amount of points that a stat
    group can handle.
*/
void Stats::determinePoints() {
    Stats::points = Stats::pointValues[Stats::priority];
}

/*!
    Checks that the stat is not at its max and that there are points to spend,
    before increasing the stat and the points spent.
*/
void Stats::increment(string stat){
    if(Stats::stats[stat] < MAX_STAT && Stats::spentPoints < Stats::points) {
        Stats::stats[stat]++;
        Stats::spentPoints++;
    }
}

/*!
    Checks that the stat is greater than its minimum and since it can't be
*/
void Stats::decrement(string stat){
    if(Stats::stats[stat] > Stats::pointMin) {
        Stats::stats[stat]--;
        Stats::spentPoints--;
    }
}
