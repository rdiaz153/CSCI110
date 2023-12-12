#include <iostream>
#include <fstream>

using namespace std;

void sortAscend(int arr[]);
void outputArray(int arr[]);
int main()
{
    int arr[10] = {5, 3, 6, 7, 1, 9, 0, 8, 1, 4};
    
    sortAscend(arr);
   outputArray(arr);

    return 0;
}

void sortAscend(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
            {
                if(arr[j] < arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;

                }
            }
    }


}

void outputArray(int arr[])
{
    int i = 0;

    ofstream outputFile("problem1.txt");
    if (outputFile.is_open())
    {
        outputFile << "Created by Ricardo Diaz" << endl;
        outputFile << "There are 10 values.\n\n";
        
        for (i = 0; i < 10; i++)
        {
            outputFile << arr[i] << " ";
            if ((i+1) % 5 == 0)
            {
                outputFile << "\n";
            }

        }


    }

    outputFile.close();

}