#include "attributes.hpp"

PhysicalAtt::PhysicalAtt() {
    stats = {
        {"strength", 1},
        {"dexterity", 1},
        {"stamina", 1}
    };
}

MentalAtt::MentalAtt() {
    stats = {
        {"intelligence", 1},
        {"wits", 1},
        {"resolve", 1}
    };
}

SocialAtt::SocialAtt() {
    stats = {
        {"presence", 1},
        {"manipulation", 1},
        {"composure", 1}
    };
}