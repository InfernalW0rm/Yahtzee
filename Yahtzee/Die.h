#pragma once
#ifndef DIE_H
#define DIE_H
#include <iostream>
using namespace std;

class Die
{
private:
	int faceValue;
	const int SIDES;
public:

	Die();
	void roll();
	int getFaceValue() const;
	string getSides() const;


};


#endif

