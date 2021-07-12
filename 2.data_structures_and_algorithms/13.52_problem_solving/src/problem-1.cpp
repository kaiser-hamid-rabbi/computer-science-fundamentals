#include <iostream>

int main()
{
    while (true)
    {
        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;
        if (number % 2 == 0)
        {
            std::cout << "even\n";
        }
        else
        {
            std::cout << "odd\n";
        }
    }
}