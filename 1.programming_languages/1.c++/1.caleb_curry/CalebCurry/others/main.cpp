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
//    a = 10 + 2; //initialization
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
//int x = 99999999999999999999999999999999; // warning: integer constant is too large for its type + warning: overflow in conversion from '__int128' to 'int' changes value from '9632337040368467967' to '-1' [-overflow]
//int x = 999999999999; // warning: overflow in conversion from 'long int' to 'int' changes value from '999999999999' to '-727379969' [-overflow]
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
//    // name = "tacobell"; // you will get an error because name's memory assigned for 5 characters
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

//#include <iostream>
//#include <string>
//
//int main()
//{
//    int number1 = 30; // decimal 30
//    std::cout << number1 << "\n";
//    int number2 = 0x30; // hexa decimal 48
//    std::cout << number2 << "\n";
//    int number3 = 030; // octal 24
//    std::cout << number3 << "\n";
//
//    // decimal to hexa/octal
//    int number = 30;
//    std::cout << std::hex << number << "\n";
//    std::cout << std::oct << number << "\n";
//}



/*
=====================================================================
Operator Precedence(a*b   a/b   a%b   a+b   a-b) and Associativity
=====================================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    double x;
//    double y;
//    x = 10;
//    y = x = 100;
//    std::cout << x << "\t" << y << "\n";
//
//    x = 10;
//    (y = x) = 100; // y =  x; y = 100
//    std::cout << x << "\t" << y << "\n";
//}



/*
=====================================================
Reviewing Key Concepts
=====================================================
*/



/*
=====================================================
Control Flow:
    1. Branching -> if-elseif-else, switch
    2. Looping -> for, while, do-while
=====================================================
*/



/*
=====================================================
If Statement Practice
=====================================================
*/

//#include <iostream>
//
//int main()
//{
//    //int age = 20;
//    //if(age > 18)
//    //{
//    //    std::cout << "You're old enough!\n";
//    //    return -1; // to finish the program
//    //}
//    //std::cout << "Always\n";
//
//    //int age = 13;
//    //if(age > 18) std::cout << "You're old enough!\n";
//    //else std::cout << "Sorry, You are not 18!\n";
//
//    std::cout << "How old are you? ";
//    int age;
//    std::cin >> age;
//    if(age >= 18) std::cout << "You're old enough!\n";
//    else if(age < 18 && age > 16) std::cout << "You are almost 18!\n";
//    else std::cout << "Sorry, You are not 18!\n";
//}



/*
=====================================================
Logical and Comparison Operators
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    // logical [&&, ||, !], comparison [==, !=, <, >, <=, >=]
//    std::string name_answer = "Kaiser";
//    int age_answer = 30;
//    std::string name_guess;
//    std::cout << "Guess my name: ";
//    std::cin >> name_guess;
//
//    int age_guess;
//    std::cout << "Guess my age: ";
//    std::cin >> age_guess;
//
//    if(name_guess == name_answer && age_guess == age_answer)
//    {
//        std::cout << "You got it right!\n";
//    }
//
//    if(name_guess == name_answer || age_guess == age_answer)
//    {
//        std::cout << "You got it right!\n";
//    }
//
//    // Let's say, you want to guess any name without Clark
//    name_answer = "Clark";
//    if(!(name_guess == name_answer)) // way 1
//    {
//        std::cout << "You got it right!\n";
//    }
//    if(name_guess != name_answer) // way 2 - recommended
//    {
//        std::cout << "You got it right!\n";
//    }
//}



/*
=====================================================
Switch Statement and Enum
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    //int age;
//    //std::cout << "What is your age?: ";
//    //std::cin >> age;
//    //switch(age) // only work with integer value. Not recommended, use if-elseif-else instead
//    //{
//    //    case 13:
//    //        std::cout << "You are 13\n";
//    //        break;
//    //        // return 0; // work as break, means everything is okay, not recommended in switch statement
//    //        // return -1; // means something is wrong in the program
//    //    case 14:
//    //        std::cout << "You are 14\n";
//    //        break;
//    //    default:
//    //        std::cout << "Catch all!\n";
//    //        break;
//    //}
//
//    //enum seasons{summer, spring, fall, winter}; // enum + switch - not recommended
//    //seasons now = winter;
//    //switch(now)
//    //{
//    //    case summer:
//    //        break;
//    //    case spring:
//    //        break;
//    //    case fall:
//    //        break;
//    //    case winter:
//    //        std::cout << "Stay warm!\n";
//    //        break;
//    //}
//
//    enum class Season{summer, spring, fall, winter}; // enum class+ switch - recommended
//    Season now = Season::fall;
//    switch(now)
//    {
//        case Season::summer:
//            std::cout << "Stay cool!\n";
//            break;
//        case Season::spring:
//            std::cout << "Stay happy!\n";
//            break;
//        case Season::fall:
//        std::cout << "Stay great!\n";
//            break;
//        case Season::winter:
//            std::cout << "Stay warm!\n";
//            break;
//    }
//}



/*
=====================================================
Intro to Loops
=====================================================
*/



