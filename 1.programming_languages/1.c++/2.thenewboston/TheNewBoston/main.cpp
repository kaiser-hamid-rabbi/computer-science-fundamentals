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

// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main()
// {
//    vector<string> msg{"Hello", "C++", "from", "VS Code", "and the C++ extension"};

//    for (const string &word : msg)
//    {
//       cout << word << " ";
//    }
//    cout << "\n";
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

#include <iostream>
#include <string>

class BuckysClass
{
public:
    void coolSaying()
    {
        std::cout << "preaching to the choir\n";
    }
};

int main()
{
    BuckysClass buckysObject;
    buckysObject.coolSaying();
}