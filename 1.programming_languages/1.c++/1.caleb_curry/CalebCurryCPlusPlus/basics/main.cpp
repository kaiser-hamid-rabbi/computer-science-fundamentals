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

//#include <iostream>
//#include <float.h>
//
//int main()
//{
//    float a;
//    double b;
//    long double c;
//
//    float aa = 10. / 3;
//    std::cout << aa << "\n";
//    aa = aa * 1000000000000;
//    std::cout << aa << "\n";
//    std::cout << std::fixed << aa << "\n";
//    std::cout << FLT_DIG << "\n"; // float guarantee 6 digits
//    double bb = 10. / 3;
//    bb = bb * 1000000000000;
//    std::cout << bb << "\n";
//    std::cout << std::fixed << bb << "\n";
//    std::cout << DBL_DIG << "\n"; // double guarantee 15 digits
//    std::cout << LDBL_DIG << "\n"; // long double guarantee 18 digits
//
//}



/*
=====================================================
Constant const, macro, and enum
=====================================================
*/

//#include <iostream>
//#include <float.h>
//#define X 10
//
//int main()
//{
//    const int x = 5; // read-only variable after you declare a variable
//    // x = 10; // you will get an error cause x is a const
//    // const int y; // read-only variable after you declare a variable
//    // y = 10; // you can't do that either
//    std::cout << x << "\n";
//    std::cout << X << "\n"; // define like this(macro) is like C programming, const if preferred
//
//    //enum{int z = 100};
//    //std::cout << z << "\n";
//    //z = 50;
//
//    enum colors{red=5, black};
//    enum suit{heart, diamond=8, spade=3, club, kaiser, hamid=237, rabbi};
//
//    std::cout << "The value of enum color : " << red << "," << black << "\n";
//    std::cout << "The default value of enum suit : " << heart << "," << diamond << "," << spade << "," << club << "," << kaiser << "," << hamid << ","  << rabbi << "\n";
//}



/*
=====================================================
Numeric Functions
=====================================================
*/

//#include <iostream>
//#include <cmath>
//
//int main()
//{
//    std::cout << sqrt(25) << "\n";
//    std::cout << sqrt(-25) << "\n";
//    std::cout << NAN << "\n";
//    std::cout << -NAN << "\n";
//    std::cout << pow(9, 999) << "\n";
//    std::cout << pow(-9, 999) << "\n";
//    std::cout << INFINITY << "\n";
//    std::cout << -INFINITY << "\n";
//
//    std::cout << remainder(10, 3) << "\n"; // modulus give you only integer value, but remainder can give you floating value
//    std::cout << 10 % 3 << "\n";
//    std::cout << remainder(10, 3.25) << "\n"; // modulus give you only integer value, but remainder can give you floating value
//    // std::cout << 10 % 3.25 << "\n"; // you will get an error
//    std::cout << fmod(10, 3.25) << "\n"; // fmod is almost similar to remainder. both can handle floating number
//    std::cout << fmax(10, 3.25) << "\n";
//    std::cout << fmin(10, 3.25) << "\n";
//    std::cout << ceil(fmin(10, 3.25)) << "\n";
//    std::cout << floor(fmin(10, 3.25)) << "\n";
//    std::cout << trunc(fmin(10, 3.25)) << "\n"; // like floor for positive numbers. but behave differently in negative numbers. trunc crop off the decimal
//    std::cout << round(1.5) << "\n";
//    std::cout << round(1.49) << "\n";
//
//    std::cout << abs(-25) << "\n";
//    std::cout << abs(-25) << "\n";
//}



