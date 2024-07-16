#pragma once
#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include <iostream>
#include "Die.h"
#include "ConsoleUI.h"

class GameLogic
{
private:
	Die die1;
	Die die2;
	Die die3;
	Die die4;
	Die die5;
	int diceRolling[4] = {};
	bool isDR[4]{};
	int currentScore;
	int finalScore;
public:
	GameLogic();
	void roll();
	int getRoll();
	void addScore();
	void keepDie();


	





};

#endif
