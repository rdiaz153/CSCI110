/*  Program: Lab 7 Extra Credit Program
	Author: Ricardo Diaz
	Class: CSCI 110
	Date: 10/18/23
	Description: Create the extra credit program for Lab 7 where it orders the sides from largest to smallest automatically
	I certify that the code below is my own work.
	Exception(s): N/A
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double areaTriangle(double a, double b, double c)
{
	double s, area;
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}

int main()
{
	cout << fixed << showpoint << setprecision(1);
	double area, perimeter, a, b, c, t;
	char input;
	while (1)
	{

		cout << "Input the first side of the triangle: ";
		cin >> a;
		cout << "Input the second side of the triangle: ";
		cin >> b;
		cout << "Input the third side of the triangle: ";
		cin >> c;

		if (b > a && b > c)
		{
			t = a;
			a = b;
			if (t > c)
			{
				b = t;
			}
			else
			{
				b = c;
				c = t;
			}
		}
		else if (c > a && c > b)
		{
			t = a;
			a = c;
			if (t > b)
			{
				c = b;
				b = t;
			}
			else
			{
				c = t;
			}
		}
		else
		{
			if (c > b)
			{
				t = b;
				b = c;
				c = t;
			}

		}

		if ((b + c) > a)
		{
			perimeter = a + b + c;
			area = areaTriangle(a, b, c);
			cout << "Perimeter: " << perimeter << endl;
			cout << "Area: " << area << endl;

			if ((b * b) + (c * c) == (a * a))
				cout << "It is a right triangle" << endl;
		}

		else
		{
			cout << "The given points do not form a triangle.";
		}
		cout << "Do you want to continue? (y/n): ";
		cin >> input;
		if (input == 'n')
			break;
	}
	return 0;
}