#ifndef MORTCHAR_H_
#define MORTCHAR_H_

#include <iostream>
#include <string>

#include "playerCharacter.hpp"

/*!
    \brief A class to handle a Mortal splat Player Character

    This class manages player characters that are of the base mortal splat for 
    Chronicals of Darkness. This handles the anchors virtue, vice, faction,
    group name, and the Integrity stat.
*/
class MortalCharacter: public PlayerCharacter {
    public:
        /*!
            \brief The virtue of the mortal

            A representation of the mortal's sense of 
            self-actualization or virtue.
        */
        string virtue;

        /*!
            \brief The vice of the mortal

            A representation of what provides short-term comfort to the player 
            character or their vice.
        */
        string vice;

        /*!
            \brief The name of the mortal faction

            In a mortal character this is not that important, but in other
            splats it has a profound effect on the character.
        */
        string faction;

        /*!
            \brief The name of the player group

            This is the in universe name that the player's group uses.
        */
        string groupName;

        /*!
            \brief The intergrity of the mortal character

            This is a representation of a mortal's mental stability. It starts
            at 7.
        */
        short integrity;
};

#endif