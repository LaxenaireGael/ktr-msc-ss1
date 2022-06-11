#ifndef MOVABLE_HPP
#define MOVABLE_HPP

#include <iostream>
using namespace std;

class Movable{
    public:
        string name;
        virtual void moveRight();
        virtual void moveLeft();
        virtual void moveForward();
        virtual void moveBack();
};


#endif