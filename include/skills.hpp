#ifndef SKILLS_H_
#define SKILLS_H_

#define MIN_SKILL 0

using namespace std;

#include "stats.hpp"

/*! 
    \brief A class to handle points for skills, and provide functions for skills.
*/
class Skills: public Stats{
    public:
        /*!
            \brief Determine the amount of skill points for a skill group.
        */
        void determinePoints();

        /*!
            \brief Remove a skill point from a skill

            \param[in] skill    The name of the skill to remove a point from.
        */
        void decrement(string skill);
};

/*! 
    \brief A class to handle mental skills.
*/
class MentalSkills: public Skills{
    public:
        MentalSkills();
};

/*! 
    \brief A class to handle physical skills.
*/
class PhysicalSkills: public Skills{
    public:
        PhysicalSkills();
};

/*! 
    \brief A class to handle social skills.
*/
class SocialSkills: public Skills{
    public:
        SocialSkills();
};

/*! 
    \brief A class to gather all skills. and provide operations for them
*/
class CharacterSkills {
    public:
        SocialSkills social;
        MentalSkills mental;
        PhysicalSkills physical;
};

#endif