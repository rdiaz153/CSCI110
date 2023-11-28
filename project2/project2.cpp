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
#include <sstream>

using namespace std;

void loadProblems(string problems[], int& count);
int gcd(int a, int b);
void convertProblem(string problem, int &num1, int &den1, char &op, int &num2, int &den2);

const int MAX_NUMS = 100;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	string problems[MAX_NUMS];
	int problemCount, mode;

    cout << "Welcome to the Fraction Tutor V1 by Ricardo Diaz!\n\n";
    cout << "There are 5 problems per session. The computer will select a problem from a list of problems and you have up to three attempts per problem. " << endl;
    cout << "You must provide an answer in reduced form (i.e., enter 3/4 instead of 6/8). Have fun and good luck!\n\n";
	
	loadProblems(problems, problemCount);
	cout << "There are " << problemCount << " problems available.\n\n";
    
	cout << "Available Modes\n";
	cout << "1. Training mode\n";
	cout << "2. Normal mode\n\n";
	cout << "Please select a mode: ";
	cin >> mode;

	while (mode < 1 || mode > 2)
	{
		cout << "That is an invalid mode option. Please correctly enter which mode you would like to use." << endl;
		cin >> mode;

	}

	int correctAttempts = 0;
	int totalAttempts = 0;

	if (mode == 1)
	{
		for (int sessionProblem = 0; sessionProblem < 5; ++sessionProblem)
		{
			cout << "Training mode is selected.\n\n";
			cout << "Computer is selecting a random problem ...\n";
			string currentProblem = problems[rand() % problemCount];

			int num1, den1, num2, den2;
			char op;
			convertProblem(currentProblem, num1, den1, op, num2, den2);

			int correctNumerator, correctDenominator;
			if (op == '+')
			{
				correctNumerator = num1 * den2 + num2 * den1;
				correctDenominator = den1 * den2;
			}
			else if (op == '-')
			{
				correctNumerator = num1 * den2 - num2 * den1;
				correctDenominator = den1 * den2;
			}
			else if (op == '*')
			{
				correctNumerator = num1 * num2;
				correctDenominator = den1 * den2;
			}
			else
			{
				correctNumerator = num1 * den2;
				correctDenominator = den1 * num2;
			}

			int commonFactor = abs(gcd(correctNumerator, correctDenominator));
			int correctResultNumerator = correctNumerator / commonFactor;
			int correctResultDenominator = correctDenominator / commonFactor;

			cout << "Problem " << sessionProblem + 1 << ": " << num1 << '/' << den1 << ' ' << op << ' ' << num2 << '/' << den2 << endl;
			cout << "Correct answer: " << correctResultNumerator << '/' << correctResultDenominator << endl;
			cout << "----------------------------------------------" << endl;
			int attemptsLeft = 3;

			while (attemptsLeft > 0)
			{
				cout << "You have " << attemptsLeft << " attempts left." << endl;
				cout << "Please enter your result: ";
				
				int userNumerator, userDenominator;
				char slash;
				cin >> userNumerator >> slash >> userDenominator;

				if (userNumerator * correctResultDenominator == userDenominator * correctResultNumerator)
				{
					cout << "Congratulations! It is correct." << endl;
					correctAttempts++;
					break;
				}
				else 
				{

					cout << "It is incorrect." << endl;
					attemptsLeft--;
				}
				
			}
			totalAttempts++;
		}

		
	}
	else if (mode == 2)
	{
		for (int sessionProblem = 0; sessionProblem < 5; ++sessionProblem)
		{
			cout << "Training mode is selected.\n\n";
			cout << "Computer is selecting a random problem ...\n";
			string currentProblem = problems[rand() % problemCount];

			int num1, den1, num2, den2;
			char op;
			convertProblem(currentProblem, num1, den1, op, num2, den2);

			int correctNumerator, correctDenominator;
			if (op == '+')
			{
				correctNumerator = num1 * den2 + num2 * den1;
				correctDenominator = den1 * den2;
			}
			else if (op == '-')
			{
				correctNumerator = num1 * den2 - num2 * den1;
				correctDenominator = den1 * den2;
			}
			else if (op == '*')
			{
				correctNumerator = num1 * num2;
				correctDenominator = den1 * den2;
			}
			else
			{
				correctNumerator = num1 * den2;
				correctDenominator = den1 * num2;
			}

			int commonFactor = abs(gcd(correctNumerator, correctDenominator));
			int correctResultNumerator = correctNumerator / commonFactor;
			int correctResultDenominator = correctDenominator / commonFactor;

			cout << "Problem " << sessionProblem + 1 << ": " << num1 << '/' << den1 << ' ' << op << ' ' << num2 << '/' << den2 << endl;
			cout << "----------------------------------------------" << endl;
			int attemptsLeft = 3;

			while (attemptsLeft > 0)
			{
				cout << "You have " << attemptsLeft << " attempts left." << endl;
				cout << "Please enter your result: ";
				
				int userNumerator, userDenominator;
				char slash;
				cin >> userNumerator >> slash >> userDenominator;

				if (userNumerator * correctResultDenominator == userDenominator * correctResultNumerator)
				{
					cout << "Congratulations! It is correct." << endl;
					correctAttempts++;
					break;
				}
				else 
				{

					cout << "It is incorrect." << endl;
					attemptsLeft--;
				}
				
			}
			totalAttempts++;
		}

		
	}

	double accuracy = static_cast<double>(correctAttempts) / totalAttempts * 100;
	cout << "You answered " << correctAttempts << " out of " << totalAttempts << " problems correctly (" << accuracy << "%)." << endl;

	if (accuracy >= 90)
	{
		cout << "Your grade is A." << endl;
	}
	else if (accuracy >= 80)
	{
		cout << "Your grade is B." << endl;
	}
	else if (accuracy >= 70)
	{
		cout << "Your grade is C." << endl;
	}
	else if (accuracy >= 60)
	{
		cout << "Your grade is D." << endl;
	}
	else 
	{
		cout << "Your grade is F." << endl;
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
	return;


}
else
{
	cout << "Loading problems from file P2Fractions.txt . . .\n";

}

while (getline(FracFile, problems[count]) && !FracFile.eof())
{
	count++;
}

FracFile.close();

}

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;	
		a = temp;

	}
	return a;

}

void convertProblem(string problem, int &num1, int &den1, char &op, int &num2, int &den2)
{
	char slash;
	istringstream iss(problem);

	iss >> num1 >> slash >> den1;
	iss >> op;
	iss >> num2 >> slash >> den2;
}