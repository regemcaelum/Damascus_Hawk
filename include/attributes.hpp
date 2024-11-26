#ifndef ATTRIBUTES_H_
#define ATTRIBUTES_H_

using namespace std;

#include "stats.hpp"

class Physical: public Stats{
    public:
        Physical();

};

class Mental: public Stats{
    public:
        Mental();
};

class Social: public Stats{
    public:
        Social();
        enum class Attribute { PRES, MANIP, COMP };
};

class CharacterAttributes {
    Social social;
    Mental mental;
    Physical physical;

    public:
        void reset();
        void reset(int type);
};

#endif