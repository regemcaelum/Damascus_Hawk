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
PlayerCharacter::PlayerCharacter() {
    CharacterData::CharacterData();
}

PlayerCharacter::PlayerCharacter(string Name, string Sex, string Description, int Age) {
    CharacterData::CharacterData(Name, Sex, Description, Age);
}

void PlayerCharacter::calcSpeed() {
    PlayerCharacter::speed = 5 + PlayerCharacter::attributes.physical.stats["strength"] + PlayerCharacter::attributes.physical.stats["dexterity"];
}

void PlayerCharacter::calcHealth() {
    PlayerCharacter::health = PlayerCharacter::size + PlayerCharacter::attributes.physical.stats["stamina"];
}

void PlayerCharacter::calcWillpower() {    PlayerCharacter::willpower = PlayerCharacter::attributes.social.stats["composure"] + PlayerCharacter::attributes.mental.stats["resolve"];
}

void PlayerCharacter::calcInitiative() {
    PlayerCharacter::initiative = PlayerCharacter::attributes.social.stats["composure"] + PlayerCharacter::attributes.physical.stats["dexterity"];
}

void PlayerCharacter::calcDefense() {
    PlayerCharacter::defense = PlayerCharacter::skills.physical.stats["Athletics"];
    if(PlayerCharacter::attributes.physical.stats["dexterity"] > PlayerCharacter::attributes.mental.stats["wits"]) {
        PlayerCharacter::defense += PlayerCharacter::attributes.physical.stats["dexterity"];
        return;
    }
    PlayerCharacter::defense += PlayerCharacter::attributes.mental.stats["wits"];
}