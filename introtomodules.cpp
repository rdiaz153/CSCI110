/* Program: Module Demo
Author: Ricardo Diaz
Class: CSCI 110
Date: 09/26/23
Description: Try a module.
I certify that the code below is my own work.
Exception(s): N/A
*/

#include <iostream>
#include <string>

void showMessage(std::string m)
{
	std::cout << "************\n";
	std::cout << m << std::endl;
	std::cout << "************\n";
}

int main()
{
	showMessage("Hello World.");
	showMessage("Ricardo Diaz");

	return 0;
}
