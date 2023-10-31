/* Program:
	Author:
	Class:
	Date:
	Description:
	I certify that the code below is my own work.
	Exception(s): N/A
*/
#include <iostream>
#include <string>

using namespace std;

void inputPints(double pints[], int hours);

int main()
{
	const int MAX_HOURS = 7;
	
	string again = "yes";
	double pints[MAX_HOURS];
	double averagePints, highPints, lowPints;

	while (again == "yes")
	{
		inputPints(pints[], MAX_HOURS);
		cout << "Do you want to run again (yes or no)?" << endl;
		cin >> again;

	}
	averagePints = calcAverage(pints[], MAX_HOURS);
	highPints = getHigh(pints[], MAX_HOURS);

	return 0;
}

void inputPints(double pints[], int MAX_HOURS)
{
	int counter = 0;

	for (counter = 0; counter < 7; counter++)
	{
		cout << "Enter pints collected:";
		cin >> pints[counter];

	}


}

int calcAverage(double pints[], int MAX_HOURS)
{
	int counter;
	double totalPints = 0, averagePints;

	for (counter = 0; counter < 7; counter++)
	{
		totalPints = totalPints + pints[counter];

	}
	averagePints = totalPints / MAX_HOURS;

	return averagePints;

}

int getHigh(double pints[], int MAX_HOURS)
{
	int index;
	double highest = pints[0];

	for (index = 1; index <= 6; index++)
	{
		if (pints[index] > highest)
		{
			highPints = pints[index]

		}


	}

	return highPints;
}