#include "skills.hpp"

/*!
    Determines the amount of skill points for the skill group based on the
    priority set for the skill group.
*/
void Skills::determinePoints() {
    Skills::spentPoints = 0;
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

/*!
    Checks to ensure skills aren't going below the minimum before
    removing a skill point from the provided skills and adjusting the amount
    of skill points spent.
*/
void Skills::decrement(string skill){
    if(stats[skill] > MIN_SKILL && Skills::spentPoints > 0) {
        stats[skill]--;
        spentPoints--;
    }
}

/*!
    Uses the unordered_map of parent class Stats to store the mental
    skills of the character.
*/
MentalSkills::MentalSkills() {
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

/*!
    Uses the unordered_map of parent class Stats to store the physical
    skills of the character.
*/
PhysicalSkills::PhysicalSkills() {
    stats = {
        {"atheltics", 0},
        {"brawl", 0},
        {"drive", 0},
        {"firearms", 0},
        {"larceny", 0},
        {"stealth", 0},
        {"survival", 0},
        {"weaponry", 0}
    };
}

/*!
    Uses the unordered_map of parent class Stats to store the social
    skills of the character.
*/
SocialSkills::SocialSkills() {
    stats = {
        {"animalKen", 0},
        {"empathy", 0},
        {"expression", 0},
        {"intimidation", 0},
        {"persuasion", 0},
        {"socialize", 0},
        {"streetwise", 0},
        {"subterfuge", 0}
    };
}