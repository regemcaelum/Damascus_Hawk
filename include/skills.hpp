#ifndef SKILLS_H_
#define SKILLS_H_

using namespace std;

#include "stats.hpp"

/*! 
    \brief A class to handle points for skills, and provide functions for skills.
*/
class Skills: public Stats{
    public:
        /*!
            \brief Creates Skills
        */
        Skills();
};

/*! 
    \brief A class to handle mental skills.
*/
class MentalSkills: public Skills{
    public:
        /*!
            \brief Creates MentalSkills
        */
        MentalSkills();
};

/*! 
    \brief A class to handle physical skills.
*/
class PhysicalSkills: public Skills{
    public:
        /*!
            \brief Creates PhysicalSkills
        */
        PhysicalSkills();
};

/*! 
    \brief A class to handle social skills.
*/
class SocialSkills: public Skills{
    public:
        /*!
            \brief Creates SocialSkills
        */
        SocialSkills();
};

/*! 
    \brief A class to gather all skills. and provide operations for them
*/
class CharacterSkills {
    public:
        /*!
            \brief The social skill group
        */
        SocialSkills social;
       
        /*!
            \brief The mental skill group
        */
        MentalSkills mental;

        /*!
            \brief The physical skill group
        */
        PhysicalSkills physical;
};

#endif