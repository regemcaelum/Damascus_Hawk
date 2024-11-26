#ifndef SKILLS_H_
#define SKILLS_H_

using namespace std;

#include "stats.hpp"

class Skills: public Stats{
    public:
        void determinePoints();
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
    Social social;
    Mental mental;
    Physical physical;
};

#endif