#include <iostream>
#include <fstream>

using namespace std;

void printStats(double average, double largest, int count);
int main()
{
    ifstream inFile("problem2.txt");
    
    double num;
    int count = 0;
    double sum = 0;
    double average;
    double largest = 0;
    
    while (inFile >> num)
    {
        count++;
        sum += num;

        if (num > largest)
        {
            largest = num;
        }

    }

    average = sum / count;

    printStats(average, largest, count);

    return 0;
}

void printStats(double average, double largest, int count)
{
    cout << "Author: Ricardo Diaz" << endl;
    cout << "Count: " << count << endl;
    cout << "Largest: " << largest << endl;
    cout << "Average: " << average << endl;

}