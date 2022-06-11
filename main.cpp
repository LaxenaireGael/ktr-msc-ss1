#include <iostream>
#include "Warrior.hpp"
#include "Mage.hpp"
using namespace std;

int main(){
    Warrior warrior("Jean-Luc");
    Mage mage("Robert");

    
    warrior.moveRight () ;
    warrior.moveLeft () ;
    warrior.moveBack () ;
    warrior.moveForward () ;
    mage.moveRight () ;
    mage.moveLeft () ;
    mage.moveBack () ;
    mage.moveForward () ;


    return 0;
}