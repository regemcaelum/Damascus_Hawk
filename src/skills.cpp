#include "skills.hpp"

/*!
    Creates a Skills object setting pointMin to 1 and pointValues to the skills
    levels 11, 7, 4.
*/
Skills::Skills() {
    Skills::pointMin = 0;
    Skills::pointValues = {
        {1, 11},
        {2, 7},
        {3, 4}
    };
}

/*!
    Uses the unordered_map of parent class Stats to store the mental
    skills of the character.
*/
MentalSkills::MentalSkills(): Skills() {
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
PhysicalSkills::PhysicalSkills(): Skills() {
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
SocialSkills::SocialSkills(): Skills() {
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