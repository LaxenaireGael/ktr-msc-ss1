#include "TestCharacter.hpp"

TestCharacter::TestCharacter(string name): Character(name, "TestCharacter"){
    this->life = life;
    this->agility = agility;
    this->strength = strength;
    this->wit = wit;
}

TestCharacter::~TestCharacter(){

}

void TestCharacter::attack(string weapon){
        cout << name << ":  Rrrrrrrrr ...." << endl;
}