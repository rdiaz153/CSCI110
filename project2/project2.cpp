/* Program: Project 2 Program
	Author: Ricardo Diaz
	Class: CSCI 110
	Date: 11/28/23
	Description: Create the program for Project 2.
	I certify that the code below is my own work.
	Exception(s): N/A
*/
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void loadProblems(string problems[], int& count);
int gcd(int a, int b);

const int MAX_NUMS = 100;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	string problems[MAX_NUMS];
	int problemCount, mode;

    cout << "Welcome to the Fraction Tutor V1 by Ricardo Diaz!\n\n";
    cout << "There are 5 problems per session. The computer will select a problem from a list of problems and you have up to three attempts per problem. " << endl;
    cout << "You must provide an answer in reduced form (i.e., enter 3/4 instead of 6/8). Have fun and good luck!\n\n";
	
	loadProblems(string problems[], int& problemCount);
    
	cout << "Available Modes\n";
	cout << "1. Training mode\n";
	cout << "2. Normal mode\n\n";
	cout << "Please select a mode: ";
	cin >> mode;

	while (mode < 1 && mode > 2)
	{
		cout << "That is an invalid mode option. Please correctly enter which mode you would like to use." << endl;
		cin >> mode;

	}

    return 0;
}

void loadProblems(string problems[], int& count)
{

ifstream FracFile("P2Fractions.txt");
count = 0;

if (!FracFile)
{
	cout << "Error: Unable to open P2Fractions.txt" << endl;
	return 0;

}

while (getline(FracFile, problems[count]))
{
	count++;
}

FracFile.close();

}