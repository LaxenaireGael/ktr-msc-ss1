#include <iostream>
#include "Warrior.hpp"
#include "Mage.hpp"
using namespace std;

int main(){
    Warrior warrior("Jean-Luc");
    Mage mage("Robert");

    
    warrior.unsheath();
    mage.unsheath();


    return 0;
}