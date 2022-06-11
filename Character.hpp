#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Movable.hpp"

#include <iostream>
using namespace std;

class Character: public Movable{
    public:
        Character(string name, string RPGClass);
        string getName() const;
        string getRPGClass() const;
        int getLife() const;
        int getAgility() const;
        int getStrength() const;
        int getWit() const;
        void unsheath();


    protected:
        string name;
        string RPGClass;
        int life;
        int agility;
        int strength;
        int wit;

        void attack(string weapon);
        void moveRight();
        void moveLeft();
        void moveForward();
        void moveBack();
        
};


#endif