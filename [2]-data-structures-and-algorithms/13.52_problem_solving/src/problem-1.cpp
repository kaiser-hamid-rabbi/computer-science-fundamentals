/*
    odd-even 1
*/
#include <iostream>

int main()
{
    int T, i, n;
    std::cin >> T;
    for (i = 0; i < T; i++)
    {
        std::cin >> n;
        if (n % 2 == 0)
        {
            std::cout << "even\n";
        }
        else
        {
            std::cout << "odd\n";
        }
    }
}