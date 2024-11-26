#include "skills.hpp"

void Skills::determinePoints() {
    if (Skills::priority == 1) {
        Skills::points = 11;
        return;
    }
    if (Skills::priority == 2) {
        Skills::points = 7;
        return;
    }
    Skills::priority = 4;
}

Physical::Physical() {
    stats = {
        {"strength", 1},
        {"dexterity", 1},
        {"stamina", 1}
    };
}

Mental::Mental() {
    stats = {
        {"academics", 0},
        {"computer", 0},
        {"crafts", 0},
        {"investigation", 0},
        {"medicine", 0},
        {"occult", 0},
        {"politics", 0},
        {"science", 0}
    };
}

Social::Social() {
    stats = {
        {"presence", 1},
        {"manipulation", 1},
        {"composure", 1}
    };
}