/*  Program: Retail Company Bonus
    Author: Ricardo Diaz   
    Class: CSCI 110
    Date: 09/18/23 
    Description: Write a program that determines whether or not employees in a company will receieve a store bonus and/or a day off according to the monthly sales.
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <iostream>



int main()
{
    double monthlySales;
    
    std::cout << "Welcome to the bonus program.\n";
    
    std::cout << "Please enter the sales for this month.\n";
    std::cin >> monthlySales;

    if (monthlySales >= 100000)
    {
        std::cout << "You earned a $5000 bonus!\n";
    }
    if (monthlySales >= 112500)
    {
        std::cout << "All employees get one day off!!!\n";
    }
    if (monthlySales <= 90000)
    {
        std::cout << "You earned a $0 bonus!\n";
    }

    return 0;
}
