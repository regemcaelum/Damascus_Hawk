#include "attributes.hpp"

/*!
    \details uses the unordered_map of parent class Stats to store the physical
    stats of the character.
*/
PhysicalAtt::PhysicalAtt() {
    stats = {
        {"strength", 1},
        {"dexterity", 1},
        {"stamina", 1}
    };
}

/*!
    \details uses the unordered_map of parent class Stats to store the mental
    stats of the character.
*/
MentalAtt::MentalAtt() {
    stats = {
        {"intelligence", 1},
        {"wits", 1},
        {"resolve", 1}
    };
}

/*!
    \details uses the unordered_map of parent class Stats to store the social
    stats of the character.
*/
SocialAtt::SocialAtt() {
    stats = {
        {"presence", 1},
        {"manipulation", 1},
        {"composure", 1}
    };
}