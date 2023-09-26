/* Program: Lab 4
Author: Ricardo Diaz
Class: CSCI 110
Date: 09/26/23
Description: Code the program required for Lab 4 using a loop.
I certify that the code below is my own work.
Exception(s): N/A
*/

#include <iostream>
#include <string>
int main()
{
	double monthlySales, storeAmount, empAmount, salesIncrease;
	std::string keepGoing;
	
	keepGoing = 'y';
	while (keepGoing == "Y" || keepGoing == "y")
	{
		std::cout << "Input the sales for this month:\n";
		std::cin >> monthlySales;

		std::cout << "Input the sales increase for this month\n";
		std::cin >> salesIncrease;

		if (monthlySales >= 100000)
		{
			storeAmount = 5000;
		}
		else
		{
			if (monthlySales >= 75000 && monthlySales < 100000)
			{
				storeAmount = 500;
			}
			else
			{
				if (monthlySales < 75000)
				{
					storeAmount = 0;
				}
			}
		}
		if (salesIncrease >= .04)
		{
			empAmount = 50;
		}
		else
		{
			empAmount = 0;
		}
		std::cout << "The store bonus is $" << storeAmount << std::endl;
		std::cout << "The employee bonus is $" << empAmount << std::endl;

		std::cout << "Run the program again? (y/n):\n";
		std::cin >> keepGoing;
	}
	return 0;
}
