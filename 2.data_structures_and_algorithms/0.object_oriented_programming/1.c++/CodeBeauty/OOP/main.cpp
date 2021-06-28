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
//    void IntroduceYourself() // class method
//    {
//        std::cout << "Name: " << Name << "\n";
//        std::cout << "Company: " << Company << "\n";
//        std::cout << "Age: " << Age << "\n";
//    }
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

//#include <iostream>
//
//class Employee
//{
//public:
//    std::string Name;
//    std::string Company;
//    int Age;
//
//    void IntroduceYourself() // class method
//    {
//        std::cout << "Name: " << Name << "\n";
//        std::cout << "Company: " << Company << "\n";
//        std::cout << "Age: " << Age << "\n";
//    }
//    Employee(std::string name, std::string company, int age) // Constructor - use for initialization
//    {
//        Name = name;
//        Company = company;
//        Age = age;
//    }
//
//};
//
//int main()
//{
//    Employee employee1 = Employee("Kaiser Hamid", "TigerIT", 25);
//    //employee1.Name = "Kaiser Hamid";
//    //employee1.Company = "TigerIT";
//    //employee1.Age = 25;
//    employee1.IntroduceYourself();
//
//    Employee employee2 = Employee("Corey Schefer", "Google", 35);
//    //employee2.Name = "Corey Schefer";
//    //employee2.Company = "Google";
//    //employee2.Age = 35;
//    employee2.IntroduceYourself();
//}



/*
=====================================================
OOP Encapsulation
=====================================================
*/

//#include <iostream>
//
//class Employee
//{
//private:
//    std::string Name;
//    std::string Company;
//    int Age;
//public:
//    void setName(std::string name) // setter
//    {
//        Name = name;
//    }
//    std::string getName() // getter
//    {
//        return Name;
//    }
//    void setCompany(std::string company) // setter
//    {
//        Company = company;
//    }
//    std::string getCompany() // getter
//    {
//        return Company;
//    }
//    void setAge(int age) // setter
//    {
//        if(age >= 18) Age = age; // set constraints for defining a variable
//        else std::cout << "Sorry! You are not eligible. You must be 18 years old.\n";
//    }
//    int getAge() // getter
//    {
//        return Age;
//    }
//
//    void IntroduceYourself() // class method
//    {
//        std::cout << "Name: " << Name << "\n";
//        std::cout << "Company: " << Company << "\n";
//        std::cout << "Age: " << Age << "\n";
//    }
//    Employee(std::string name, std::string company, int age) // Constructor - use for initialization
//    {
//        Name = name;
//        Company = company;
//        Age = age;
//    }
//
//};
//
//int main()
//{
//    Employee employee1 = Employee("Kaiser", "TigerIT", 25);
//    //employee1.IntroduceYourself();
//
//    Employee employee2 = Employee("Corey", "Google", 35);
//    //employee2.IntroduceYourself();
//
//    employee1.setName("Kaiser Hamid Rabbi");
//    employee1.setCompany("TigerIT Bangladesh Ltd.");
//    employee1.setAge(29);
//    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old and works in " << employee1.getCompany() << "\n";
//
//    employee1.setName("Kaiser Hamid Rabbi");
//    employee1.setCompany("TigerIT Bangladesh Ltd.");
//    employee1.setAge(15);
//    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old and works in " << employee1.getCompany() << "\n";
//}



/*
=====================================================
OOP Abstraction
=====================================================
*/

//#include <iostream>
//
//class AbstractEmployee // Abstract Class which implemented a contract.
//{
//    virtual void AskForPromotion() = 0; // pure virtual function
//};
//
//class Employee : AbstractEmployee
//{
//private:
//    std::string Name;
//    std::string Company;
//    int Age;
//public:
//    void setName(std::string name) // setter
//    {
//        Name = name;
//    }
//    std::string getName() // getter
//    {
//        return Name;
//    }
//    void setCompany(std::string company) // setter
//    {
//        Company = company;
//    }
//    std::string getCompany() // getter
//    {
//        return Company;
//    }
//    void setAge(int age) // setter
//    {
//        if(age >= 18) Age = age; // set constraints for defining a variable
//        else std::cout << "Sorry! You are not eligible. You must be 18 years old.\n";
//    }
//    int getAge() // getter
//    {
//        return Age;
//    }
//
//    void IntroduceYourself() // class method
//    {
//        std::cout << "Name: " << Name << "\n";
//        std::cout << "Company: " << Company << "\n";
//        std::cout << "Age: " << Age << "\n";
//    }
//    Employee(std::string name, std::string company, int age) // Constructor - use for initialization
//    {
//        Name = name;
//        Company = company;
//        Age = age;
//    }
//    void AskForPromotion() // Pure Virtual Function from AbstractEmployee class
//    {
//        if(Age > 30) std::cout << Name << " got promoted!\n";
//        else std::cout << Name << ", sorry NO promotion for you!\n";
//    }
//};
//
//int main()
//{
//    Employee employee1 = Employee("Kaiser", "TigerIT", 25);
//    Employee employee2 = Employee("Corey", "Google", 35);
//
//    employee1.AskForPromotion();
//    employee2.AskForPromotion();
//
//}



/*
=====================================================
OOP Abstraction
=====================================================
*/

#include <iostream>

class AbstractEmployee // Abstract Class which implemented a contract.
{
    virtual void AskForPromotion() = 0; // pure virtual function
};

class Employee : AbstractEmployee
{
private:
    std::string Name;
    std::string Company;
    int Age;
public:
    void setName(std::string name) // setter
    {
        Name = name;
    }
    std::string getName() // getter
    {
        return Name;
    }
    void setCompany(std::string company) // setter
    {
        Company = company;
    }
    std::string getCompany() // getter
    {
        return Company;
    }
    void setAge(int age) // setter
    {
        if(age >= 18) Age = age; // set constraints for defining a variable
        else std::cout << "Sorry! You are not eligible. You must be 18 years old.\n";
    }
    int getAge() // getter
    {
        return Age;
    }

    void IntroduceYourself() // class method
    {
        std::cout << "Name: " << Name << "\n";
        std::cout << "Company: " << Company << "\n";
        std::cout << "Age: " << Age << "\n";
    }
    Employee(std::string name, std::string company, int age) // Constructor - use for initialization
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion() // Pure Virtual Function from AbstractEmployee class
    {
        if(Age > 30) std::cout << Name << " got promoted!\n";
        else std::cout << Name << ", sorry NO promotion for you!\n";
    }
};

int main()
{
    Employee employee1 = Employee("Kaiser", "TigerIT", 25);
    Employee employee2 = Employee("Corey", "Google", 35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();

}