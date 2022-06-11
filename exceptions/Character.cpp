#include "Character.hpp"

Character::Character(string name, string RPGClass): Movable(){
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

void Character::moveRight(){
    cout << name << ": moves right" << endl;
}

void Character::moveLeft(){
    cout << name << ": moves left" << endl;
}

void Character::moveForward(){
    cout << name << ": moves forward" << endl;
}

void Character::moveBack(){
    cout << name << ": moves back" << endl;
}

void Character::unsheath(){
    cout << name << ": unsheath his weapon." << endl;
}

void Character::TryToAttack(string weapon){
    try{
        attack(weapon);
    }
    catch(WeaponException e){
        cout << e.what() << endl;
    }
}