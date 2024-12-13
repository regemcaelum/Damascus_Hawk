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

class Mental: public Skills{
    public:
        Mental();
};

class Physical: public Skills{
    public:
        Physical();
};

class Social: public Skills{
    public:
        Social();
};

class CharacterSkills {
    public:
        Social social;
        Mental mental;
        Physical physical;
};

#endif