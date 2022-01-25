/*
    odd-even 2
*/
#include <iostream>
#include <string>

int main()
{
    int T, i;
    std::string n;
    std::cin >> T;
    for (i = 0; i < T; i++)
    {
        std::cin >> n;
        int last_index = n.length();
        if (n[last_index - 1] % 2 == 0)
        {
            std::cout << "even\n";
        }
        else
        {
            std::cout << "odd\n";
        }
    }
}