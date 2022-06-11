#include "Mage.hpp"
using namespace std;

Mage::Mage(string name) : Character(name, "Mage"){
    this->life = 70;
    this->agility = 10;
    this->strength = 3;
    this->wit = 10;
    cout << name << ": May the gods be with me." << endl;
}

Mage::~Mage(){

}

void Mage::attack(string weapon){
    if (weapon == "magic" || weapon == "wand"){
        cout << name << ": Rrrrrrrrr...." << endl;
        cout << name << ": Feel the power of my " << weapon << " !" << endl;
    }
}