/*
=====================================================
For Loops (How to Calculate Factorial)
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    //for (int i = 0; i < 10; i++)
//    //{
//    //    std::cout << i << "\t";
//    //}
//    //std::cout << "\n";
//
//    // infinite loop
//    //for (int i = 9; i >= 0; i++)
//    //{
//    //    std::cout << i << "\t";
//    //}
//    //std::cout << "\n";
//
//    //for (int i = 9; i >= 0; i--)
//    //{
//    //    std::cout << i << "\t";
//    //}
//    //std::cout << "\n";
//
//    std::cout << "Enter a integer number:\t";
//    int fact;
//    std::cin >> fact;
//    int factorial = fact;
//    for (int i = factorial - 1; i > 1; i--)
//    {
//        factorial *= i;
//    }
//    std::cout << "factorial of " << fact << " is: " << factorial << "\n";
//}



/*
=====================================================
While Loop and Factorial Calculator
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    //int i = 0;
//    //while(i < 10)
//    //{
//    //    std::cout << i << "\t";
//    //    i++;
//    //}
//    //std::cout << "\n";

//    //while(true); // infinite loop
//
//    //int i = 9;
//    //while(i >= 0)
//    //{
//    //    std::cout << i << "\t";
//    //    i--;
//    //}
//    //std::cout << "\n";
//
//    std::cout << "Enter a integer number:\t";
//    int inp;
//    std::cin >> inp;
//    int factorial = inp;
//    int i = factorial - 1;
//    while(i > 1)
//    {
//        factorial *= i;
//        i--;
//    }
//    std::cout << "factorial of " << inp << " is: " << factorial << "\n";
//}



/*
=====================================================
Do While Loop
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    // atleast once - way 1
//    //std::string password = "hellotacos123";
//    //std::string guess;
//    //do
//    //{
//    //    std::cout << "Guess the password:\t";
//    //    std::cin >> guess;
//    //} while(guess != password);
//
//    // mimic the function of do-while loop with while loop - way 2
//    std::string password = "hellotacos123";
//    std::string guess;
//    std::cout << "Guess the password:\t";
//    std::cin >> guess;
//    while(guess != password)
//    {
//        std::cout << "Guess the password:\t";
//        std::cin >> guess;
//    }
//}



/*
=====================================================
Break and Continue
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    //std::string sentence = "Hello my name is Kaiser";
//    //for(int i = 0; i < sentence.size(); i++)
//    //{
//    //    std::cout << sentence[i];
//    //}
//    //std::cout << "\n";
//
//    //std::string sentence = "Hello my name is Kaiser";
//    //for(int i = 0; i < sentence.size(); i++)
//    //{
//    //    std::cout << sentence[i] << "\n";
//    //    if(sentence[i] == 'o')
//    //    {
//    //        std::cout << "found o!\n";
//    //    }
//    //}
//
//    //std::string sentence = "Hello my name is Kaiser";
//    //for(int i = 0; i < sentence.size(); i++)
//    //{
//    //    std::cout << sentence[i] << "\n";
//    //    if(sentence[i] == 'o')
//    //    {
//    //        std::cout << "found o!\n";
//    //        break;
//    //    }
//    //}
//    //std::cout << "Done!\n";
//
//    std::string sentence = "Hello my name is Kaiser";
//    for(int i = 0; i < sentence.size(); i++)
//    {
//        if(sentence[i] == ' ')
//        {
//            continue;
//        }
//        std::cout << sentence[i] << "\n";
//    }
//    std::cout << "Done!\n";
//}



/*
=====================================================
Conditional Operator
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    int answer = 11;
//    while(true)
//    {
//        std::cout << "Guess the number: ";
//        int guess;
//        std::cin >> guess;
//        guess == answer ? std::cout << "Good job!\n" : std::cout << "Bad luck!\n";
//    }
//
//}



/*
=====================================================
Intro to Our App
=====================================================
*/



