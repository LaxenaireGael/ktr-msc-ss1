#include <iostream>
#include "Warrior.hpp"
#include "Mage.hpp"
using namespace std;

int main(){
    Warrior warrior("Jean-Luc");
    Mage mage("Robert");

    warrior.attack("hammer");
    mage.attack("magic");

    return 0;
}