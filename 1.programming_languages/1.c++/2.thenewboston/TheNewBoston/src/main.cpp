/*
==================================================================
                    Learn C++ Programming
                   Instructor: TheNewBoston
           Created by Kaiser Hamid Rabbi on 03-07-2021
    Copyright (c) 2021 Kaiser Hamid Rabbi. All rights reserved.
==================================================================
*/

/*
=====================================================
Intro
Installing g++
C++ Concepts
More C++ Concepts
=====================================================
*/

/*
=====================================================
Installing CodeBlocks
Simple C++ Program
Printing Text
=====================================================
*/

// #include <iostream>

// using namespace std;

// int main() //main function
// {
//    cout << "Hello, World Rabbi!\n";
//    cout << "Hello, World Rabbi!" << "\n";
//    cout << "Hello, World Rabbi!" << endl;
// }

/*
=====================================================
Variables
=====================================================
*/

// #include <iostream>

// using namespace std;

// int main()
// {
//    int tuna = 6; // variable is like a placeholder
//    cout << "tuna: " << tuna << endl;

//    int a = 4;
//    int b = 21;
//    int sum = a + b;
//    cout << "sum: " << sum << endl;
// }

/*
=====================================================
Basic Calculator
=====================================================
*/

// #include <iostream>

// using namespace std;

// int main()
// {
//    int a; // declaring variable
//    int b;
//    int sum;
//    cout << "enter a number hoss! \n";
//    cin >> a;
//    cout << "enter another number \n";
//    cin >> b;

//    sum = a + b;
//    cout << "the sum of those numbers is: " << sum << endl;
// }

/*
=====================================================
Variable Memory
=====================================================
*/

// #include <iostream>

// using namespace std;

// int main()
// {
//    int tuna; // declaration
//    tuna = 54; // initialization
//    tuna = 76; // override the initial value
//    cout << "tuna: " << tuna << endl;
// }

/*
=====================================================
Basic Arithmetic
=====================================================
*/

// #include <iostream>

// using namespace std;

// int main()
// {
//    int x = 4 + 6;
//    cout << "x: " << x << endl;
//    int y = 4 * 6;
//    cout << "y: " << y << endl;
//    int z = 10 / 4;
//    cout << "z: " << z << endl;
//    int a = 24 % 7;
//    cout << "a: " << a << endl;
//    int b = 6 * 4 + 8 * 4 + 9 / 20; // (6 * 4) + (8 * 4) + (9 / 20)
//    cout << "b: " << b << endl;
//    int c = 4 + 3 * 7;
//    cout << "c: " << c << endl;
//    int d = (4 + 3) * 7;
//    cout << "d: " << d << endl;
// }

/*
=====================================================
If
=====================================================
*/

// #include <iostream>

// using namespace std;

// int main()
// {
//    int a = 98;
//    int b = 76;
//    if(5 < 3) // [<, >, <=, >=, ==, !=]
//    {
//       cout << "Bucky is AWESOME!!!\n";
//    }
//    if(a > b) // [<, >, <=, >=, ==, !=]
//    {
//       cout << "Bucky is AWESOME!!!\n";
//    }
// }

/*
=====================================================
Function
=====================================================
*/

// // Way 1 - not recommended
// // #include <iostream>

// // using namespace std;

// // void print_something(); // declaration. also known as "prototyping a
// function"

// // int main()
// // {
// //    cout << "hello..." << endl;
// //    print_something();
// // }

// // void print_something() // implementation
// // {
// //    cout << "oooo i am text on the screen\n";
// // }

// // Way 2 - recommended
// #include <iostream>

// using namespace std;

// void print_something() // declaration + implementation
// {
//    cout << "oooo i am text on the screen\n";
// }

// int main()
// {
//    cout << "hello..." << endl;
//    print_something();
// }

/*
=====================================================
Creating functions with parameters
Functions with multiple parameters
=====================================================
*/

// #include <iostream>
// #include <string>

