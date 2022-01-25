#include <iostream>

int main()
{
    int T, i, N, j;
    std::cin >> T;
    for (i = 1; i <= T; i++)
    {
        std::cin >> N;
        std::cout << "Case " << i << ": ";
        for (j = 1; j <= N; j++)
        {
            if (N % j == 0)
            {
                std::cout << j << " ";
            }
        }
        std::cout << "\n";
    }
}