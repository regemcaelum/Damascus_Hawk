#ifndef CHARDATA_H_
#define CHARDATA_H_

#include <iostream>
#include <string>

#include "skills.hpp"
#include "attributes.hpp"

using namespace std;

/**
 * @class characterData
 * @brief A class containing the character information
 * @details This is a class that contains general characteristics of a character
 *          to include: name, sex, physical description, and age
 */
class CharacterData {
    public:
        string name;
        string sex;
        string description;
        int age;
        int size;

        CharacterData();
        CharacterData(string Name, string Sex, string Description, int Age);
        void setName(string value);
        void setSex(string value);
        void setDescription(string value);
        void setAge(int value);

        string getName() { return name; }
        string getSex() { return sex; }
        string getDescription() { return description; }
        int getAge() { return age; }
};

class PlayerCharacter: public CharacterData {
    public:
        // Character Information
        string player;
        string concept;
        string chronicle;
        string groupName;
        string virtue;
        string vice;
        int experience;
        int totalExperience;
        int speed;
        int health;
        int willpower;
        int initiative;
        int defense;

        PlayerCharacter();
        void calcSpeed();
        void calcHealth();
        void calcWillpower();
        void calcInitiative();
        void calcDefense();
    protected:
        CharacterAttributes attributes;
        CharacterSkills skills;
};

class MortalCharacter: public PlayerCharacter {
    public:
        string faction;
        int integrity;
};

#endif
