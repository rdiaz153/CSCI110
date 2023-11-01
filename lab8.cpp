/* Program: Lab 8
   Author: Ricardo Diaz
   Class: CSCI 110
   Date: 10/31/23
   Description: Create the program for Lab 8
   I certify that the code below is my own work.
   Exception(s): N/A
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void inputPints(double pints[], int hours);
double calcAverage(double pints[], int hours);
double getHigh(double pints[], int hours);
double getLow(double pints[], int hours);

int main()
{
    const int MAX_HOURS = 7;
    double pints[MAX_HOURS] = { 0.0 };

    cout << fixed << setprecision(1);
    string again = "yes";
    double averagePints, highPints, lowPints;

    while (again == "yes")
    {
        inputPints(pints, MAX_HOURS);
        averagePints = calcAverage(pints, MAX_HOURS);
        highPints = getHigh(pints, MAX_HOURS);
        lowPints = getLow(pints, MAX_HOURS);
        cout << "Average Pints: " << averagePints << endl;
        cout << "Highest pints: " << highPints << endl;
        cout << "Lowest pints: " << lowPints << endl << endl;
        cout << "Do you want to run again (yes or no)?" << endl;
        cin >> again;
    }

    return 0;
}

void inputPints(double pints[], int hours)
{
    for (int counter = 0; counter < hours; counter++)
    {
        cout << "Enter pints collected:";
        cin >> pints[counter];
    }
}

double calcAverage(double pints[], int hours)
{
    double totalPints = 0;
    double averagePints;

    for (int counter = 0; counter < hours; counter++)
    {
        totalPints += pints[counter];
    }

    averagePints = totalPints / hours;
    return averagePints;
}

double getHigh(double pints[], int hours)
{
    double highest = pints[0];

    for (int index = 1; index < hours; index++)
    {
        if (pints[index] > highest)
        {
            highest = pints[index];
        }
    }

    return highest;
}

double getLow(double pints[], int hours)
{
    double lowest = pints[0];

    for (int index = 1; index < hours; index++)
    {
        if (pints[index] < lowest)
        {
            lowest = pints[index];
        }
    }

    return lowest;
}