// void print_something()
// {
//     std::cout << "oooo i am text on the screen\n";
// }
// int addNumbers(int x, int y, std::string name)
// {
//     std::cout << name << "'s favourite number is " << x << "\n";
//     int answer = x + y;
//     return answer;
// }

// int main()
// {
//     print_something();

//     int a, b;
//     std::cout << "enter first number: ";
//     std::cin >> a;
//     std::cout << "enter second number: ";
//     std::cin >> b;
//     int result = addNumbers(a, b, "bucky");
//     std::cout << "x + y = " << result << "\n";
// }

// // Loop through vector of string
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<string> msg{"Hello", "C++", "from", "VS Code", "and the C++ extension"};

//     for (const string &word : msg)
//     {
//         cout << word << " ";
//     }
//     cout << "\n";
// }

/*
=====================================================
Classes and Objects
=====================================================
*/

// #include <iostream>
// #include <string>

// class BuckysClass
// {
// public:
//     void coolSaying()
//     {
//         std::cout << "preaching to the choir\n";
//     }
// };

// int main()
// {
//     BuckysClass buckysObject;
//     buckysObject.coolSaying();
// }

/*
=====================================================
Variables in Classes
=====================================================
*/

// #include <iostream>
// #include <string>

// class BuckysClass
// {
// private:
//     std::string name;

// public:
//     void setName(std::string x) // setter
//     {
//         name = x;
//     }
//     std::string getName() // getter
//     {
//         return name;
//     }
// };

// int main()
// {
//     BuckysClass bo;
//     bo.setName("Bucky Roberts");
//     std::cout << "Name: " << bo.getName() << "\n";
// }

/*
=====================================================
Constructor and Destructor - 1
=====================================================
*/

// #include <iostream>
// #include <string>

// class BuckysClass
// {
// private:
//     std::string name;

// public:
//     BuckysClass() // Constructor without parameters
//     {
//         std::cout << "I'm from the Constructor...\n";
//     }
//     BuckysClass(int x, std::string name) // Constructor with parameters
//     {
//         std::cout << "I'm from the Constructor too...\n";
//         std::cout << name << "'s favourite number is: " << x << "\n";
//     }
//     ~BuckysClass() // Destructor without parameters (it can't take parameters)
//     {
//         std::cout << "I'm from the Destructor...\n";
//     }
// };

// int main()
// {
//     BuckysClass bo1;
//     BuckysClass bo2(11, "Bucky");
// }

/*
=====================================================
Constructor and Destructor - 2
=====================================================
*/

// #include <iostream>
// #include <string>

// class BuckysClass
// {
// private:
//     std::string name;

// public:
//     BuckysClass(std::string name) // Constructor with parameters
//     {
//         setName(name);
//     }
//     void setName(std::string newName)
//     {
//         name = newName;
//     }
//     std::string getname()
//     {
//         return name;
//     }
// };

// int main()
// {
//     BuckysClass bo1("Bucky Roberts");
//     std::cout << bo1.getname() << "\n";
//     BuckysClass bo2("Caleb Curry");
//     std::cout << bo2.getname() << "\n";
//     BuckysClass bo3("Kaiser Hamid Rabbi");
//     std::cout << bo3.getname() << "\n";
// }

/*
=====================================================
Placing classes in different files
=====================================================
*/

// // See main.cpp, Burrito.cpp and Burrito.h files for more details...
// #include <iostream>
// #include <string>
// #include "Burrito.h"

// int main()
// {
//     Burrito bo;
// }

/*
=====================================================
If statement
=====================================================
*/

// #include <iostream>
// #include <string>

// int main()
// {
//     int x = 10;
//     int y = 20;
//     if (x != y) // condition to check. [==, !=, <, >, <=, >=]
//     {
//         // code
//         std::cout << "x is not equal to y\n";
//     }
// }

/*
=====================================================
If else statement
=====================================================
*/

// #include <iostream>
// #include <string>

