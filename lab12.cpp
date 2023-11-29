#include <iostream>

using namespace std;

int factorial(int n);
int recFib(int n);
int mystery(int a, int b);
int printReverse(int arr[],int n);

int main()
{



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