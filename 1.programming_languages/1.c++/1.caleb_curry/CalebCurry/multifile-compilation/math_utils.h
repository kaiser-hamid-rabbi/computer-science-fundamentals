/* 
=====================================================
Multifile Compilation (Declaration file)
=====================================================
 */

// Pre-processor Directive
#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width);

double area(double length);

double area(Rectangle rectangle);

double pow(double base, int exponent = 2);

#endif