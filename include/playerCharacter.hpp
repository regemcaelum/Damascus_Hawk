#ifndef PLAYCHAR_H_
#define PLAYCHAR_H_

#include <iostream>
#include <string>
#include <vector>

#include "characterData.hpp"

/*!
    \brief A class to handle the Player Characters data

    This class manages a player characters stats that are common throughout all
    splats. As well as handles calculations and functions that are common 
    throughout.
*/
class PlayerCharacter: public CharacterData {
    public:
        /*!
            \brief The player's name

            The name of whoever is playing this character.
        */
        string player;

        /*!
            \brief The character concept

            A short two word description of the idea behind the character.
        */
        string concept;

        /*!
            \brief The name of the chronicle

            Chronicles of Darkness expects a chronicle to be named. None of mine
            have had a name, so yeah.
        */
        string chronicle;

        /*!
            \brief The experience the player has currently

            Experience tracker. This is the value of the current total of xp a 
            player character has.
        */
        short experience;

        /*!
            \brief The beats tracker.

            Tracks the amount of beats a player character currently has 0-4. 
            When beats hits 5 it adds 1 to experience and resets to 0.
        */
        short beats;

        /*!
            \brief The total experience a player character has earned.

            Tracks how much experience the player character has earned instead 
            of what they currently have.
        */
        int totalExperience;

        /*!
            \brief The speed of a character

            Represents how fast a character. This is a calculated value.
        */
        short speed;

        /*!
            \brief The health of a character

            Represents how much life a character has. This is a calculated 
            value.
        */
        short health;

        /*!
            \brief The willpower of a character

            Represents how well a character can withstand mental torment. This 
            is a calculated value.
        */
        short willpower;

        /*!
            \brief The initiative modifier of a character

            Represents how well a character reacts in combats. This is a 
            calculated value.
        */
        short initiative;

        /*!
            \brief The defense stat of a character

            Represents how much damage a character can resist. This is a 
            calculated value.
        */
        short defense;

        /*!
            \brief Creates PlayerCharacter
        */
        PlayerCharacter();

        /*!
            \brief Creates PlayerCharacter

            \param[in] Name         The character name.
            \param[in] Sex          The gender of the character.
            \param[in] Description  A physical description of the character
            \param[in] Age          How old the character is.
        */
        PlayerCharacter(string Name, string Sex, string Description, int Age);

        /*!
            \brief Calculates the speed of the player character.
        */
        void calcSpeed();
        
        /*!
            \brief Retieves the speed attribue
            
            \return The value contained within the speed attribute
        */
        short getSpeed() { return speed; }

        /*!
            \brief Calculates the health of the player character.
        */
        void calcHealth();
        
        /*!
            \brief Retieves the health attribue
            
            \return The value contained within the health attribute
        */
        short getHealth() { return health; }
        
        /*!
            \brief Calculates the willpower of the player character.
        */
        void calcWillpower();
        
        /*!
            \brief Retieves the willpower attribue
            
            \return The value contained within the willpower attribute
        */
        short getWillpower() { return willpower; }
        
        /*!
            \brief Calculates the initiative mod of the player character.
        */
        void calcInitiative();
        
        /*!
            \brief Retieves the initiative attribue
            
            \return The value contained within the initiative attribute
        */
        short getInitative() { return initiative; }
        
        /*!
            \brief Calculates the defense of the player character.
        */
        void calcDefense();
        
        /*!
            \brief Retieves the defense attribue
            
            \return The value contained within the defense attribute
        */
        short getDefense() { return defense; }
        
        /*!
            \brief Increase the Player character's beat count.
        */
        void addBeats();
        
        /*!
            \brief Retieves the beats attribue
            
            \return The value contained within the beats attribute
        */
        short getBeats() { return beats; }
        
        /*!
            \brief Retieves the experience attribue
            
            \return The value contained within the experience attribute
        */
        short getXp() { return experience; }
        
        /*!
            \brief Retieves the total experience attribue
            
            \return The value contained within the total experience attribute
        */
        int getTotalXp() { return totalExperience; }
    
        /*!
            \brief List of Aspirations

            List of the character aspirations that can be accessed.
        */
        vector<string> aspirations;

        /*!
            \brief Marks an aspiration as complete

            \param[in] index The index of the aspirations to complete.
        */
        void completeAspiration(int index);

        /*!
            \brief Adds a aspiration to the list

            \param[in] value The string to fill into the aspiration list.
        */
        void addAspiration(string value);

        /*!
            \brief Removes an aspiration

            \param[in] index The index of the aspiration to remove from the list.
        */
        void removeAspiration(int index);
};

#endif