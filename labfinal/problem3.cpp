#include <iostream>
#include <iomanip> 

using namespace std;

char letterGrade(double score);

int main ()
{
    int count = 0;
    int sum = 0;
    double score;

    cout << "Author: Ricardo Diaz\n\n";
    cout << "Enter a list of scores (-1 to end): ";
    while (score != -1)
    {
        cin >> score;

        if (score == -1)
        {
            break;
        }

        sum += score;
        count++;
    }

    double average = static_cast<double>(sum) / count;

    char grade = letterGrade(average);

    cout << fixed << setprecision(1);
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;


    return 0;
}

char letterGrade(double score)
{
    if (score <= 100 && score >= 90)
    {
        return 'A';
    }
    else if (score >= 80)
    {
        return 'B';
    }
    else if (score >= 70)
    {
        return 'C';
    }
    else if (score >= 60)
    {
        return 'D';
    }
    else 
    {
        return 'F';
    }
}