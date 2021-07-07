/* 
=====================================================
Multifile Compilation (Main file)
=====================================================
 */

#include <iostream>
#include "math_utils.h"

int main()
{
    std::cout << utilz::pow(5, 3) << "\n";
    std::cout << utilz::pow(5) << "\n";

    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 15;
    std::cout << "Area of a Rectangle: " << utilz::area(rectangle.length, rectangle.width) << "\n";
    std::cout << "Area of a Square: " << utilz::area(rectangle.length) << "\n";
    std::cout << "Area of a custom Rectangle type : " << utilz::area(rectangle) << "\n";
}