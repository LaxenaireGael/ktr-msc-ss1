#include "WeaponException.hpp"

WeaponException::WeaponException(Character Character, string weapon): exception(){
    if (weapon == ""){
        this->msg = Character.getName() + ": I refuse to fight with my bare hands.";
        return;
    }
    else if (Character.getRPGClass()=="Warrior"){
        this->msg = Character.getName() + ": A " + weapon + " ?? What should I do with this?!";
    }
    else if (Character.getRPGClass()=="Mage"){
        this->msg = Character.getName() + ": I don't need this stupid " + weapon + " ! Don't misjudge my powers!";
    }

}