// int main()
// {
//     int x = 20;
//     int y = 20;
//     if (x == y) // condition to check. [==, !=, <, >, <=, >=]
//     {
//         std::cout << "x is equal to y\n";
//     }
//     else if (x == 10)
//     {
//         std::cout << "x is equal to 10\n";
//     }
//     else
//     {
//         std::cout << "x is not equal to y\n";
//     }
// }

/*
=====================================================
while loops
=====================================================
*/

// #include <iostream>

// int main()
// {
//     int bacon = 1;

//     while (bacon <= 20)
//     {
//         std::cout << "bacon is " << bacon << "\n";
//         // bacon++;
//         bacon = bacon + 3;
//     }
// }

/*
=====================================================
Program using loops
=====================================================
*/

// #include <iostream>

// int main()
// {
//     int x = 1;
//     int number;
//     int total = 0;

//     while (x <= 5)
//     {
//         std::cin >> number;
//         total = total + number;
//         x++;
//     }
//     std::cout << "Your total is: " << total << "\n";
// }

/*
=====================================================
Sentinel controlled loops
=====================================================
*/

// #include <iostream>

// int main()
// {
//     int age;
//     int ageTotal = 0;
//     int numberOfPeopleEntered = 0;

//     std::cout << "Enter first person's age or -1 to quit\n";
//     std::cin >> age;

//     while (age != -1)
//     {
//         ageTotal = ageTotal + age;
//         numberOfPeopleEntered++;

//         std::cout << "Enter next person's age or -1 to quit\n";
//         std::cin >> age;
//     }

//     std::cout << "Number of people entered: " << numberOfPeopleEntered << "\n";

//     std::cout << "Average age of all people are: " << (ageTotal / numberOfPeopleEntered) << "\n";
// }

/*
=====================================================
Assignment & Increment operator
=====================================================
*/

// #include <iostream>

// int main()
// {
//     // int x = 10;
//     // x += 10;
//     // std::cout << x << "\n";
//     // x -= 5;
//     // std::cout << x << "\n";
//     // x *= 5;
//     // std::cout << x << "\n";
//     // x /= 5;
//     // std::cout << x << "\n";
//     // x %= 4;
//     // std::cout << x << "\n";

//     int y = 5;
//     std::cout << y++ << "\n"; // 5
//     std::cout << y << "\n";   // 6
//     std::cout << ++y << "\n"; // 7
// }

/*
=====================================================
For loops
=====================================================
*/

// #include <iostream>

// int main()
// {

//     // for (int x = 1; x < 11; x++)
//     for (int x = 5; x < 50; x += 5)
//     {
//         std::cout << x << "\n";
//     }
// }

/*
=====================================================
Stock Market simulator
=====================================================
*/

// #include <iostream>
// #include <cmath>

// int main()
// {
//     float a;
//     float p = 10000;
//     float r = .01;
//     // float r = .03;

//     for (int day = 1; day <= 30; day++)
//     {
//         a = p * pow(1 + r, day);
//         std::cout << day << " ===== " << a << "\n";
//     }
//     // std::cout << a << "\n";
// }

/*
=====================================================
Do- while loop
=====================================================
*/

// // Do-while loop guarantee to run at least one time
// #include <iostream>
// #include <cmath>

// int main()
// {
//     // int x = 0;
//     int x = 99;
//     do
//     {
//         std::cout << x << "\n";
//         x++;
//     } while (x < 10);
// }

/*
=====================================================
switch
=====================================================
*/

// #include <iostream>
// #include <cmath>

// int main()
// {
//     int age = 18;
//     switch (age) // only work for integer
//     {
//     case 16:
//         std::cout << "hey you can drive now!\n";
//         break;
//     case 18:
//         std::cout << "go buy some lotto tickets!\n";
//         break;
//     case 21:
//         std::cout << "buy me some beer!\n";

//     default:
//         std::cout << "sorry you get nothing!\n";
//         break;
//     }
// }

