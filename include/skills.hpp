#ifndef SKILLS_H_
#define SKILLS_H_

#define MIN_SKILL 0

using namespace std;

#include "stats.hpp"

class Skills: public Stats{
    public:
        void determinePoints();
        void decrement(string skill);
};

class MentalSkills: public Skills{
    public:
        MentalSkills();
};

class PhysicalSkills: public Skills{
    public:
        PhysicalSkills();
};

class SocialSkills: public Skills{
    public:
        SocialSkills();
};

class CharacterSkills {
    public:
        SocialSkills social;
        MentalSkills mental;
        PhysicalSkills physical;
};

#endif