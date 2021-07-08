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

// Do-while loop guarantee to run at least one time
#include <iostream>
#include <cmath>

int main()
{
    // int x = 0;
    int x = 99;
    do
    {
        std::cout << x << "\n";
        x++;
    } while (x < 10);
}