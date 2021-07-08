// another way (recommended)
#include <iostream>

int volume(int l = 1, int w = 1, int h = 1)
{
    return l * w * h;
}

int main()
{
    std::cout << volume(4, 5, 5) << "\n";
    std::cout << volume() << "\n";     // 1 * 1 * 1
    std::cout << volume(5) << "\n";    // 5 * 1 * 1
    std::cout << volume(5, 6) << "\n"; // 5 * 6 * 1
}