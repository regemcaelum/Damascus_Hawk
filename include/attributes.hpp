#ifndef ATTRIBUTES_H_
#define ATTRIBUTES_H_

using namespace std;

#include "stats.hpp"

class PhysicalAtt: public Stats{
    public:
        PhysicalAtt();

};

class MentalAtt: public Stats{
    public:
        MentalAtt();
};

class SocialAtt: public Stats{
    public:
        SocialAtt();
        enum class Attribute { PRES, MANIP, COMP };
};

class CharacterAttributes {
    public:
        void reset();
        void reset(int type);
        SocialAtt social;
        MentalAtt mental;
        PhysicalAtt physical;
};

#endif