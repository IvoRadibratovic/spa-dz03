#pragma once
#include <vector>
#include <iostream>
#include "Point.h"

using namespace std;

class PlayingField
{
private:
	const int SIZE_X = 40;
	const int SIZE_Y = 20;
	vector<vector<char>> field;
public:
	PlayingField();
	void setMainPoints(Point a, Point b);
	void printField(Point p);
};

