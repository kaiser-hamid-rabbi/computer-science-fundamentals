/* 
=====================================================
Function Overloading Examples
=====================================================
 */

#include <iostream>

struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width)
{
    return length * width;
}

// Function Overloading for Square
double area(double length)
{
    return length * length;
}

// another function overloading with custom type data with struct
double area(Rectangle rectangle)
{
    return rectangle.length * rectangle.width;
}

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 15;
    std::cout << "Area of a Rectangle: " << area(rectangle.length, rectangle.width) << "\n";
    std::cout << "Area of a Square: " << area(rectangle.length) << "\n";
    std::cout << "Area of a custom Rectangle type : " << area(rectangle) << "\n";
}