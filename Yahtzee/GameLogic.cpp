#include "GameLogic.h"
#include "Die.h"
#include "ConsoleUI.h"
#include <iostream>
using namespace std;

GameLogic::GameLogic() 
{
    for (int i = 0; i < 6; ++i) 
    {
        usedCategories[i] = false;
    }
}

void GameLogic::rollDice(Die dice[], const bool diceToRoll[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        if (diceToRoll[i]) 
        {
            dice[i].roll();
        }
    }
}

int GameLogic::calculateScore(const Die dice[], int size, int category) 
{
    int score = 0;
    for (int i = 0; i < size; ++i) 
    {
        if (dice[i].getFaceValue() == category) 
        {
            score += category;
        }
    }
    return score;
}

bool GameLogic::isCategoryAvailable(int category) const 
{
    return !usedCategories[category - 1];
}

void GameLogic::markCategoryAsUsed(int category) 
{
    usedCategories[category - 1] = true;
}

bool GameLogic::allCategoriesUsed() const 
{
    for (int i = 0; i < 6; ++i) 
    {
        if (!usedCategories[i]) return false;
    }
    return true;
}