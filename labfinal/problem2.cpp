/*  Program: Lab Final Revised Question #2
    Author: Ricardo Diaz
    Class: CSCI 110
    Date: 12/12/23
    Description: Create the program for lab final revised question 2.
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void printStats(float average, float largest, float count, float smallest);
int main()
{
    cout << fixed << setprecision(1);
    ifstream inFile("problem2.txt");

    if (!inFile.is_open())
    {
        cout << "Error opening the file." << endl;
        return 1;
    }

    float num;
    int count = 0;
    float sum = 0;
    float average;
    float largest = -INFINITY;
    float smallest = INFINITY;

    while (inFile >> num)
    {
        count++;
        sum += num;
        if (num > largest)
        {
            largest = num;
        }

        if (num < smallest)
        {
            smallest = num;
        }
    }
    
    float smallLarge = smallest + largest;
    int modifiedCount = count - 2;
    sum = sum - smallLarge;
    average = sum / modifiedCount;
    printStats(average, largest, count, smallest);

    return 0;
}

void printStats(float average, float largest, float count, float smallest)
{
    ofstream outFile("p2Output.txt");

    outFile << "Author: Ricardo Diaz" << endl;
    outFile << "I certify that I did my own work with no outside help.\n\n";
    outFile << "Count: " << count << endl;
    outFile << "Smallest: " << smallest << endl;
    outFile << "Largest: " << largest << endl;
    outFile << "Average: " << fixed << setprecision(1)<< average << " (without smallest and largest)" << endl;

}