/*
=====================================================
Creating a Menu
=====================================================
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//    int choice;
//    do
//    {
//        std::cout << "0. Quit\n" << "1. Play Game\n";
//        std::cin>> choice;
//        switch(choice)
//        {
//            case 0:
//                std::cout << "Thanks for nothing!\n";
//                return 0;
//            case 1:
//                std::cout << "Yo let's play!\n";
//                break;
//        }
//    }while(choice !=  0);
//}



/*
=====================================================
Creating a Guessing Game
=====================================================
*/

//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//
//void play_game()
//{
//    int random = rand() % 251;
//    std::cout << "The number you have to guess: " << random << "\n";
//    std::cout << "Guess a number: ";
//    while(true)
//    {
//        int guess;
//        std::cin >> guess;
//        if(guess == random)
//        {
//            std::cout << "You win!\n";
//            break;
//        }
//        else if(guess < random)
//        {
//            std::cout << "Too low\n";
//        }
//        else
//        {
//            std::cout << "Too high\n";
//        }
//    }
//}
//
//int main()
//{
//    srand(time(NULL));
//    int choice;
//    do
//    {
//        std::cout << "0. Quit\n" << "1. Play Game\n";
//        std::cin>> choice;
//        switch(choice)
//        {
//            case 0:
//                std::cout << "Thanks for nothing!\n";
//                return 0;
//            case 1:
//                play_game();
//                break;
//        }
//    }while(choice !=  0);
//}



/*
=====================================================
Intro to Arrays and Vectors
=====================================================
*/



/*
=====================================================
Working with Arrays
=====================================================
*/

//#include <iostream>
//
//int main()
//{
//    //int guesses[7] = {10, 13, 54, 42, 12, 12, 13};
//    //std::cout << guesses[3] << "\n";
//    //guesses[3] = 300;
//    //std::cout << guesses[3] << "\n";
//
//    //int guesses[20];
//    //guesses[0] = 10;
//    //std::cin >> guesses[0];
//    //std::cout << guesses[0] << "\n";
//
//    //int guesses[] = {12, 43, 23, 43, 23};
//    //int size = sizeof(guesses) / sizeof(guesses[0]); // sizeof(int) is also valid
//    //std::cout << size << "\n";
//    //for(int i = 0; i < size; i++)
//    //{
//    //    std::cout << guesses[i] << "\t";
//    //}
//    //std::cout << "\n";
//
//    int guesses[10] = {12, 43, 23, 43, 23};
//    int num_elements = 5;
//    int size = sizeof(guesses) / sizeof(guesses[0]);
//    for(int i = 0; i < num_elements; i++)
//    {
//        std::cout << guesses[i] << "\t";
//    }
//    std::cout << "\n";
//}



/*
=====================================================
Passing Arrays to Functions
=====================================================
*/

//#include <iostream>
//
//void print_array(int array[], int size)
//{
//    std::cout << size << "\n";
//    for(int i = 0; i < size; i++)
//    {
//        std::cout << array[i] << "\t";
//    }
//    std::cout << "\n";
//}
//
//int main()
//{
//    int guesses[] = {12, 43, 23, 43, 23, 45, 34, 24, 11, 19};
//    int size = sizeof(guesses) / sizeof(int);
//    print_array(guesses, size);
//}



/*
=====================================================
Fill Array from Input
=====================================================
*/

//#include <iostream>
//#include <limits>
//
//void print_array(int array[], int size)
//{
//    for(int i = 0; i < size; i++)
//    {
//        std::cout << array[i] << "\t";
//    }
//    std::cout << "\n";
//}
//
//int main()
//{
//    const int SIZE = 100;
//    int guesses[SIZE];
//    int count = 0;
//
//    for(int i = 0; i < SIZE; i++)
//    {
//        if(std::cin >> guesses[i]) // return cin if everything properly stored
//        {
//            // input worked
//            count++;
//        }
//        else
//        {
//            // invalid character given
//            break;
//        }
//    }
//    print_array(guesses, count);
//
//    // To clear the input stream after putting junk in case like 'asdfasdfasdf'
//    std::cin.clear();
//    std::cin.ignore(10000, '\n'); // way 1(shortcut)
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // way 2(recommended)
//}



/*
=====================================================
Using an Array to Keep Track of Guessing
=====================================================
*/

