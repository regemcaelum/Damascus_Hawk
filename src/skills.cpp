#include "skills.hpp"

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

void Skills::decrement(string skill){
    if(stats[skill] > MIN_SKILL && Skills::spentPoints > 0) {
        stats[skill]--;
        spentPoints--;
    }
}

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