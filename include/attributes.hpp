#ifndef ATTRIBUTES_H_
#define ATTRIBUTES_H_

using namespace std;

#include "stats.hpp"

/*! 
    \brief A class to handle physical attributes
*/
class PhysicalAtt: public Stats {
    public:
        PhysicalAtt();

};

/*! 
    \brief A class to handle mental attributes
*/
class MentalAtt: public Stats {
    public:
        MentalAtt();
};

/*! 
    \brief A class to handle social attributes
*/
class SocialAtt: public Stats {
    public:
        SocialAtt();
};

/*! 
    \brief A class to gather all attributes and provide operations for them
*/
class CharacterAttributes {
    public:
        /*!
            \brief The social attribute group
        */
        SocialAtt social;

        /*!
            \brief The mental attribute group
        */
        MentalAtt mental;

        /*!
            \brief The physical attribute group
        */
        PhysicalAtt physical;
};

#endif