#include "characterData.hpp"

/*!
    Creates a CharacterData object with the default variables
    of age set to 0 and size set to 5.
*/
CharacterData::CharacterData() {
    age = 0;
    size = 5;
}

/*!
    Creates a CharacterData object setting the member
    attributes name, sex, description, and age to the provided values
    while setting the size to 5.
*/
CharacterData::CharacterData(string Name,
                             string Sex,
                             string Description,
                             short Age) {
    name = Name;
    sex = Sex;
    description = Description;
    age = Age;
    size = 5;
}

/*!
    Takes in a string variable and fills in the Name member
    attribute.
*/
void CharacterData::setName(string value) {
    name = value;
}

/*!
    Takes in a string variable and fills in the Sex member
    attribute.
*/
void CharacterData::setSex(string value) {
    sex = value;
}

/*!
    Takes in a string variable and fills in the Description
    member attribute.
*/
void CharacterData::setDescription(string value) {
    description = value;
}

/*!
    Takes in a string variable and fills in the Age member
    attribute.
*/
void CharacterData::setAge(short value) {
    age = value;
}