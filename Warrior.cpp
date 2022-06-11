#include "Warrior.hpp"
using namespace std;

Warrior::Warrior(string name) : Character(name, "Warrior"){
    this->life = 100;
    this->agility = 8;
    this->strength = 10;
    this->wit = 3;
    cout << name << ":  My name will go down in history !" << endl;
}

Warrior::~Warrior(){

}

void Warrior::attack(string weapon){
    if (weapon == "hammer" || weapon == "sword"){
        cout << name << ": Rrrrrrrrr...." << endl;
        cout << name << ":  I'll crush you with my " << weapon << " !" << endl;
    }
}