#include "Die.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

Die::Die(int sides) : 
    sides(sides), faceValue(1) 
{
    srand(time(0));  
    
    // Initialize random seed
}

void Die::roll() 
{
    faceValue = rand() % sides + 1;
}

int Die::getFaceValue() const 
{
    return faceValue;
}