/*
=====================================================
String Class and C Strings
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    // string is a class
//    std::string greeting = "hello"; // greeting is a object of string class
//    std::cout << greeting[0] << "\n";
//    std::cout << greeting[2] << "\n";
//    std::string temp; // default value of a string is a empty string("")
//    std::cout << temp << "\n";
//    std::cout << greeting + " there" << "\n"; // string concatanation
//    std::string complete_greeting = greeting + " there";
//    std::cout << complete_greeting << "\n";
//    complete_greeting += "!"; // append string
//    std::cout << complete_greeting << "\n";
//    std::cout << complete_greeting.length() << "\n";
//    // method == member function == functions attached to objects
//
//    char name[] = "Caleb"; // C string == array of characters. Have lots of limitation. Not a good practice!
//    std::cout << name << "\n";
//    // name = "tacobell"; // you will get an error because name's memeory assigned for 5 characters
//    // name = "t"; // you can't do that either
//}



/*
=====================================================
get line for Strings
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    std::string greeting;
//    //std::cin >> greeting;
//    //std::string left_over; // to get the left over from the input stream
//    //std::cin >> left_over;
//    //std::cout << greeting << "\n";
//    //std::cout << left_over << "\n";
//
//    getline(std::cin, greeting); // proper way to take multiple word string input
//    std::cout << greeting << "\n";
//
//}



/*
=====================================================
String Modifier Methods
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    std::string greeting = "Hello";
//    std::cout << greeting.length() << "\n";
//    std::cout << greeting.size() << "\n"; // same as length()
//    greeting += " there"; // this is recommended
//    std::cout << greeting << "\n";
//    greeting.append(" everyone!"); // same as +=
//    std::cout << greeting << "\n";
//
//    greeting = "Hello";
//    greeting.insert(3, " ");
//    std::cout << greeting << "\n";
//    greeting.erase(3, 1);
//    std::cout << greeting << "\n";
//    greeting.erase(3);
//    std::cout << greeting << "\n";
//    greeting.erase(greeting.length() - 1);
//    std::cout << greeting << "\n";
//    greeting.pop_back(); // same as erase(your_string.length() - 1) + recommended
//    std::cout << greeting << "\n";
//
//    greeting = "Hello";
//    greeting.replace(0, 3, "Heaven");
//    std::cout << greeting << "\n";
//
//    greeting = "What the Hell";
//    greeting.replace(9, 4, "Heaven");
//    std::cout << greeting << "\n";
//
//    greeting = "What the Hell";
//    greeting.replace(9, 4, "****");
//    std::cout << greeting << "\n";
//}



/*
=====================================================
String Operation Methods
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    std::string greeting = "What the hell";
//    greeting.replace(greeting.find("hell"), 4, "****");
//    std::cout << greeting << "\n";
//
//    greeting = "What is up?";
//    std::cout << greeting.substr(5, 2) << "\n";
//    std::cout << greeting.find_first_of("aeioy") << "\n";
//    std::cout << greeting.find_first_of("!") << "\n"; // 18446744073709551615 equivalent as not found, npos == -1
//    unsigned long x = -1;
//    std::cout << x << "\n";
//    if(greeting.find_first_of("!") == -1) std::cout << "NOT FOUND!\n";
//
//    greeting = "What is up?";
//    if(greeting == "Hello") std::cout << "Equals\n"; // recommended way [==]
//    if(greeting == "What is up?") std::cout << "Equals\n";
//    if(greeting.compare("Hello") == 0) std::cout << "Equals\n"; // another way to compare string
//    if(greeting.compare("What is up?") == 0) std::cout << "Equals\n";
//}



/*
=====================================================
Literals
=====================================================
*/

//#include <iostream>
//#include <string>
//#include <typeinfo>
//
//int main()
//{
//    auto x = 5U;
//    auto y = 5UL;
//    auto z = 5ULL;
//    auto p = 5.0F; // float
//    auto q = 5.0; // double
//    auto r = 5.; // double
//    auto s = 5.0L; // long double
//    std::cout << x << "\n";
//    int w = 5;
//    std::cout << typeid(w).name() << "\n";
//    long e = 10;
//    std::cout << typeid(e).name() << "\n";
//    double t = 5.;
//    std::cout << typeid(t).name() << "\n";
//}



/*
=====================================================
Hex and Octal
=====================================================
*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello!\n";
}