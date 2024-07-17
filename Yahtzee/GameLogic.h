#pragma once
#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include <iostream>
#include "Die.h"
using namespace std;
class GameLogic 
{
private:
    bool usedCategories[6];
public:
    GameLogic();
    void rollDice(Die dice[], const bool diceToRoll[], int size);
    int calculateScore(const Die dice[], int size, int category);
    bool isCategoryAvailable(int category) const;
    void markCategoryAsUsed(int category);
    bool allCategoriesUsed() const;
};


#endif
