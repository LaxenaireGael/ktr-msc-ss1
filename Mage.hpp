#ifndef MAGE_HPP
#define MAGE_HPP

#include "Character.hpp"
using namespace std;

class Mage : public Character{
    public:
        Mage(string name);
        ~Mage();
        void attack(string weapon);
};

#endif