/*
==================================================================
                    Learn C++ Programming
                   Instructor: Caleb Curry
           Created by Kaiser Hamid Rabbi on 24-06-2021
    Copyright (c) 2021 Kaiser Hamid Rabbi. All rights reserved.
==================================================================
*/



/*
=====================================================
First "Hello World" program with cout(printf in C)
=====================================================
*/

//#include <iostream>
//
//int main() //main function
//{
//    std::cout << "Hello, World Rabbi!\n";
//    std::cout << "Hello, World Rabbi!" << "\n";
//    std::cout << "Hello, World Rabbi!\n" << std::endl;
//
//    int i_slices = 10;
//    double d_slices_1 = 20.;
//    double d_slices_2 = 20.0;
//    printf("Hello, World Rabbi!\n");
//    printf("%i\n", i_slices);
//    printf("%f\n", d_slices_1);
//    printf("%f\n", d_slices_1);
//}

//#include <stdio.h>
//int main(int argc, char **argv)
//{
//    printf("hello world\n");
//    return 0;
//}

//#include <iostream>
//int main()
//{
//    std::cin.get();
//}



/*
=====================================================
Variable Declaration, Initialization and cin for
taking input from the user
=====================================================
*/

//#include <iostream>
//
//int main() //main function
//{
//    int slices = 5; //declaration + initialization
//    int a; // declaration
//    a = 10 + 2; //initializaion
//    int b = slices; // assign one variable to another variable
//
//    std::cout << "slices: " << slices << ", a: " << a << ", b: " << b << "\n";
//    std::cout << "You have " << slices << " slices of pizza." <<  " a: " << a << ", b: " << b << "\n";
//
//    int first_number, second_number;
//    std::cout << "Please enter the first number: ";
//    std::cin >> first_number;
//    std::cout << "Please enter the second number: ";
//    std::cin >> second_number;
//    std::cout << "Your numbers are " << first_number << " and " << second_number << "\n";
//}



/*
=====================================================
Pow Function from cmath
=====================================================
*/

//#include <iostream>
//#include <cmath>
//
//int main()
//{
//    int base, exponent;
//    std::cout << "Please enter the base: ";
//    std::cin >> base;
//    std::cout << "Please enter the exponent: ";
//    std::cin >> exponent;
//    std::cout << base << " raised to the " << exponent << " power is " << pow(base, exponent) << "\n";
//}



/*
=====================================================
Creating Custom Functions for Pow - 1
=====================================================
*/

//#include <iostream>
//
//double power(double, int); // declaration
//
//int main()
//{
//    double base;
//    int exponent;
//    std::cout << "Please enter the base: ";
//    std::cin >> base;
//    std::cout << "Please enter the exponent: ";
//    std::cin >> exponent;
//    double result = power(base, exponent);
//    std::cout << base << " raised to the " << exponent << " power is " << result << "\n";
//}
//
//double power(double base, int exponent) // definition
//{
//    double result = 1;
//    for(int i = 0; i < exponent; i++)
//    {
//        result = result * base;
//    }
//    return result;
//}



/*
=====================================================
Creating Custom Functions for Pow - 2
=====================================================
*/

//#include <iostream>
//
//double power(double base, int exponent) // [declaration + definition] // base and exponent are parameters here
//{
//    double result = 1;
//    for(int i = 0; i < exponent; i++)
//    {
//        result = result * base;
//    }
//    return result;
//}
//
////definition - parameters | call - arguments
//
//int main()
//{
//    double base;
//    int exponent;
//    std::cout << "Please enter the base: ";
//    std::cin >> base;
//    std::cout << "Please enter the exponent: ";
//    std::cin >> exponent;
//    double result = power(base, exponent); // base and exponent are arguments here
//    std::cout << base << " raised to the " << exponent << " power is " << result << "\n";
//}



/*
=====================================================
Creating Void Functions
=====================================================
*/

//#include <iostream>
//
//double power(double base, int exponent)
//{
//    double result = 1;
//    for(int i = 0; i < exponent; i++)
//    {
//        result = result * base;
//    }
//    return result;
//}
//
//void print_power(double base, int exponent)
//{
//    double result = power(base, exponent);
//    std::cout << base << " raised to the " << exponent << " power is " << result << "\n";
//}
//int main()
//{
//    double base;
//    int exponent;
//    std::cout << "Please enter the base: ";
//    std::cin >> base;
//    std::cout << "Please enter the exponent: ";
//    std::cin >> exponent;
//    print_power(base, exponent);
//    print_power(10, 2);
//}



/*
=====================================================
Intro to C++ Data Types
Integral Data Types and Signed vs Unsigned
Integral Data Types, sizeof, limit
=====================================================
*/

