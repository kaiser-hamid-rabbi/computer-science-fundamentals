#include <iostream>

int main()
{
    int count = 0;
    for (int i = 1000; i >= 1; i--)
    {
        count++;
        std::cout << i << "\t";
        if (count % 5 == 0)
        {
            std::cout << "\n";
        }
    }
    std::cout << "\n";
}