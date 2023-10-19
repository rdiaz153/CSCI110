/*  Program: Lab 7 Input Validation Bottle Program
	Author: Ricardo Diaz
	Class: CSCI 110
	Date: 10/18/23
	Description: Create the program for Lab 7 to integrate input validation for a total bottles program
	I certify that the code below is my own work.
	Exception(s): N/A
*/

#include <iostream>
#include <string>

using namespace std;

int getTotalBottles(int days);

int main()
{
	int days;

	cout << "How many days would you like to input?: ";
	cin >> days;
	cout << getTotalBottles(days) << endl;
	return 0;
}

int getTotalBottles(int days)
{
	int totalBottles = 0, todayBottles;
	string keepGoing = "y";

	for (int i = 0; i < days; i++)
	{
		cout << "Enter the number of bottles returned: ";
		cin >> todayBottles;

		while (todayBottles < 0)
		{
			cout << "Number of bottles returned cannot be negative." << endl;
			cout << "Enter the number of bottles returned: ";
			cin >> todayBottles;
		}

		totalBottles = totalBottles + todayBottles;

	}
	
	return totalBottles;

}