/* 
=====================================================
Multifile Compilation (Implementation/Definition file)
=====================================================
 */
#include "math_utils.h"

namespace utilz
{
    double area(double length, double width) // rectangle
    {
        return length * width;
    }

    // Function Overloading for Square
    double area(double length) // square
    {
        return length * length;
    }

    // another function overloading with custom type data with struct
    double area(Rectangle rectangle)
    {
        return rectangle.length * rectangle.width;
    }

    double pow(double base, int exponent) // default argument exponent
    {
        int total = 1;
        for(int i = 0; i < exponent; i++)
        {
            total *= base;
        }
        return total;
    }
}

