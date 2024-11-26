#include "attributes.hpp"

Physical::Physical() {
    stats = {
        {"strength", 1},
        {"dexterity", 1},
        {"stamina", 1}
    };
}

Mental::Mental() {
    stats = {
        {"intelligence", 1},
        {"wits", 1},
        {"resolve", 1}
    };
}

Social::Social() {
    stats = {
        {"presence", 1},
        {"manipulation", 1},
        {"composure", 1}
    };
}