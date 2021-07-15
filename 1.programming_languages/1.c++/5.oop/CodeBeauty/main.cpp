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
OOP Inheritance
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
//    std::string Company;
//    int Age;
//protected:
//    std::string Name;
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
//class Developer : public Employee
//{
//public:
//    std::string FavProgrammingLanguage;
//    Developer(std::string name, std::string company, int age, std::string favProgrammingLanguage) : Employee(name, company, age) // constructor with parameters and inherits Employee class's constructor
//    {
//        FavProgrammingLanguage = favProgrammingLanguage;
//    }
//    void FixBug()
//    {
//        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << ".\n";
//    }
//};
//
//class Teacher : public Employee
//{
//public:
//    std::string Subject;
//    void PrepareLesson()
//    {
//        std::cout << Name << " is preparing " << Subject << " lesson.\n";
//    }
//    Teacher(std::string name, std::string company, int age, std::string subject) : Employee(name, company, age)
//    {
//        Subject = subject;
//    }
//};
//
//int main()
//{
//    Developer dev = Developer("Kaiser", "TigerIT", 25, "C++");
//    dev.IntroduceYourself(); // from Employee
//    dev.FixBug(); // from Developer
//    dev.AskForPromotion(); // from abstract class
//
//    Teacher tea = Teacher("Corey", "Google", 35, "Math");
//    tea.IntroduceYourself(); // from Employee
//    tea.PrepareLesson(); // from Teacher
//    tea.AskForPromotion(); // from abstract class
//}



/*
=====================================================
OOP Polymorphisam
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
    std::string Company;
    int Age;
protected:
    std::string Name;
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
    virtual void Work() // Virtual Function
    {
        std::cout << Name << " is checking email, task backlog, performing tasks...\n";
    }
};

class Developer : public Employee
{
public:
    std::string FavProgrammingLanguage;
    Developer(std::string name, std::string company, int age, std::string favProgrammingLanguage) : Employee(name, company, age) // constructor with parameters and inherits Employee class's constructor
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug()
    {
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << ".\n";
    }
    void Work()
    {
        std::cout << Name << " is writing " << FavProgrammingLanguage << " code.\n";
    }
};

class Teacher : public Employee
{
public:
    std::string Subject;
    void PrepareLesson()
    {
        std::cout << Name << " is preparing " << Subject << " lesson.\n";
    }
    Teacher(std::string name, std::string company, int age, std::string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work()
    {
        std::cout << Name << " is teaching " << Subject << ".\n";
    }
};

int main()
{
    Developer dev = Developer("Kaiser", "TigerIT", 25, "C++");
    dev.IntroduceYourself(); // from Employee
    dev.FixBug(); // from Developer
    dev.AskForPromotion(); // from abstract class

    Teacher tea = Teacher("Corey", "Google", 35, "Math");
    tea.IntroduceYourself(); // from Employee
    tea.PrepareLesson(); // from Teacher
    tea.AskForPromotion(); // from abstract class

    // The most common use of Polymorphism is when a parent class reference is used to refer to a child class object.
    dev.Work();
    tea.Work();

    Employee *emp1 = &dev;
    Employee *emp2 = &tea;

    emp1 -> Work();
    emp2 -> Work();
}