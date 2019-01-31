#ifndef CHARDATA_H_
#define CHARDATA_H_

using namespace std;

class characterData {
    public:
        // Character Information
        string name;
        string sex;
        string description;
        int age;
};

class PhysicalAttributes {
    int priority;
    int points;
    int spentPoints;
    int strength;
    int dexterity;
    int stamina;

    public:
    PhysicalAttributes();
    void setPriority(int level);
    void determinePoints();
    void resetAttributes();
    int incramentAttribute();
    int decramentAttribute();
};

class MentalAttributes {
        int priority;
        int points;
        int intelligence;
        int wits;
        int resolve;
};

class SocialAttributes {
        int priority;
        int points;
        int presence;
        int manipulation;
        int composure;
};

class MentalSkills {
    public:
    private:
        // Mental
        int priority;
        int points;
        int academics;
        int computer;
        int crafts;
        int investigation;
        int medicine;
        int occult;
        int politics;
        int science;
};

class PhysicalSkills {
        // Physical
        int priority;
        int points;
        int atheltics;
        int brawl;
        int drive;
        int firearms;
        int larceny;
        int stealth;
        int survival;
        int weaponry;
};

class SocialSkills {
        // Social
        int priority;
        int points;
        int animalKen;
        int empathy;
        int expression;
        int intimidation;
        int persuasion;
        int socialize;
        int streetwise;
        int subterfuge;
};

class CharacterAttributes {
    SocialAttributes sAttributes;
    MentalAttributes mAttributes;
    PhysicalAttributes pAttributes;
};

class CharacterSkills {
    SocialSkills sSkills;
    MentalSkills mSkills;
    PhysicalSkills pSkills;
};

#endif
/*
class PlayerCharacter {
    public:
        // Character Information
        string player;
        string concept;
        string chronicle;
        string faction;     // Seems to change between game line
        string groupName;   // Seems to change between game line
        int virtue;
        int vice;
        int experience;
        int totalExperience;
    private:
        CharacterAttributes pcAttributes;
        CharacterSkills pcSkills;
};*/
