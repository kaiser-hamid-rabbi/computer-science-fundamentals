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
Introduction to C++ Classes and Objects
=====================================================
*/

//#include <iostream>
//
//// A class is the collection of related data and functions under a single name
//class Books
//{
//public:
//    int Id = 256; // member variable
//    void printBookID() // member method
//    {
//        std::cout << "The book Id is: " << Id << "\n";
//        std::cout << "This is the member function of 'Books' class" << "\n";
//    }
//    
//};
//int main()
//{
//    Books book1;
//    book1.printBookID();
//    std::cout << "Member variable of 'Books' class is Id= " << book1.Id << "\n";
//}



/* 
=====================================================
Setter/Getter functions in C++
=====================================================
*/

//#include <iostream>
//#include <string>
//
//class Books
//{
//private:
//    std::string name;
//public:
//    void setName(std::string x) // Setter
//    {
//        name = x;
//    }
//    std::string getName() // Getter
//    {
//        return name;
//    }    
//};
//
//int main()
//{
//    Books book1;
//    book1.setName("C++ Tutorials");
//    std::cout << book1.getName() << "\n";
//}



/* 
=====================================================
Introduction To Constructors in C++ - 1
=====================================================
*/

//#include <iostream>
//#include <string>
//
//class Books
//{
//private:
//    std::string name;
//public:
//    Books() // Constructor without parameter
//    {
//        std::cout << "You are in Constructor without parameter!" << "\n";
//    }
//    void setName(std::string x) // Setter
//    {
//        name = x;
//    }
//    std::string getName() // Getter
//    {
//        return name;
//    }    
//};
//
//int main()
//{
//    Books book1;
//}



/* 
=====================================================
Introduction To Constructors in C++ - 2
=====================================================
*/

//#include <iostream>
//#include <string>
//
//class Books
//{
//private:
//    std::string name;
//public:
//    Books(std::string x) // Constructor with parameter
//    {
//        std::cout << "You are in Constructor with parameter!" << "\n";
//        setName(x);
//    }
//    void setName(std::string x) // Setter
//    {
//        name = x;
//    }
//    std::string getName() // Getter
//    {
//        return name;
//    }    
//};
//
//int main()
//{
//    Books book1("C++ Tutorial");
//    std::cout << book1.getName() << "\n";
//    Books book2("Python Tutorial");
//    std::cout << book2.getName() << "\n";
//}



/* 
=====================================================
Destructors in C++
=====================================================
*/

#include <iostream>
#include <string>

class Books
{
private:
    std::string name;
public:
    Books(std::string x) // Constructor with parameter
    {
        std::cout << "You are in Constructor with parameter!" << "\n";
        setName(x);
    }
    ~Books() // Destructor without parameter
    {
        std::cout << "You are in Destructor without parameter!" << "\n";
    }
    void setName(std::string x) // Setter
    {
        name = x;
    }
    std::string getName() // Getter
    {
        return name;
    }    
};

int main()
{
    Books book1("C++ Tutorial");
    std::cout << book1.getName() << "\n";
    Books book2("Python Tutorial");
    std::cout << book2.getName() << "\n";
}