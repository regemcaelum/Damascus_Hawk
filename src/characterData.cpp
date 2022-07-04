#include "characterData.hpp"

// Member functions for CharacterData
CharacterData::CharacterData() {
    age = 0;
    size = 5;
}

CharacterData::CharacterData(string Name, string Sex, string Description, int Age) {
    name = Name;
    sex = Sex;
    description = Description;
    age = Age;
    size = 5;
}

void CharacterData::setName(string value) {
    name = value;
}

void CharacterData::setSex(string value) {
    sex = value;
}

void CharacterData::setName(string value) {
    description = value;
}

void CharacterData::setAge(int value) {
    age = value;
}

// Member functions for PlayerCharacter
