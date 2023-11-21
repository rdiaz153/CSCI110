/* A simple program to input strings from a file          */
/* and store values in an array for later processing.     */
/* Created by T. Vo on 11/06/20 for CSCI 110.             */

// *** Modified by: Ricardo Diaz

#include <iostream>
#include <fstream>
#include <sstream>		// using istringstream
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// Constant for the maximum number of problems.
const int MAX_NUMS = 100;

char findOperator(string problem);

int main()
{
	// Variables
	string oneProblem, randomProblem, problems[MAX_NUMS];
	char op;
	int count = 0;

	// Set up random generator
	srand(static_cast<unsigned int>(time(0)));

	// Declare an ifstream object named myFile and open a file.
	ifstream myFile;
	myFile.open("Lab11Data.txt");

	// Exit program if cannot open file for input.
	if (!myFile)
	{
		cout << "Error: Unable to open file for input" << endl;
		return 0;
	}

	// The following loop input problems from a file using EOF.
	getline(myFile, oneProblem);
	while (!myFile.eof())
	{
		// *** Add code below to store one problem in the array.
		problems[count] = oneProblem
		
		// *** Add code below to read one line from the file.
		myFile >> a;

	}

	cout << "There are " << count << " problems in the file." << endl;

	// *** Add code to select a random problem; display it and its length.
	int randomIndex = srand() % count;
	randomProblem = problems[randomIndex];
	cout << randomProblem

	// *** Add code below to determine the type of problem: +, -, *, or /
	// by calling findOperator(randomProblem).



	// *** Add code below to print the type of problem,
	// addition, subtraction, multiplication, or division


	// Close the file.
	myFile.close();

	return 0;
}

char findOperator(string problem)
{
	char op, slash;
	int n1, d1, n2, d2;
	istringstream iss;

	iss.str(problem);

	// convert string like "1/2 + 1/4" to n1, d1, op, n2, d2
	// ignoring / character and other variables are not used
	iss >> n1 >> slash >> d1 >> op >> n2 >> slash >> d2;

	return op;
}