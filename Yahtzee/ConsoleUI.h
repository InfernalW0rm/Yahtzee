#pragma once
#ifndef CONSOLEUI_H
#define CONSOLEUI_H
#include<iostream>
#include "Die.h"
using namespace std;

class ConsoleUI
{
public:
	void displayWlcomeMessage() const;
	void displayDice(const Die dice[], int size) const;
	void getDiceToRoll(bool diceToRoll[], int size) const;
	int getCategoryToScore() const; 
	void displayScore(int score) const;
	void displayFinalScore(int finalScore) const;

};

#endif
