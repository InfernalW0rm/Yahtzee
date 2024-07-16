#pragma once
#ifndef CONSOLEUI_H
#define CONSOLEUI_H
#include<iostream>
using namespace std;

class ConsoleUI
{
private:
	bool isTrue[4];

public:
	ConsoleUI();
	void displayDie();
		void displayScores(int[]);
		int getRerollDice();
		int chooseScoreOption();

};

#endif
