#pragma once
#ifndef DIE_H
#define DIE_H
#include <iostream>
using namespace std;

class Die
{
public:
    Die(int sides = 6);
    void roll();
    int getFaceValue() const;

private:
    int sides;
    int faceValue;
};


#endif

