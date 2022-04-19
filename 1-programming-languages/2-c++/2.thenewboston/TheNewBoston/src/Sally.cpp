#include <iostream>
#include <string>
#include "Sally.h"

Sally::Sally()
{
    // std::cout << "i am a constructor from Sally class...\n";
}
Sally::~Sally()
{
    // std::cout << "i am a Deconstructor from Sally class...\n";
}

void Sally::printCrap()
{
    // std::cout << "did someone say steak?\n";
}

void Sally::printShiz()
{
    std::cout << "i am a regular function...\n";
}

void Sally::printShizConst() const
{
    std::cout << "i am a constant function...\n";
}