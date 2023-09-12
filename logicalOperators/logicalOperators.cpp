
#include <iostream>

int main()
{
    std::cout << "Author: Ricardo Diaz\n";

    int age;
    std::cout << "Enter an age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "Adult\n";
        std::cout << "Price is $50\n";
    }
    else
    {
        std::cout << "Child\n";
        std::cout << "Free\n";

    }

}