//#include <iostream>
//#include <climits>
//
//int main()
//{
///*
//Integral Data Types:
//int x = 99999999999999999999999999999999; // warning: integer constant is too large for its type + warning: overflow in conversion from '__int128' to 'int' changes value from '9632337040368467967' to '-1' [-Woverflow]
//int x = 999999999999; // warning: overflow in conversion from 'long int' to 'int' changes value from '999999999999' to '-727379969' [-Woverflow]
//*/
//    short a;
//    int b;
//    long c;
//    long long d;
//    // short <= int <= long <= long long
//    unsigned short aa;
//    unsigned int bb;
//    unsigned long cc;
//    unsigned long long dd;
//
//    std::cout << "Size of short is: " << sizeof(short) << " bytes\n";
//    std::cout << "Size of int is: " << sizeof(int) << " bytes\n";
//    std::cout << "Size of long is: " << sizeof(long) << " bytes\n";
//    std::cout << "Size of long long is: " << sizeof(long long) << " bytes\n";
//    std::cout << "Size of unsigned short is: " << sizeof(unsigned short) << " bytes\n";
//    std::cout << "Size of unsigned int is: " << sizeof(unsigned int) << " bytes\n";
//    std::cout << "Size of unsigned long is: " << sizeof(unsigned long) << " bytes\n";
//    std::cout << "Size of unsigned long long is: " << sizeof(unsigned long long) << " bytes\n";
//
//    std::cout << "Size of short is: " << SHRT_MAX << " to " << SHRT_MIN << "\n";
//    std::cout << "Size of int is: " << INT_MAX << " to " << INT_MIN << "\n";
//    std::cout << "Size of long is: " << LONG_MAX << " to " << LONG_MIN << "\n";
//    std::cout << "Size of long long is: " << LONG_LONG_MAX << " to " << LONG_MIN << "\n";
//    std::cout << "Size of unsigned short is: " << USHRT_MAX << " bits\n";
//    std::cout << "Size of unsigned int is: " << UINT_MAX << " bits\n";
//    std::cout << "Size of unsigned long is: " << ULONG_MAX << " bits\n";
//    std::cout << "Size of unsigned long long is: " << ULONG_LONG_MAX << " bits\n";
//}



/*
=====================================================
char Data Type
=====================================================
*/

//#include <iostream>
//#include <climits>
//
//int main()
//{
//    std::cout << "Size of char is: " << sizeof(char) << " bytes\n";
//    std::cout << "Size of char is: " << CHAR_MAX << " to " << CHAR_MIN << "\n";
//
//    char x = 'A';
//    std::cout << x << "\n";
//    char y = 65; // [127 to -128]
//    std::cout << y << "\n";
//    std::cout << (int) x << "\n"; // type casting way - 1
//    std::cout << static_cast<int>(x) << "\n"; // type casting way - 2
//    unsigned char z = 255; // [0 to 255]
//    std::cout << z << "\n";
//}



/*
=====================================================
Escape Sequences
=====================================================
*/

//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello\nThere" << "\n"; // Escape sequence
//    std::cout << "Hello\tThere" << "\n";
//    std::cout << "Hello\bThere" << "\n";
//    std::cout << "Hello\vThere" << "\n";
//    std::cout << "Hello\aThere" << "\n"; // run in terminal and will get a beep sound!
//    std::cout << "Hello There\0" << "\n"; // to tell machine the end of string in C
//    std::cout << "Hello \"Rabbi\"" << "\n";
//    std::cout << "Hello \\Rabbi\\" << "\n";
//}



/*
=====================================================
bool Data Type
=====================================================
*/

//#include <iostream>
//
//int main()
//{
//    bool pizza_is_good = 1;
//    std::cout << pizza_is_good << "\n";
//
//    pizza_is_good = 0;
//    std::cout << pizza_is_good << "\n";
//
//    pizza_is_good = -1;
//    std::cout << pizza_is_good << "\n";
//
//    pizza_is_good = 1000;
//    std::cout << pizza_is_good << "\n";
//
//    pizza_is_good = true;
//    std::cout << pizza_is_good << "\n";
//
//    pizza_is_good = false;
//    std::cout << pizza_is_good << "\n";
//
//    pizza_is_good = 1;
//    std::cout << std::boolalpha << pizza_is_good << "\n"; // std::boolalpha for printing true or false
//
//    pizza_is_good = 0;
//    std::cout << std::boolalpha << pizza_is_good << "\n";
//}



/*
=====================================================
Floating Point Numbers
=====================================================
*/

#include <iostream>

int main()
{
    bool pizza_is_good = 1;
    std::cout << pizza_is_good << "\n";

    pizza_is_good = 0;
    std::cout << pizza_is_good << "\n";

    pizza_is_good = -1;
    std::cout << pizza_is_good << "\n";

    pizza_is_good = 1000;
    std::cout << pizza_is_good << "\n";

    pizza_is_good = true;
    std::cout << pizza_is_good << "\n";

    pizza_is_good = false;
    std::cout << pizza_is_good << "\n";

    pizza_is_good = 1;
    std::cout << std::boolalpha << pizza_is_good << "\n"; // std::boolalpha for printing true or false

    pizza_is_good = 0;
    std::cout << std::boolalpha << pizza_is_good << "\n";
}