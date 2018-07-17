#include <iostream>
#include <string>
#include "characterData.h"

using namespace std;

class characterData {
    public:
        // Character Information
        string name;
        string sex;
        string description;
        int age;
};

class CharacterAttributes {
    public:
    private:
        // Physical
        int strength;
        int dexterity;
        int stamina;
        // Mental
        int intelligence;
        int wits;
        int resolve;
        // Social
        int presence;
        int manipulation;
        int composure;
};

class CharacterSkills {
    public:
    private:
        // Mental
        int academics;
        int computer;
        int crafts;
        int investigation;
        int medicine;
        int occult;
        int politics;
        int science;
        // Physical
        int atheltics;
        int brawl;
        int drive;
        int firearms;
        int larceny;
        int stealth;
        int survival;
        int weaponry;
        // Social
        int animalKen;
        int empathy;
        int expression;
        int intimidation;
        int persuasion;
        int socialize;
        int streetwise;
        int subterfuge;
};

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
};
