#include <iostream>
#include <vector>
#include <string>
#include "PlayingField.h"
#include <Windows.h>

using namespace std;

int main()
{
	PlayingField field;
	
	int x, y;
	cout << "A redak(1-20): ";
	cin >> y;
	cout << "A stupac(1-40): ";
	cin >> x;
	Point A(x, y);

	cout << "B redak(1-20): ";
	cin >> y;
	cout << "B stupac(1-40): ";
	cin >> x;
	Point B(x, y);

	field.setMainPoints(A, B);

	Point X = A;
	while (X.getPointX() != B.getPointX())
	{
		if (X.getPointX() < B.getPointX())
		{
			X.setPointX(X.getPointX() + 1);
		}
		else
		{
			X.setPointX(X.getPointX() - 1);
		}
		system("cls");
		field.printField(X);
		Sleep(100);
	}
	while (X.getPointY() != B.getPointY())
	{
		if (X.getPointY() < B.getPointY())
		{
			X.setPointY(X.getPointY() + 1);
		}
		else
		{
			X.setPointY(X.getPointY() - 1);
		}
		system("cls");
		field.printField(X);
		Sleep(100);
	}
	
	return 0;
}
