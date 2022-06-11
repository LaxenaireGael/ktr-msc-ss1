#include <iostream>
#include "TestCharacter.hpp"
using namespace std;

int main(){
    TestCharacter perso = TestCharacter("Jean-Luc");
    cout<< perso.getName() << endl;
    cout<< perso.getLife() << endl;
    cout<< perso.getAgility() << endl;
    cout<< perso.getStrength() << endl;
    cout<< perso.getWit() << endl;
    cout<< perso.getRPGClass() << endl;
    perso.attack("my weapon");

    return 0;
}