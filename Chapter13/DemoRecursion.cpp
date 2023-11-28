#include <iostream>

using namespace std;

void display(int n);
int recFact(int n);
int main()
{


    display(5);
    
    // cout << "5! = " << recFact(5) << endl;
    return 0;

}

void display(int n)
{
    if (n > 0)
    {
        // cout << n << endl;
        display (n-1);

    }


}

int recFact(int n)
{
    if (n == 0) // base case 
        return 1;
    
    return n * recFact(n - 1);


}