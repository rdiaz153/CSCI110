#include <iostream>

using namespace std;

void display(int n);
int recFact(int n);
int rangeSum(int arr[], int start, int end);
int fib(int n);
int gcd(int a, int b);


int main()
{

    int myArray[6] = { 5, 7, 2, 6, 4, 8};
    //int calls;

    //display(5);
    
    //cout << "5! = " << recFact(5) << endl;
    
   // cout << rangeSum(myArray, 1 , 4) << endl;
    
    //cout << "fib(5): " << fib(5) << endl;
    //cout << "fib(6): " << fib(6) << endl;
    //calls = 0;
    //cout << "fib(10): " << fib(10) << endl;
    //cout << "calls: " << calls << endl;
 
    cout << "gcd(24,6): " << gcd(24,6) << endl;
    cout << "gcd(32, 6): " << gcd(32,6) << endl;
    cout << "gcd(50,1024): " << gcd(50,1024) << endl;

    return 0;

}

void display(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        display (n-1);

    }


}

int recFact(int n)
{
    if (n == 0) // base case 
        return 1;
    
    return n * recFact(n - 1);


}

int rangeSum(int arr[], int start, int end)
{
    if (start > end)
    {
        return 0;
    }
    return arr[start] + rangeSum(arr, start+1, end);

}

int fib(int n)
{
   
    if (n <= 1)
    {
        return n;
    }
   
    return fib(n - 2) + fib(n - 1);
}

int gcd(int a, int b)
{
    cout << "gcd of " << a << " and " << b << endl;
    if (a % b == 0)
    {
        return b;
    }
    else 
    return gcd(b, a%b);

}