#include "Character.hpp"

Character::Character(string name, string RPGClass){
    this->name = name;
    this->RPGClass = RPGClass;
    this->life = 50;
    this->agility = 2;
    this->strength = 2;
    this->wit = 2;
}

string Character::getName() const{
    return this->name;
}

string Character::getRPGClass() const{
    return this->RPGClass;
}

int Character::getLife() const{
    return this->life;
}

int Character::getAgility() const{
    return this->agility;
}

int Character::getStrength() const{
    return this->strength;
}

int Character::getWit() const{
    return this->wit;
}

void Character::attack(string random){
    cout << name << ":  Rrrrrrrrr ...." << endl;
}