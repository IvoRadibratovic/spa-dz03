#include "PlayingField.h"

PlayingField::PlayingField()
{
	vector<char> v(SIZE_X, '-');
	for (int i = 0; i < SIZE_Y; i++)
	{
		field.push_back(v);
	}
}

void PlayingField::setMainPoints(Point a, Point b)
{
	field[a.getPointY() - 1][a.getPointX() - 1] = 'A';
	field[b.getPointY() - 1][b.getPointX() - 1] = 'B';
}

void PlayingField::printField(Point p)
{
	field[p.getPointY() - 1][p.getPointX() - 1] = 'X';
	for (auto& i : field)
	{
		for (auto& j : i)
		{
			cout << j;
		}
		cout << endl;
	}
	field[p.getPointY() - 1][p.getPointX() - 1] = '-';
}
