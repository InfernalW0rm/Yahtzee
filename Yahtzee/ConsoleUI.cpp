#include "ConsoleUI.h"
#include "GameLogic.h"
#include "Die.h"
#include <iostream>
using namespace std;


void ConsoleUI::displayWlcomeMessage() const {
	cout << "Welcome to Yahtzee!" << endl;
}

void ConsoleUI::displayDice(const Die dice[], int size) const {
	cout << "Dice: ";
	for (int i = 0; i < size; i++) {
		cout << dice[i].getFaceValue() << " ";
	}
	cout << endl;
}
void ConsoleUI::getDiceToRoll(bool diceToRoll[], int size) const {
	cout << "Enter 1 to roll the die, 0 to keep: ";
	for (int i = 0; i < size; i++) {
		cin >> diceToRoll[i];
	}
}
int ConsoleUI::getCategoryToScore() const {
	int category;
	cout << "Enter category to score ( 1 for Aces, 2 for twos, ...6 for sixes):"
		;
	cin >> category; 
	return category;
}
void ConsoleUI::displayScore(int score) const {
	cout << "You scored " << score << " points" << endl;
}
void ConsoleUI::displayFinalScore(int finalScore) const {
	cout << "Your final score is " << finalScore << " points." << endl;
}

