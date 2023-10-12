/*  Program: Lab 6 Random Equation generator
    Author: Ricardo Diaz
    Class: CSCI 110
    Date: 10/11/23
    Description: Create the random equation generation for Lab 6.
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateNumbers(int& number1, int& number2);
void displayInfo(int right, string studentName);

int main()
{
    srand(static_cast<unsigned int>(time(0)));
   
    int counter, right = 0, number1, number2, answer;
    string studentName;

    studentName = inputName();

    for (counter = 1; counter <= 5; counter++)
    {
        generateNumbers(number1, number2);
        answer = getAnswer(number1, number2);
        if (answer == number1 + number2)
        {
            cout << "Right";
            right = right + 1;
        }
        else
        {
            cout << "Wrong";
        }
    }


    return 0;
}

string inputName()
{
    string name;
    cout << "Enter student name: ";
    cin >> name;
   
    return name;

}

void generateNumbers(int& number1, int& number2)
{
    number1 = rand() % 500 + 1;
    number2 = rand() % 500 + 1;
}

int getAnswer(int number1, int number2)
{
    int answer;
    cout << "Equation is " << number1 << "+" << number2 << endl;
    cout << "Enter the sum: ";
    cin >> answer;

    return answer;

}

void displayInfo(int right, string studentName)
{
    cout << "Information for" << studentName << endl;
    cout << "The number right:" << right << endl;

}