/*
=====================================================
Logical Operator
=====================================================
*/

// #include <iostream>

// int main()
// {
//     int age = 23;
//     int money = 650;

//     // // Bad practice
//     // if (age > 21)
//     // {
//     //     if (money > 500)
//     //     {
//     //         std::cout << "you are allowed in\n";
//     //     }
//     // }

//     // Recommended
//     // if (age > 21 && money > 500)
//     if (age > 18 || money > 500)
//     {
//         std::cout << "you are allowed in\n";
//     }
// }

/*
=====================================================
Random Number Generator
=====================================================
*/

// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// int main()
// {
//     // for (int x = 0; x < 25; x++)
//     // {
//     //     std::cout << std::rand() << "\n";
//     // }

//     // for (int x = 0; x < 25; x++)
//     // {
//     //     std::cout << std::rand() % 6 << "\n"; // random number between 0 to 5
//     // }

//     // for (int x = 0; x < 25; x++)
//     // {
//     //     std::cout << 1 + (std::rand()) % 6 << "\n"; // random number between 1 to 6
//     // }

//     // // srand(43); // it's like seed!
//     // srand(233);
//     // for (int x = 0; x < 25; x++)
//     // {
//     //     std::cout << 1 + (std::rand()) % 6 << "\n"; // random number between 1 to 6
//     // }

//     srand(time(0));
//     for (int x = 0; x < 25; x++)
//     {
//         std::cout << 1 + (std::rand()) % 6 << "\n"; // random number between 1 to 6
//     }

//     // while (true)
//     // {
//     //     std::cout << "Time: " << time(0) << "\n";
//     // }
// }

/*
=====================================================
Default arguments
=====================================================
*/

// // // one way
// // #include <iostream>

// // int volume(int l = 1, int w = 1, int h = 1);

// // int main()
// // {
// //     std::cout << volume(4, 5, 5) << "\n";
// //     std::cout << volume() << "\n";     // 1 * 1 * 1
// //     std::cout << volume(5) << "\n";    // 5 * 1 * 1
// //     std::cout << volume(5, 6) << "\n"; // 5 * 6 * 1
// // }

// // int volume(int l, int w, int h)
// // {
// //     return l * w * h;
// // }

// // another way (recommended)
// #include <iostream>

// int volume(int l = 1, int w = 1, int h = 1)
// {
//     return l * w * h;
// }

// int main()
// {
//     std::cout << volume(4, 5, 5) << "\n";
//     std::cout << volume() << "\n";     // 1 * 1 * 1
//     std::cout << volume(5) << "\n";    // 5 * 1 * 1
//     std::cout << volume(5, 6) << "\n"; // 5 * 6 * 1
// }

/*
=====================================================
Scope resolution operator
=====================================================
*/

// // #include <iostream>

// // int tuna = 65; // global variables

// // void bucky()
// // {
// //     int saradin = 33; // local variables
// //     std::cout << tuna << "\n";
// //     std::cout << saradin << "\n";
// // }

// // int main()
// // {
// //     std::cout << tuna << "\n";
// //     bucky();
// //     // std::cout << saradin << "\n"; // you will get an error
// // }

// #include <iostream>

// int tuna = 65; // global variables
// int saradin = 50;

// int main()
// {
//     int tuna = 55; // local variables
//     double saradin = 30;
//     std::cout << tuna << "\n";      // to access local variables
//     std::cout << ::tuna << "\n";    // to access global variables
//     std::cout << saradin << "\n";   // to access local variables
//     std::cout << ::saradin << "\n"; // to access global variables
// }

/*
=====================================================
Function Overloading
=====================================================
*/

// #include <iostream>

// void printNumber(int x)
// {
//     std::cout << "i am printing an integer: " << x << "\n";
// }

// void printNumber(float x)
// {
//     std::cout << "i am printing a float: " << x << "\n";
// }

// int main()
// {
//     int a = 54;
//     float b = 32.4896;

