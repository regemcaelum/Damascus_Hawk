#ifndef ATTRIBUTES_H_
#define ATTRIBUTES_H_

using namespace std;

#include "stats.hpp"

class Physical: public Stats{
    protected:
        int strength;
        int dexterity;
        int stamina;
    
    public:
        enum class Attribute { STR, DEX, STAM };
        void incrament(Attribute attribute);
        void decrament(Attribute attribute);
};

class Mental: public Stats{
    protected:
        int intelligence;
        int wits;
        int resolve;
    
    public:
        enum class Attribute { INT, WITS, RES };
        void incrament(Attribute attribute);
        void decrament(Attribute attribute);
};

class Social: public Stats{
    protected:
        int presence;
        int manipulation;
        int composure;
    
    public:
        enum class Attribute { PRES, MANIP, COMP };
        void incrament(Attribute attribute);
        void decrament(Attribute attribute);
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