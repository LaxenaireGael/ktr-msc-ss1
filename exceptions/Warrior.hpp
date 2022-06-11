#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"
using namespace std;

class Warrior : public Character{
    public:
        Warrior(string name);
        ~Warrior();
        void attack(string weapon);
        void moveRight();
        void moveLeft();
        void moveForward();
        void moveBack();
};

#endif