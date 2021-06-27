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

// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     printf("hello world\n");
//     return 0;
// }

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
Data Types in C++
=====================================================
*/

#include <iostream>

int main()
{
    std::cout << "Hello, World!" << "\n";
}
