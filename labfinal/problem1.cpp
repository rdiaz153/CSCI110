/*  Program: Lab Final Revised Question #1
    Author: Ricardo Diaz
    Class: CSCI 110
    Date: 12/12/23
    Description: Create the program for lab final revised question 1.
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <iostream>
#include <fstream>

using namespace std;

void sortAscend(int* arr, int numValues);
void outputArray(int* arr, int threshold);
int main()
{
    cout << "Author: Ricardo Diaz." << endl;
    cout << "I certify that I did my own work with no outside help.\n\n";

    int numValues, threshold;

    cout << "How many values? ";
    cin >> numValues;
    int* a = new int[numValues];

    cout << "Enter " << numValues << " values: ";

    for (int i = 0; i < numValues; i++)
    {
        cin >> a[i];
    }

    cout << "Enter a threshold: ";
    cin >> threshold;

    sortAscend(a, numValues);
    outputArray(a, threshold);

    delete[] a;

    return 0;
}

void sortAscend(int* arr, int numValues)
{
    for (int i = 0; i < numValues; i++)
    {
        for (int j = i + 1; j < numValues; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }


}

void outputArray(int* arr, int threshold)
{
    int i = 0;

    ofstream outputFile("problem1.txt");
    if (outputFile.is_open())
    {
        cout << "problem1.txt was created.\n";

        outputFile << "Created by Ricardo Diaz\n\n";

        for (i = 0; i < threshold; i++)
        {
            outputFile << arr[i] << " ";
            if ((i + 1) % 5 == 0)
            {
                outputFile << "\n";
            }

        }

        outputFile << "\n\nThere are " << threshold << " values.";
    }

    outputFile.close();

}