//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//
//void print_array(int array[], int count)
//{
//    for(int i = 0; i < count; i++)
//    {
//        std::cout << array[i] << "\t";
//    }
//    std::cout << "\n";
//}
//
//void play_game()
//{
//    int guesses[251];
//    int guess_count = 0;
//
//    int random = rand() % 251;
//    std::cout << "The number you have to guess: " << random << "\n";
//    std::cout << "Guess a number: ";
//    while(true)
//    {
//        int guess;
//        std::cin >> guess;
//        guesses[guess_count++] = guess; //guess_count++;
//
//        if(guess == random)
//        {
//            std::cout << "You win!\n";
//            break;
//        }
//        else if(guess < random)
//        {
//            std::cout << "Too low\n";
//        }
//        else
//        {
//            std::cout << "Too high\n";
//        }
//    }
//    print_array(guesses, guess_count);
//}
//
//int main()
//{
//    srand(time(NULL));
//    int choice;
//    do
//    {
//        std::cout << "0. Quit\n" << "1. Play Game\n";
//        std::cin>> choice;
//        switch(choice)
//        {
//            case 0:
//                std::cout << "Thanks for nothing!\n";
//                return 0;
//            case 1:
//                play_game();
//                break;
//        }
//    }while(choice !=  0);
//}



/*
=====================================================
Intro to Vectors
=====================================================
*/



/*
=====================================================
Creating a Vector
=====================================================
*/

//#include <iostream>
//#include <vector>
//
//int main()
//{
//    std::vector<int> data = {1, 2, 3};
//    data.push_back(12);
//    std::cout << data[3] << "\n";
//    std::cout << data[data.size() - 1] << "\n"; // same as the previous line
//    data.pop_back();
//    std::cout << data.size() << "\n";
//}



/*
=====================================================
Passing Vectors to Functions
=====================================================
*/

//#include <iostream>
//#include <vector>
//
//// pass vector to a function
////void print_vector(std::vector<int> data)
////{
////    for(int i = 0; i < data.size(); i++)
////    {
////        std::cout << data[i] << "\t";
////    }
////    std::cout << "\n";
////}
////
////int main()
////{
////    std::vector<int> data = {1, 2, 3};
////    print_vector(data);
////}
//
//
//// pass by reference
////void print_vector(std::vector<int> data)
////{
////    data.push_back(12);
////    for(int i = 0; i < data.size(); i++)
////    {
////        std::cout << data[i] << "\t";
////    }
////    std::cout << "\n";
////}
////
////int main()
////{
////    std::vector<int> data = {1, 2, 3};
////    print_vector(data);
////    print_vector(data);
////    print_vector(data);
////}
//
//
//// pass by reference
//void print_vector(std::vector<int> &data)
//{
//    data.push_back(12);
//    for(int i = 0; i < data.size(); i++)
//    {
//        std::cout << data[i] << "\t";
//    }
//    std::cout << "\n";
//}
//
//int main()
//{
//    std::vector<int> data = {1, 2, 3};
//    print_vector(data);
//    print_vector(data);
//    print_vector(data);
//}



/*
=====================================================
Refactor Guessing Game to Use Vectors
=====================================================
*/

//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//#include <vector>
//
//void print_vector(std::vector<int> data)
//{
//    for(int i = 0; i < data.size(); i++)
//    {
//        std::cout << data[i] << "\t";
//    }
//    std::cout << "\n";
//}
//
//void play_game()
//{
//    std::vector<int> guesses;
//
//    int random = rand() % 251;
//    std::cout << "The number you have to guess: " << random << "\n";
//    std::cout << "Guess a number: ";
//    while(true)
//    {
//        int guess;
//        std::cin >> guess;
//        guesses.push_back(guess);
//
//        if(guess == random)
//        {
//            std::cout << "You win!\n";
//            break;
//        }
//        else if(guess < random)
//        {
//            std::cout << "Too low\n";
//        }
//        else
//        {
//            std::cout << "Too high\n";
//        }
//    }
//    print_vector(guesses);
//}
//
//int main()
//{
//    srand(time(NULL));
//    int choice;
//    do
//    {
//        std::cout << "0. Quit\n" << "1. Play Game\n";
//        std::cin>> choice;
//        switch(choice)
//        {
//            case 0:
//                std::cout << "Thanks for nothing!\n";
//                return 0;
//            case 1:
//                play_game();
//                break;
//        }
//    }while(choice !=  0);
//}



/*
=====================================================
STL Array
=====================================================
*/



/*
=====================================================
STL Arrays in Practice
=====================================================
*/

