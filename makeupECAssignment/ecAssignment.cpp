/*  Program:  Makeup Assignment (Extra Credit)  
    Author:  Ricardo Diaz   
    Class:   CSCI 110   
    Date: 11/30/23
    Description: Create the makeup assignment due on 12/5 for extra credit.
    I certify that the code below is my own work.
    Exception(s): N/A
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void printHeader();
int randomNumber();


int main()
{
    srand(static_cast<unsigned int>(time(0)));
    char userAgain = 'Y';
    int correctNumber, userNumber, guessesLeft, correctMinusUser, correctPlusUser;


    printHeader();
    while (tolower(userAgain) == 'y')
    {   correctNumber = randomNumber();
        correctMinusUser = correctNumber - 1;
        correctPlusUser = correctNumber + 1;

        guessesLeft = 5;
     
        while(guessesLeft > 0)
        {   cout << "Enter your guess: ";
            cin >> userNumber;
            if (userNumber == correctMinusUser || userNumber == correctPlusUser || userNumber == correctNumber)
            {
                cout << "Congrats! You won. Actual Number is " << correctNumber << ".\n";
                break;
            }
            else if (userNumber > correctNumber)
            {
                guessesLeft--;
                cout << "Lower. You have " << guessesLeft << " guesses left.\n";
            }
            else if (userNumber < correctNumber)
            {
                guessesLeft--;
                cout << "Higher. You have " << guessesLeft << " guesses left.\n";
            }
            else if (guessesLeft = 0)
            {
                cout << "You lost. Actual number is " << correctNumber << ".\n";
            }
        }
        cout << "Do you want to play again (y/n)?: ";
        cin >> userAgain;

    }
    return 0;
}

void printHeader()
{
    cout << "Welcome to a guessing game by Ricardo Diaz.\n";
    cout << "Please guess a number between 1 and 100.\n";
    cout << "You have up to 5 guesses.\n";
}

int randomNumber()
{
    int result = rand() % 100 + 1;
    return result;
}