#include "playerCharacter.hpp"

/*!
    Creates a PlayerCharacter object with the default variables
    of beats, experience, totalExperience, and age set to 0 and size set
    to 5.
*/
PlayerCharacter::PlayerCharacter() : CharacterData() {
    PlayerCharacter::beats = 0;
    PlayerCharacter::experience = 0;
    PlayerCharacter::totalExperience = 0;
    PlayerCharacter::aspirations.reserve(3);
}

/*! 
    Creates a PlayerCharacter object setting the member
    attributes name, sex, description, and age to the provided values
    while setting the size to 5, and beats, experience, and 
    totalExperience to 0.
*/
PlayerCharacter::PlayerCharacter(string Name,
                                 string Sex,
                                 string Description,
                                 int Age) : 
                                 CharacterData(Name, Sex, Description, Age) {
    PlayerCharacter::beats = 0;
    PlayerCharacter::experience = 0;
    PlayerCharacter::totalExperience = 0;
    PlayerCharacter::aspirations.reserve(3);
}

/*!
    Uses the formula 5 + strength + dexterity to find the speed of the player
    character.
*/
void PlayerCharacter::calcSpeed() {
    PlayerCharacter::speed = 5 + 
                        PlayerCharacter::attributes.physical.stats["strength"] +
                        PlayerCharacter::attributes.physical.stats["dexterity"];
}

/*!
    Uses the formula size + stamina to find the health of the player character.
*/
void PlayerCharacter::calcHealth() {
    PlayerCharacter::health = PlayerCharacter::size +
                        PlayerCharacter::attributes.physical.stats["stamina"];
}

/*!
    Uses the formula resolve +composure to find the willpower of the player
    character.
*/
void PlayerCharacter::calcWillpower() {
    PlayerCharacter::willpower = 
                        PlayerCharacter::attributes.social.stats["composure"] +
                        PlayerCharacter::attributes.mental.stats["resolve"];
}

/*!
    Uses the formula dexterity + composure to find the initiative mod of the 
    player character.
*/
void PlayerCharacter::calcInitiative() {
    PlayerCharacter::initiative = 
                        PlayerCharacter::attributes.social.stats["composure"] +
                        PlayerCharacter::attributes.physical.stats["dexterity"];
}

/*!
    Determines which is higher wits or dexterity then adds that to athletics to
    calculate the player characters defense.
*/
void PlayerCharacter::calcDefense() {
    PlayerCharacter::defense = PlayerCharacter::skills.physical.stats["Athletics"];
    if(PlayerCharacter::attributes.physical.stats["dexterity"] >
        PlayerCharacter::attributes.mental.stats["wits"]) {
            PlayerCharacter::defense +=
            PlayerCharacter::attributes.physical.stats["dexterity"];
            return;
    }
    PlayerCharacter::defense += PlayerCharacter::attributes.mental.stats["wits"];
}

/*!
    Adds 1 to beats and if beats reachs 5 resets beats to 0 then increases xp
    and total xp by 1.
*/
void PlayerCharacter::addBeats() {
    PlayerCharacter::beats++;
    if(PlayerCharacter::beats == 5) {
        PlayerCharacter::beats = 0;
        PlayerCharacter::experience++;
        PlayerCharacter::totalExperience++;
    }
}

/*!
    Removes the completed aspiration from the aspiration list before adding a
    beat to the character.
*/
void PlayerCharacter::completeAspiration(int index) {
    PlayerCharacter::removeAspiration(index);
    PlayerCharacter::addBeats();
}

/*!
    Addes the new aspiration to the end of the aspiration list 
*/
void PlayerCharacter::addAspiration(string value) {
    PlayerCharacter::aspirations.push_back(value);
}

/*!
    Removes the indicated aspiration from the aspiration list.
*/
void PlayerCharacter::removeAspiration(int index) {
    PlayerCharacter::aspirations.erase(
        PlayerCharacter::aspirations.begin() + index - 1);
}