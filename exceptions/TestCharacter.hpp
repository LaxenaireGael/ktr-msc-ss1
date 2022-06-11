#ifndef TESTCHARACTER_HPP
#define TESTCHARACTER_HPP

#include "Character.hpp"


class TestCharacter : public Character
{
public:
    TestCharacter(std::string name);
    ~TestCharacter();
    void attack(string weapon);
};


#endif