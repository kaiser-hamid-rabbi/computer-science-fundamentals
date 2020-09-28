#include<iostream>

// using namespace std; // using directive! (bad practice when your project is huge!)
using std::cout; // good practice! specific and avoid naming conflict!
using std::endl; // good practice! specific and avoid naming conflict!

int main() // main function
{
    // std::cout << "Hello World!\n";
    // std::cout << "Hello World!" << std::endl;
    cout << "Hello World!\n";
    cout << "Hello World!" << endl;
    return 0;
}