//#include <iostream>
//#include <string>
//#include <vector>
//#include <array>
//
////void print_templatized_array(std::array<int, 20> data)
////{
////    for(int i = 0; i < data.size(); i++)
////    {
////        std::cout << data[i] << "\t";
////    }
////    std::cout << "\n";
////}
////
////int main()
////{
////    std::array<int, 20> data = {1, 2, 3};
////    print_templatized_array(data);
////}
//
//
//void print_templatized_array(std::array<int, 20> &data, int size)
//{
//    for(int i = 0; i < size; i++)
//    {
//        std::cout << data[i] << "\t";
//    }
//    std::cout << "\n";
//}
//
//int main()
//{
//    std::array<int, 20> data = {1, 2, 3};
//    print_templatized_array(data, 3);
//}



/*
=====================================================
Refactor Guessing Game to Use Templatized Array
=====================================================
*/

// #include <iostream>
// #include <string>
// #include <vector>
// #include <array>
// #include <cstdlib>
// #include <ctime>

// void print_templatized_array(std::array<int, 251> data, int size)
// {
//    for(int i = 0; i < size; i++)
//    {
//        std::cout << data[i] << "\t";
//    }
//    std::cout << "\n";
// }

// void play_game()
// {
//    std::array<int, 251> guesses;
//    int count = 0;

//    int random = rand() % 251;
//    std::cout << "The number you have to guess: " << random << "\n";
//    std::cout << "Guess a number: ";
//    while(true)
//    {
//        int guess;
//        std::cin >> guess;
//        guesses[count++] = guess;

//        if(guess == random)
//        {
//            std::cout << "You win!\n";
//            break;
//        }
//        else if(guess < random)
//        {
//            std::cout << "Too low\n";
//        }
//        else
//        {
//            std::cout << "Too high\n";
//        }
//    }
//    print_templatized_array(guesses, count);
// }

// int main()
// {
//    srand(time(NULL));
//    int choice;
//    do
//    {
//        std::cout << "0. Quit\n" << "1. Play Game\n";
//        std::cin>> choice;
//        switch(choice)
//        {
//            case 0:
//                std::cout << "Thanks for nothing!\n";
//                return 0;
//            case 1:
//                play_game();
//                break;
//        }
//    }while(choice !=  0);
// }



/*
=====================================================
C style Array vs STL Vector vs STL Array
=====================================================
*/



/*
=====================================================
Range Based for Loop
=====================================================
*/

//#include <iostream>
//#include <string>
//#include <vector>
//#include <array>
//
//int main()
//{
//    //int data[] = {1, 2, 3, 4, 5, 6};
//    //std::vector<int> data = {1, 2, 3, 4, 5, 6};
//    std::array<int, 6> data = {1, 2, 3, 4, 5, 6};
//
//    // range based for loop
//    for(int n : data)
//    {
//        std::cout << n << "\t";
//    }
//    std::cout << "\n";
//
//    // normal for loop
//    for(int i = 0; i < 6; i++)
//    {
//        std::cout << data[i] << "\t";
//    }
//    std::cout << "\n";
//}



/*
=====================================================
Intro to IO Streams
=====================================================
*/



/* 
=====================================================
Writing to Files with ofstream
=====================================================
 */

// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <string>

// int main()
// {
//     // std::ofstream file;
//     // file.open("hello.txt");
//     std::string filename;
//     std::cin >> filename;

//     std::ofstream file (filename.c_str(), std::ios::app);
//     if(file.is_open())
//     {
//         std::cout << "success!\n";
//     }

//     // file << "hey";

//     std::vector<std::string> names;
//     names.push_back("Caleb");
//     names.push_back("Amy");
//     names.push_back("Susan");

//     for(std::string name : names)
//     {
//         file << name << "\n";
//     }

//     file.close();
// }



/* 
=====================================================
Readings from Files with ifstream
=====================================================
 */

// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <string>

// int main()
// {
//     std::ifstream file ("tacos.txt");

//     if(file.is_open())
//     {
//         std::cout << "success!\n";
//     }

//     // std::vector <std::string> names;
//     // std::string input;
//     // while(file >> input) // return file
//     // {
//     //     names.push_back(input);
//     // }
//     // for(std::string name : names)
//     // {
//     //     std::cout << name << "\n";
//     // }

//     // std::vector <char> names;
//     // char input;
//     // while(file >> input) // return file
//     // {
//     //     names.push_back(input);
//     // }
//     // for(char name : names)
//     // {
//     //     std::cout << name << "\n";
//     // }

//     // char temp = file.get();
//     // std::cout << temp << "\n";
//     std::string line;
//     getline(file, line);
//     std::cout << line << "\n";

