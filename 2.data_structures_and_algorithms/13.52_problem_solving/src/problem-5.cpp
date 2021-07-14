#include <iostream>
#include <string>

int main()
{
    int T, i, N, row, column;
    std::cin >> T;
    for (i = 1; i <= T; i++)
    {
        std::cin >> N;
        for (row = 1; row <= N; row++)
        {
            for (column = 1; column <= N; column++)
            {
                std::cout << "*";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}