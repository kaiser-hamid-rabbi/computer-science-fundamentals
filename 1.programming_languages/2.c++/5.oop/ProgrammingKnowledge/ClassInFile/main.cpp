/* 
==================================================================
                Learn Object Oriented Programming in C++   
                   Instructor: ProgrammingKnowledge 
           Created by Kaiser Hamid Rabbi on 27-06-2021
    Copyright (c) 2021 Kaiser Hamid Rabbi. All rights reserved.
==================================================================
*/



/* 
=====================================================
Placing Classes in Separate Files in C++
=====================================================
*/

//#include <iostream>
//#include <string>
//#include "Books.h"
//
//int main()
//{
//    Books book1;
//    book1.setBookId(100);
//    std::cout << book1.getBookId() << "\n";
//}



/* 
========================================================
Arrow Member Selection Operator and Pointers to classes
========================================================
*/

#include <iostream>
#include <string>
#include "Books.h"

int main()
{
    Books book1;
    Books *bookPointer = & book1; // create a pointer to hold the address of a class object
    
    book1.setBookId(100);
    std::cout << book1.getBookId() << "\n";
    
    // Way 1: Arrow Member Selection Operator: (*Pointer).method()
    (*bookPointer).setBookId(300);
    std::cout << (*bookPointer).getBookId() << "\n";
    
    // Way 2: Arrow Member Selection Operator: Pointer -> method()
    bookPointer -> setBookId(500);
    std::cout << bookPointer->getBookId() << "\n";
}