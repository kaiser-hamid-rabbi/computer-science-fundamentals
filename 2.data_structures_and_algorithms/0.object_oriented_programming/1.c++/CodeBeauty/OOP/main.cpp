/*
==================================================================
                Learn Object Oriented Programming in C++
                   Instructor: Code Beauty
           Created by Kaiser Hamid Rabbi on 28-06-2021
    Copyright (c) 2021 Kaiser Hamid Rabbi. All rights reserved.
==================================================================
*/



/*
=====================================================
Introduction to OOP, What are classes and objects
=====================================================
*/

//#include <iostream>
//
//class Employee
//{
//public:
//    std::string Name;
//    std::string Company;
//    int Age;
//
//void IntroduceYourself()
//{
//    std::cout << "Name: " << Name << "\n";
//    std::cout << "Company: " << Company << "\n";
//    std::cout << "Age: " << Age << "\n";
//}
//
//};
//
//int main()
//{
//    Employee employee1;
//    employee1.Name = "Kaiser Hamid";
//    employee1.Company = "TigerIT";
//    employee1.Age = 25;
//    employee1.IntroduceYourself();
//
//    Employee employee2;
//    employee2.Name = "Corey Schefer";
//    employee2.Company = "Google";
//    employee2.Age = 35;
//    employee2.IntroduceYourself();
//}



/*
=====================================================
OOP Constructors and class methods
=====================================================
*/

#include <iostream>

class Employee
{
public:
    std::string Name;
    std::string Company;
    int Age;

void IntroduceYourself()
{
    std::cout << "Name: " << Name << "\n";
    std::cout << "Company: " << Company << "\n";
    std::cout << "Age: " << Age << "\n";
}

};

int main()
{
    Employee employee1;
    employee1.Name = "Kaiser Hamid";
    employee1.Company = "TigerIT";
    employee1.Age = 25;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Corey Schefer";
    employee2.Company = "Google";
    employee2.Age = 35;
    employee2.IntroduceYourself();
}