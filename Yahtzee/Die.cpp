#include "Die.h"
#include <iostream>
#include <string>
using namespace std;

Die::Die() :
	SIDES(6)
{
	roll();

};
void Die::roll()
{
	faceValue = rand() % SIDES + 1;

};
int Die::getFaceValue() const
{
	return faceValue;

};
string Die::getSides() const
{
	string result = "A " + to_string(SIDES) + "-sided Die "
		+ "showing a " + to_string(faceValue);

	return result;

};