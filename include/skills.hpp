#ifndef SKILLS_H_
#define SKILLS_H_

using namespace std;

#include "stats.hpp"

class Mental: public Stats{
    protected:
        int academics;
        int computer;
        int crafts;
        int investigation;
        int medicine;
        int occult;
        int politics;
        int science;
    public:
        enum class Skill { 
            ACAD,
            COMPS,
            CRAFT,
            INVEST,
            MED,
            OCC,
            POLI,
            SCI,
        };
        void incrament(Skill skill);
        void decrament(Skill skill);
};

class Physical: public Stats{
    protected:
        int atheltics;
        int brawl;
        int drive;
        int firearms;
        int larceny;
        int stealth;
        int survival;
        int weaponry;
    public:
        enum class Skill { 
            ATH,
            BRAWL,
            DRIVE,
            FIRE,
            LARC,
            STEALTH,
            SURV,
            WEAP,
        };
        void incrament(Skill skill);
        void decrament(Skill skill);
};

class Social: public Stats{
    protected:
        int animalKen;
        int empathy;
        int expression;
        int intimidation;
        int persuasion;
        int socialize;
        int streetwise;
        int subterfuge;
    public:
        enum class Skill { 
            AKEN,
            EMPA,
            EXPR,
            INTIM,
            PERSUA,
            SOCI,
            STREET,
            SUBTE
        };
        void incrament(Skill skill);
        void decrament(Skill skill);
};

class CharacterSkills {
    Social social;
    Mental mental;
    Physical physical;
};

#endif