#ifndef CHARDATA_H_
#define CHARDATA_H_

#include <iostream>
#include <string>

#include "skills.hpp"
#include "attributes.hpp"

using namespace std;

/*!
    \brief A class containing the character information
    
    This is a class that contains general characteristics of a 
    character to include: name, sex, physical description, and age. 
 */
class CharacterData {
    public:
        /*!
            \brief The name of the character

            Representes the character's name. Can be set when the object is 
            created.
        */
        string name;

        /*!
            \brief The sex of the character

            Represents the character's gender. This is not set to a binary for
            a reason.
        */
        string sex;
        
        /*!
            \brief The physical description of the character.

            This is how the character looks, be as specific as needed.
        */
        string description;

        /*!
            \brief The age of the character

            This represents the characters age. used a short because the stone
            age ended between 4000 and 6000 years ago so 32,767 should
            reasonably cover any character concept you want.
        */
        short age;

        /*!
            \brief The size stat of a character

            This represents how generally big a character is. Since all splats
            start at a default of 5 for this stat we used a short.
        */
        short size;

        /*!
            \brief Creates CharacterData
        */
        CharacterData();
        
        /*!
            \brief Creates CharacterData

            \param[in] name         The character name.
            \param[in] sex          The gender of the character.
            \param[in] description  A physical description of the character
            \param[in] age          How old the character is.
        */
        CharacterData(string Name, string Sex, string Description, short Age);
        
        /*!
            \brief Sets the Name variable

            \param[in] value    The string value to fill in the name with.
        */
        void setName(string value);
        
        /*!
            \brief Sets the Sex variable

            \param[in] value    The string value to fill in the Sex with.
        */
        void setSex(string value);
        
        /*!
            \brief Sets the Description variable

            \param[in] value    The string value to fill in the Description
            with.
        */
        void setDescription(string value);
        
        /*!
            \brief Sets the Age variable

            \param[in] value    The short value to fill in the Age with.
        */
        void setAge(short value);

        /*!
            \brief Retieves the name attribue

            \return The value contained within the name attribute
        */
        string getName() { return name; }

        /*!
            \brief Retieves the sex attribue
            
            \return The value contained within the sex attribute
        */
        string getSex() { return sex; }
        
        /*!
            \brief Retieves the description attribue
            
            \return The value contained within the description attribute
        */
        string getDescription() { return description; }
        
        /*!
            \brief Retieves the age attribue
            
            \return The value contained within the age attribute
        */
        short getAge() { return age; }
    protected:
        /*!
            \brief The attributes of the character
            
            CharacterAttributes object that contains all of the attributes of
            the character.
        */
        CharacterAttributes attributes;
        
        /*!
            \brief The skills of the character
            
            CharacterSkills object that contains all of the skills of the
            character.
        */
        CharacterSkills skills;
};

#endif