//     file.close();
// }



/* 
=====================================================
Saving High Scores to File
=====================================================
 */

// #include <iostream>
// #include <string>
// #include <cstdlib>
// #include <ctime>
// #include <vector>
// #include <fstream>

// void print_vector(std::vector<int> data)
// {
//    for(int i = 0; i < data.size(); i++)
//    {
//        std::cout << data[i] << "\t";
//    }
//    std::cout << "\n";
// }

// void play_game()
// {
//    std::vector<int> guesses;
//    int count = 0;

//    int random = rand() % 251;
//    std::cout << "The number you have to guess: " << random << "\n";
//    std::cout << "Guess a number: ";
//    while(true)
//    {
//        int guess;
//        std::cin >> guess;
//        count++;
//        guesses.push_back(guess);

//        if(guess == random)
//        {
//            std::cout << "You win!\n";
//            break;
//        }
//        else if(guess < random)
//        {
//            std::cout << "Too low\n";
//        }
//        else
//        {
//            std::cout << "Too high\n";
//        }
//    }
//    std::ifstream input("best-score.txt");
//    if(!input.is_open())
//    {
//        std::cout << "Unable to read file!\n";
//        return;
//    }
//    int best_score;
//    input >> best_score;
//    std::ofstream output("best-score.txt");
//    if(!output.is_open())
//    {
//        std::cout << "Unable to read file!\n";
//        return;
//    }
//    if(count < best_score)
//    {
//        output << count;
//    }
//    else
//    {
//        output << best_score;
//    }

//    print_vector(guesses);
// }

// int main()
// {
//    srand(time(NULL));
//    int choice;
//    do
//    {
//        std::cout << "0. Quit\n" << "1. Play Game\n";
//        std::cin>> choice;
//        switch(choice)
//        {
//            case 0:
//                std::cout << "Thanks for nothing!\n";
//                return 0;
//            case 1:
//                play_game();
//                break;
//        }
//    }while(choice !=  0);
// }



/* 
=====================================================
Functions and Constructors
=====================================================
 */



/* 
=====================================================
Refactoring IO to Function Call and Testing
=====================================================
 */

// #include <iostream>
// #include <string>
// #include <cstdlib>
// #include <ctime>
// #include <vector>
// #include <fstream>

// void save_score(int count)
// {
//     std::ifstream input("best-score.txt");
//     if(!input.is_open())
//     {
//         std::cout << "Unable to read file!\n";
//         return;
//     }
//     int best_score;
//     input >> best_score;
//     std::ofstream output("best-score.txt");
//     if(!output.is_open())
//     {
//         std::cout << "Unable to read file!\n";
//         return;
//     }
//     if(count < best_score)
//     {
//         output << count;
//     }
//     else
//     {
//         output << best_score;
//     }
// }

// void print_vector(std::vector<int> data)
// {
//    for(int i = 0; i < data.size(); i++)
//    {
//        std::cout << data[i] << "\t";
//    }
//    std::cout << "\n";
// }

// void play_game()
// {
//    std::vector<int> guesses;
//    int count = 0;

//    int random = rand() % 251;
//    std::cout << "The number you have to guess: " << random << "\n";
//    std::cout << "Guess a number: ";
//    while(true)
//    {
//        int guess;
//        std::cin >> guess;
//        count++;
//        guesses.push_back(guess);

//        if(guess == random)
//        {
//            std::cout << "You win!\n";
//            break;
//        }
//        else if(guess < random)
//        {
//            std::cout << "Too low\n";
//        }
//        else
//        {
//            std::cout << "Too high\n";
//        }
//    }
//    save_score(count);
//    print_vector(guesses);
// }

// int main()
// {
//    srand(time(NULL));
//    int choice;
//    do
//    {
//        std::cout << "0. Quit\n" << "1. Play Game\n";
//        std::cin>> choice;
//        switch(choice)
//        {
//            case 0:
//                std::cout << "Thanks for nothing!\n";
//                return 0;
//            case 1:
//                play_game();
//                break;
//        }
//    }while(choice !=  0);
// }



/* 
=====================================================
Multidimensional Arrays and Nested Vectors
=====================================================
 */

// #include <iostream>
// #include <vector>

// int main()
// {
//     int grades_array[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
//     for(int r = 0; r < 3; r++)
//     {
//         for(int c = 0; c < 3; c++)
//         {
//             std::cout << grades_array[r][c] << "\t";
//         }
//         std::cout << "\n";
//     }


