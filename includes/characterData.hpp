#ifndef CHARDATA_H_
#define CHARDATA_H_

using namespace std;

/**
 * @class characterData
 * @brief A class containing the character information
 * @details This is a class that contains general characteristics of a character
 *          to include: name, sex, physical description, and age
 */
class characterData {
    string name;
    string sex;
    string description;
    int age;
    
    public:
        characterData();
        void setName(string name);
        void setSex(string sex);
        void setDescription(string description);
        void setAge(int age);
    
        string getName() { return name; }
        string getSex() { return sex; }
        string getDescription() { return description; }
        ing getAge() { return age; }
};

// TODO: move next few class to an Attributes.hpp file
class Attributes {
    protected:
        int priority;
        int points;
        int spentPoints;
            
    public:
        void setPriority(int level);
        void determinePoints();
        enum class Attribute { STR, DEX, STAM, INT, WITS, RES, PRES, MANIP, COMP };
};

class PhysicalAttributes: public Attributes {
    protected:
        int strength;
        int dexterity;
        int stamina;
};

class MentalAttributes: public Attributes {
    int intelligence;
    int wits;
    int resolve;
};

class SocialAttributes: public Attributes {
    int presence;
    int manipulation;
    int composure;
};

class CharacterAttributes: public MentalAttributes, public SocialAttributes, public PhysicalAttributes {
    SocialAttributes sAttributes;
    MentalAttributes mAttributes;
    PhysicalAttributes pAttributes;
    
    public:
        void resetAttributes();
        void resetAttributes(int type);
        int incramentAttribute(Attribute attribute);
        int decramentAttribute(int attribute);
};

// TODO: move next few class to an Skills.hpp file
class Skills {
    protected:
        int priority;
        int points;
};
class MentalSkills: public Skills {
    int academics;
    int computer;
    int crafts;
    int investigation;
    int medicine;
    int occult;
    int politics;
    int science;
};

class PhysicalSkills: public Skills {
    int atheltics;
    int brawl;
    int drive;
    int firearms;
    int larceny;
    int stealth;
    int survival;
    int weaponry;
};

class SocialSkills: public Skills {
    int animalKen;
    int empathy;
    int expression;
    int intimidation;
    int persuasion;
    int socialize;
    int streetwise;
    int subterfuge;
};

class CharacterSkills: public MentalSkills, public SocialSkills, public PhysicalSkills {
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
