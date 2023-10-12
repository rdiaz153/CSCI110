/*  Program: Lab 6 Average Age
    Author: Ricardo Diaz
    Class: CSCI 110
    Date: 10/11/23
    Description: Create the count-controlled loop for average age in lab 6.
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
   
    int counter, totalAge = 0, age, number;
    double averageAge;

    cout << "How many ages do you want to enter? ";
    cin >> number;

    for (counter = 1; counter <= number; counter++)
    {
        cout << "Enter age: ";
        cin >> age;
        totalAge = totalAge + age;

    }
    cout << fixed << showpoint << setprecision(1);
    averageAge = totalAge * 1.0 / number; 
    cout << "The average age is " << averageAge << endl;


    return 0;
}
