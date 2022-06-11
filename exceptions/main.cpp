#include <iostream>
#include "Warrior.hpp"
#include "Mage.hpp"
using namespace std;

int main(){
    Warrior warrior("Jean-Luc");
    Mage mage("Robert");

    warrior.TryToAttack("screwdriver");
    mage.TryToAttack("hammer");
    warrior.TryToAttack("hammer");
    try{
        mage.attack("");
    }catch(WeaponException e){
        cout << e.what() << endl;
    }


    return 0;
}