//     std::vector<std::vector<int>> grades_vector = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
//     for(int r = 0; r < 3; r++)
//     {
//         for(int c = 0; c < 3; c++)
//         {
//             std::cout << grades_vector[r][c] << "\t";
//         }
//         std::cout << "\n";
//     }
// }



/* 
=====================================================
Const Modifier
=====================================================
 */

// #include <iostream>
// #include <vector>
// #include <typeinfo>

// // void print_array(int data[], int size)
// // {
// //     for(int i = 0; i < size; i++)
// //     {
// //         data[i]++;
// //         std::cout << data[i] << "\t";
// //     }
// //     std::cout << "\n";
// // }

// void do_something(const int data[])
// {
//     std::cout << "References/Pointer of data: " << data << "\n"; // if you pass array to a function, then it pass the reference, not value
//     std::cout << "Type of data: " << typeid(data).name() << "\n"; // PKi means Public Key Infrastructure
// }
// void print_array(const int data[], const int size)
// {
//     for(int i = 0; i < size; i++)
//     {
//         // data[i]++; // you will get an error here because data is a const interger array
//         // size++; // you will get an error here because size is a const interger
//         std::cout << data[i] << "\t";
//     }
//     std::cout << "\n";
//     do_something(data); // you will get an error as well if you don't declare data as const in do_something function parameter, because it could potentially change the const data value
// }

// int main()
// {
//     int data[] = {1, 2, 3};
//     print_array(data, 3);
//     std::cout << data[0] << "\n";
// }



/* 
=====================================================
Pass by Reference and Pass By Value
=====================================================
 */



/* 
=====================================================
Swap Function with Pass by Reference
=====================================================
 */

// #include <iostream>
// #include <vector>

// // void swap(int a, int b) // pass by value
// void swap(int &a, int &b) // pass by reference
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     std::cout << "a: " << a << "\tb: " << b << "\n";
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     swap(a, b);
//     std::cout << "a: " << a << "\tb: " << b << "\n";
// }



/* 
=====================================================
Intro to Function Overloading
=====================================================
 */



/* 
=====================================================
Function Overloading Examples - 1
=====================================================
 */

// #include <iostream>
// #include <vector>
// #include<string>

// void swap(int &a, int &b) // pass by reference
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     std::cout << "a: " << a << "\tb: " << b << "\n";
// }

// // Function Overloading(Same function name but different parameters)
// void swap(std::string &a, std::string &b) // pass by reference
// {
//     std::string temp = a;
//     a = b;
//     b = temp;
//     std::cout << "First Name: " << a << "\tLast Name: " << b << "\n";
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     swap(a, b);
//     std::cout << "a: " << a << "\tb: " << b << "\n";

//     std::string first_name = "Kaiser Hamid";
//     std::string last_name = "Rabbi";
//     swap(first_name, last_name);
//     std::cout << "First Name: " << first_name << "\tLast Name: " << last_name << "\n";
// }



/* 
=====================================================
Function Overloading Examples - 2
=====================================================
 */

// #include <iostream>

// struct Rectangle
// {
//     double length;
//     double width;
// };

// double area(double length, double width) // rectangle
// {
//     return length * width;
// }

// // Function Overloading for Square
// double area(double length) // square
// {
//     return length * length;
// }

// // another function overloading with custom type data with struct
// double area(Rectangle rectangle)
// {
//     return rectangle.length * rectangle.width;
// }

// int main()
// {
//     Rectangle rectangle;
//     rectangle.length = 10;
//     rectangle.width = 15;
//     std::cout<< "Area of a Rectangle: " << area(rectangle.length, rectangle. width) << "\n";
//     std::cout<< "Area of a Square: " << area(rectangle.length) << "\n";
//     std::cout<< "Area of a custom Rectangle type : " << area(rectangle) << "\n";
// }



/* 
=====================================================
Default Arguments
=====================================================
 */

// #include <iostream>

// // double pow(double base, int exponent)
// // {
// //     int total = 1;
// //     for(int i = 0; i < exponent; i++)
// //     {
// //         total *= base;
// //     }
// //     return total;
// // }

// // double pow(double base)
// // {
// //     return base * base;
// // }

// // int main()
// // {
// //     std::cout << pow(3, 3) << "\n";
// //     std::cout << pow(3) << "\n";
// // }

// // better solution then above with default argument for function overloading
// // you should minimize overloading by using default arguments if it's possible
// double pow(double base, int exponent = 2) // default argument exponent
// {
//     int total = 1;
//     for(int i = 0; i < exponent; i++)
//     {
//         total *= base;
//     }
//     return total;
// }

