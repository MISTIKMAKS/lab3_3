﻿#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y = 0; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= 6)
		y = R;
	else
		if (-6 < x && x <= -R)
			y = -1 + (1 / (-R + 6)) * (x + 6);
		else
			if (-R < x && x <= 0)
				y = -sqrt((-x * x) - (2 * x * R) + (2 * y * R) - R * R);
			else
				if (0 < x && x <= R)
					y = sqrt(R * R - (x - R) * (x - R));
				else
					y = (-1 / (1 + R - R)) * (x - R);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}