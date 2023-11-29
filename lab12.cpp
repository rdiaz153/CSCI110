#include <iostream>

using namespace std;

int factorial(int n);
int recFib(int n);
int mystery(int a, int b);
void printReverse(int arr[],int n);

int main()
{
    int menuOption;

    cout << "Program Menu\n";
    cout << "1. Recursive Factorial\n";
    cout << "2. Recursive Fibonacci\n";
    cout << "3. Mystery Function\n";
    cout << "4. Print Reverse Array\n";
    cout << "5. Quit\n";

    cout << "Please enter your option: ";
    cin >> menuOption




    return 0;
}

int factorial(int n)
{
    int result;
    if (n == 0)
    {
        result = 1;
    }
    else 
        result = n * factorial(n - 1);
    return result;

}

int recFib(int n)
{
    int result;
    if (n == 1)
        result = 1;
    else 
        result = recFib(n - 1) + recFib(n - 2);

}

int mystery(int a, int b)
{
    int result;
    if (b == 0)
        result = 1
    else
        result = a * mystery(a, b - 1)
    return result;
}

void printReverse(int arr[], int n)
{
    if (n <= 0)
        return;
    else
    {
        cout << arr[n - 1] << " ";
        printReverse[arr[],n - 1];
    }
}