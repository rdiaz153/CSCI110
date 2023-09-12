/* Program: Lab 2 Student Credits
Author: Ricardo Diaz
11
Class: CSCI 110
Date: 09/11/23
Description: Write a program that will take in basic information from a student,
including student first name, abbreviation of degree name (like CSCI), number of
credits taken so far,
and the total number of credits required in the degree program.
The program will then calculate how many credits are needed to graduate.
Display should include the student’s name, the degree name, and credits left to
graduate.
I certify that the code below is my own work.
Exception(s): N/A
*/
#include <iostream>
#include <string>
int main()
{
	std::string studentName, degreeName, lastName;
	double creditsDegree, creditsTaken, creditsLeft;
	
	std::cout << "Enter the student's full name: ";
	std::getline(std::cin, studentName);
	
	std::cout << "Enter the student's degree program name: ";
	std::getline(std::cin, degreeName);
	
	std::cout << "Enter the total number of credits required in the degree program: ";
	std::cin >> creditsDegree;
	
	std::cout << "Enter the number of credits taken so far by the student: ";
	std::cin >> creditsTaken;
	
	creditsLeft = creditsDegree - creditsTaken;
	
	std::cout << "The student's name is " << studentName << std::endl;
	std::cout << "The degree name is " << degreeName << std::endl;
	std::cout << "There are " << creditsLeft << " credits left until graduation.";
}