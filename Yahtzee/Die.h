#pragma once
#ifndef DIE_H
#define DIE_H
#include <iostream>
using namespace std;

class Die
{
private:
    int sides;
    int faceValue;
public:
    Die(int sides = 6);
    void roll();
    int getFaceValue() const;
};


#endif

