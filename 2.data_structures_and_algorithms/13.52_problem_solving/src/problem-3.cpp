#include <iostream>

int main()
{
    for (int i = 1000; i >= 1; i--)
    {
        std::cout << i << "\t";
        if (i % 5 == 0)
        {
            std::cout << "\n";
        }
    }
}