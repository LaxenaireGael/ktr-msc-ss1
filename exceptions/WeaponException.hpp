#ifndef WEAPONEXCEPTION_HPP
#define WEAPONEXCEPTION_HPP

#include <iostream>
#include <exception>

#include "Character.hpp"

class Character;

class WeaponException: exception{
    public:
        WeaponException();
        WeaponException(Character Character, string weapon);
        virtual const char *what() const throw(){
            return this->msg.c_str();
        }
    
    private:
        string msg;
};

#endif