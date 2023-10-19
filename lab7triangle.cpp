/*  Program: Lab 7 Right Triangle Program
	Author: Ricardo Diaz 
	Class: CSCI 110 
	Date: 10/18/23
	Description: Create the program for Lab 7 to find a right triangle
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
	double area, perimeter, a, b, c;

	cout << "Input the largest side of the triangle: ";
	cin >> a;
	cout << "Input the second largest side of the triangle: ";
	cin >> b;
	cout << "Input the smallest side of the triangle: ";
	cin >> c;

	if ((b + c) > a)
	{
		perimeter = a + b + c;
		area = areaTriangle(a, b, c);
		cout << "Perimeter: " << perimeter << endl;
		cout << "Area: " << area << endl;
		
		if ((b * b) + (c * c) == (a * a))
			cout << "It is a right triangle";
	}
	else
	{
		cout << "The given points do not form a triangle.";

	}
	return 0;
}
