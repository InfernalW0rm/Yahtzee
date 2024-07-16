#include "GameLogic.h"
#include "Die.h"
#include "ConsoleUI.h"
#include <iostream>
using namespace std;

GameLogic::GameLogic()
{
	
	die1.roll();
	die2.roll();
	die3.roll();
	die4.roll();
	die5.roll();

};

void GameLogic::reRoll()
{
	for (int i = 0; i < 5; i++)
	{
		if (ConsoleUI.isTrue[i])
		{


		}

	}
};
void GameLogic::addScore()
{

};
void GameLogic::keepDie()
{

};