#include <iostream>
#include <ctime>
#include <cmath>
#include "Die.h"
#include "ConsoleUI.h"
#include "Gamelogic.h"
using namespace std;

int main()
{
	srand(time(0));
	ConsoleUI ui;
	GameLogic logic;
	const int diceCount = 5;
	Die dice[diceCount];
	bool diceToRoll[diceCount];
	logic.rollDice(dice, diceToRoll, diceCount);

	ui.displayWlcomeMessage();

	int finalScore = 0;
while (!logic.allCategoriesUsed()) {
		for (int i = 0; i < 3; i++) {
			ui.displayDice(dice, diceCount);
			ui.getDiceToRoll(diceToRoll, diceCount);
			logic.rollDice(dice, diceToRoll, diceCount);
		}
	
	ui.displayDice(dice, diceCount);
	int category = ui.getCategoryToScore();
	if (logic.isCategoryAvailable(category)) {
		int score = logic.calculateScore(dice, diceCount, category);
		finalScore = +score;
		ui.displayScore(score);
		logic.markCategoryAsUsed(category);
	}
	else {
		cout << "Category already used. Choose a different one." << endl;
	}
}


ui.displayFinalScore(finalScore);
 };