// int main()
// {
//     std::cout << pow(3, 3) << "\n";
//     std::cout << pow(3) << "\n";
// }



/* 
=====================================================
Intro to Multifile Compilation
=====================================================
 */



/* 
=====================================================
Multifile Compilation
=====================================================
 */

/* 

1. header file => declarations => .h => can be more than one file
2. implementation file => definitions => .cpp => can be more than one file
3. main file => calling => .cpp => one file only

// add header file in both cpp files
#include "file.h"

// Pre-processor Directive
#ifndef FILE_H
#define FILE_H
...
#endif

// For Open Source Projects
$ g++ file1.cpp file2.cpp // compile multiple .cpp files
$ ./a.out // run program

// For Private Projects
$ g++ -c file1.cpp file2.cpp // it will generate object(.o) files
$ g++ -c file1.o file2.o // compile multiple .o files
$ ./a.out // run program

// In folder "multifile-compilation" => math_stuff.cpp, math_utils.cpp, math_utils.h

 */



/* 
=====================================================
Makefiles
=====================================================
 */

// To automate the compilation and build process



/* 
=====================================================
Creating a Simple Makefile
=====================================================
 */

// In folder "multifile-compilation" => makefile, math_stuff.cpp, math_utils.cpp, math_utils.h

// commands to execute makefile:
// $ make
// $ ./math
// $ make clean
// $ ./math



/* 
=====================================================
Intro to Namespaces
=====================================================
 */



/* 
=====================================================
Creating a Namespace
=====================================================
 */

// // Also implemented this concept in folder "multifile-compilation" => makefile, math_stuff.cpp, math_utils.cpp, math_utils.h with "utilz" namespace
// #include <iostream>
// #include <vector>

// namespace utilz
// {
//     void print_array(const int data[], int size)
//     {
//         for(int i = 0; i < size; i++)
//         {
//             std::cout << data[i] << "\t";
//         }
//         std::cout << "\n";
//     }
// }

// using namespace utilz;

// int main()
// {
//     int data[] = {1, 2, 3};
//     // utilz::print_array(data, 3); // best practice
//     print_array(data, 3); // Bad practice with "using namespace", you increase the risk of conflicts
//     std::cout << data[0] << "\n";
// }



/* 
=====================================================
Intro to Function Templates
=====================================================
 */



/* 
=====================================================
Creating a Function Template
=====================================================
 */

// #include <iostream>
// #include <vector>
// #include<string>

// template <typename T>

// void swap(T &a, T &b) // Function templates => Generic programming
// {
//     T temp = a;
//     a = b;
//     b = temp;
// }

// // void swap(int &a, int &b) // pass by reference
// // {
// //     int temp = a;
// //     a = b;
// //     b = temp;
// //     std::cout << "a: " << a << "\tb: " << b << "\n";
// // }

// // // Function Overloading(Same function name but different parameters)
// // void swap(std::string &a, std::string &b) // pass by reference
// // {
// //     std::string temp = a;
// //     a = b;
// //     b = temp;
// //     std::cout << "First Name: " << a << "\tLast Name: " << b << "\n";
// // }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     swap(a, b);
//     std::cout << "a: " << a << "\tb: " << b << "\n";

//     std::string first_name = "Kaiser Hamid";
//     std::string last_name = "Rabbi";
//     swap(first_name, last_name);
//     std::cout << "First Name: " << first_name << "\tLast Name: " << last_name << "\n";
// }



/* 
=====================================================
Overloading Function Templates
=====================================================
 */

#include <iostream>
#include <vector>
#include<string>

template <typename T>

void swap(T &a, T &b) // Function templates => Generic programming
{
    T temp = a;
    a = b;
    b = temp;
}

// void swap(int &a, int &b) // pass by reference
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     std::cout << "a: " << a << "\tb: " << b << "\n";
// }

// // Function Overloading(Same function name but different parameters)
// void swap(std::string &a, std::string &b) // pass by reference
// {
//     std::string temp = a;
//     a = b;
//     b = temp;
//     std::cout << "First Name: " << a << "\tLast Name: " << b << "\n";
// }

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout << "a: " << a << "\tb: " << b << "\n";

    std::string first_name = "Kaiser Hamid";
    std::string last_name = "Rabbi";
    swap(first_name, last_name);
    std::cout << "First Name: " << first_name << "\tLast Name: " << last_name << "\n";
}