//     printNumber(a);
//     printNumber(b);
// }

/*
============================================
Recursion
============================================
*/

// // Useless code! Just for illustration of recursion
// // #include <iostream>

// // void bucky()
// // {
// //     std::cout << "omgwtfbbq\n";
// //     bucky();
// // }

// // int main()
// // {
// //     bucky();
// // }

// // Using recursion to find out factorial of a given number
// #include <iostream>

// int factorialFinder(int x)
// {
//     if (x == 1) // base case
//     {
//         return 1;
//     }
//     else
//     {
//         return x * factorialFinder(x - 1);
//     }
// }

// int main()
// {
//     int number;
//     std::cout << "Please enter a number: ";
//     std::cin >> number;
//     int result = factorialFinder(number);
//     std::cout << "The factorial of " << number << " is: " << result << "\n";
// }

/*
============================================
Arrays
============================================
*/

// #include <iostream>

// int main()
// {
//     int bucky[5] = {66, 75, 2, 43, 99};
//     std::cout << bucky[3] << "\n";
// }

/*
============================================
Arrays with Loops
============================================
*/

// #include <iostream>

// int main()
// {
//     int bucky[9];
//     std::cout << "Element - Value\n";
//     for (int x = 0; x < 9; x++)
//     {
//         bucky[x] = 99;
//         std::cout << x << " ----- " << bucky[x] << "\n";
//     }
// }

/*
============================================
Arrays Calculation
============================================
*/

// #include <iostream>

// int main()
// {
//     int tuna[5] = {20, 54, 76, 832, 546};
//     int sum = 0;
//     for (int x = 0; x < 5; x++)
//     {
//         sum += tuna[x];
//     }
//     std::cout << "Sum of the array: " << sum << "\n";
// }

/*
============================================
Array as argument
============================================
*/

// #include <iostream>

// void printArray(int theArray[], int sizeOfArray);

// int main()
// {
//     int bucky[3] = {20, 54, 675};
//     int jessica[6] = {54, 24, 7, 8, 9, 99};

//     printArray(bucky, 3);
//     printArray(jessica, 6);
// }

// void printArray(int theArray[], int sizeOfArray)
// {
//     for (int x = 0; x < sizeOfArray; x++)
//     {
//         std::cout << theArray[x] << "\n";
//     }
// }

/*
============================================
MD Array
============================================
*/

// // #include <iostream>

// // int main()
// // {
// //     int sally[2][3] = {{2, 3, 4}, {8, 9, 10}};
// //     // 2, 3, 4
// //     // 8, 9, 10
// //     // Multi dimensional array is exactly like coordinates
// //     std::cout << sally[0][2] << "\n";
// //     std::cout << sally[1][1] << "\n";
// // }

// #include <iostream>

// int main()
// {
//     int bertha[2][3] = {{1, 2, 3}, {7, 8, 9}};
//     for (int row = 0; row < 2; row++)
//     {
//         for (int column = 0; column < 3; column++)
//         {
//             std::cout << bertha[row][column] << "\t";
//         }
//         std::cout << "\n";
//     }
// }

/*
============================================
Pointers
============================================
*/

// #include <iostream>

// int main()
// {
//     int fish = 5;
//     std::cout << &fish << "\n";

//     int *fishPointer = &fish;
//     std::cout << fishPointer << "\n";
// }

/*
============================================
Pass by Reference
============================================
*/

// #include <iostream>

// void passByValue(int x)
// {
//     x = 99;
// }

// void passByReference(int *x)
// {
//     *x = 66;
// }

// int main()
// {
//     int betty = 13;
//     int sandy = 13;

//     passByValue(betty);
//     passByReference(&sandy);

//     std::cout << "betty is now " << betty << "\n";
//     std::cout << "sandy is now " << sandy << "\n";
// }

/*
============================================
size of
============================================
*/

#include <iostream>

int main()
{
    char c;
    std::cout << sizeof(c) << "\n";
}