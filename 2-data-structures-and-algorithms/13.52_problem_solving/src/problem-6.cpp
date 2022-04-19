// Solution - 1
#include <iostream>

int main()
{
    int T, i, j, N, lsd, msd;
    std::cin >> T;
    for (i = 1; i <= T; i++)
    {
        std::cin >> N;
        lsd = N % 10;
        for (j = 1; j < 5; j++)
        {
            N = N / 10;
            msd = N % 10;
        }

        std::cout << "Sum = " << lsd + msd << "\n";
    }
    std::cout << "\n";
}

// // Solution - 2
// #include <iostream>
// #include <string>

// int main()
// {
//     int T, i;
//     std::string number, lsd, msd;
//     int ilsd, imsd;
//     std::cin >> T;
//     for (i = 1; i <= T; i++)
//     {
//         std::cin >> number;
//         lsd = number[0];
//         msd = number[number.length() - 1];
//         ilsd = std::stoi(lsd);
//         imsd = std::stoi(msd);
//         std::cout << "Sum = " << ilsd + imsd << "\n";
//     }

//     std::cout << "\n";
// }