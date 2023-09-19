/*  Program: Retail Company Bonus
    Author: Ricardo Diaz
    Class: CSCI 110
    Date: 09/18/23
    Description: Write a program that determines whether or not employees in a company will receive a store bonus and/or a day off according to the monthly sales.
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <iostream>



int main()
{
    double monthlySales, storeBonus, dayOff;

    std::cout << "Welcome to the bonus program.\n";
   
    std::cout << "Please enter the sales for this month.\n";
    std::cin >> monthlySales;
   
    storeBonus = 100000;
    dayOff = 90000 * 1.25;

    
    if (monthlySales >= storeBonus)
    {
        std::cout << "You earned a $5000 bonus!\n";
    }
    if (monthlySales >= dayOff)
    {
        std::cout << "All employees get one day off!!!\n";
    }
    else
    {
        if (monthlySales < storeBonus)
        {
            std::cout << "You earned a $0 bonus!\n";
        }
    }
    if (monthlySales < 50000)
    {
        std::cout << "Current goal is not met.";
    }
    if (monthlySales <= 100000 && monthlySales >= 50000)
    {
        std::cout << "Current Goal is met.";
    }
    if (monthlySales > 100000)
    {
        std::cout << "Exceed current goal!";
    }
    return 0;
}