#include <iostream>
#include <string>
#include "characterData.h"

using namespace std;

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
