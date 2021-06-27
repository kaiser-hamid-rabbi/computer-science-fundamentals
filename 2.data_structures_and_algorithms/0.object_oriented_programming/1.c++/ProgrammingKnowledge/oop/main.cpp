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
//    ~Books() // Destructor without parameter
//    {
//        std::cout << "You are in Destructor without parameter!" << "\n";
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
Operator Overloading in C++
=====================================================
*/

//#include <iostream>
//
////(4, 2) and (2, 2)
////(4 + 2, 2 + 2) =  (6, 4)
//
//class Vector
//{
//public:
//    int x, y;
//    Vector () {};
//    Vector (int a, int b)
//    {
//        x = a;
//        y = b;
//    }
//    Vector operator+(const Vector&);
//};
//
//Vector Vector::operator+(const Vector& parameter)
//{
//    Vector temp;
//    temp.x = x + parameter.x;
//    temp.y = y + parameter.y;
//    return temp;
//}
//
//int main()
//{
//    Vector vec1(4, 2);
//    Vector vec2(2, 2);
//    Vector result;
//    result = vec1 + vec2;
//    std::cout << "The result is ("<< result.x << ", " << result.y << ")" << "\n";
//}



/* 
=====================================================
C++ Inheritance
=====================================================
*/

//#include <iostream>
//#include <string>
//
//// [rectangle/ triange/ square] [is a] polygon
//// [dog/ cat/ cow] [is an] animal
//// [bugatti/ mclaren/ porsche] [is a] car
//class Polygon // [Base/Parent] Class
//{
//public:
//    void setValues(int a, int b)
//    {
//        width = a;
//        height = b;
//    }
//protected:
//    int height;
//    int width;
//};
//
//class Rectangle : public Polygon // [Derived/Child] Class
//{
//public:
//    int area()
//    {
//        return (height * width);
//    }
//};
//
//class Triangle : public Polygon // [Derived/Child] Class
//{
//public:
//    int area()
//    {
//        return (height * width / 2);
//    }
//};
//
//class Square : public Polygon // [Derived/Child] Class
//{
//public:
//    int area()
//    {
//        return (height * width);
//    }
//};
//
//int main()
//{
//    Rectangle rec;
//    Triangle tri;
//    Square sqr;
//    rec.setValues(15, 10);
//    tri.setValues(15, 10);
//    sqr.setValues(10, 10);
//    
//    std::cout << "Area of Rectangle is: " << rec.area() << "\n";
//    std::cout << "Area of Triangle is: " << tri.area() << "\n";
//    std::cout << "Area of Square is: " << sqr.area() << "\n";
//}



/* 
=====================================================
C++ Multiple Inheritance
=====================================================
*/

//#include <iostream>
//#include <string>
//
//// [rectangle/triange/square] [is a] polygon
//// [dog/cat/cow] [is an] animal
//// [bugatti/mclaren/porsche] [is a] car
//class Polygon // [Base/Parent] Class
//{
//public:
//    void setValues(int a, int b)
//    {
//        width = a;
//        height = b;
//    }
//protected:
//    int height;
//    int width;
//};
//
//class Description // Another [Base/Parent] Class
//{
//public:
//    void print_description(std::string des)
//    {
//        std::cout << "We are using " << des << " class's object\n";
//    }
//};
//
//class Rectangle : public Polygon, public Description// [Derived/Child] Class
//{
//public:
//    int area()
//    {
//        return (height * width);
//    }
//};
//
//class Triangle : public Polygon, public Description // [Derived/Child] Class
//{
//public:
//    int area()
//    {
//        return (height * width / 2);
//    }
//};
//
//class Square : public Polygon, public Description // [Derived/Child] Class
//{
//public:
//    int area()
//    {
//        return (height * width);
//    }
//};
//
//int main()
//{
//    Rectangle rec;
//    Triangle tri;
//    Square sqr;
//    rec.setValues(15, 10);
//    tri.setValues(15, 10);
//    sqr.setValues(10, 10);
//    
//    // Base: Polygon
//    std::cout << "Area of Rectangle is: " << rec.area() << "\n";
//    std::cout << "Area of Triangle is: " << tri.area() << "\n";
//    std::cout << "Area of Square is: " << sqr.area() << "\n";
//    
//    // Base: Polygon and Description
//    rec.print_description("Rectangle");
//    tri.print_description("Triangle");
//    sqr.print_description("Square");
//}



/* 
=====================================================
Friend Class in C++
=====================================================
*/

#include <iostream>
#include <string>

class MyClass
{
    friend class MyAnotherClass;
private:
    int secret = 10;
};

class MyAnotherClass
{
public:
    void showSecret(MyClass mc)
    {
        mc.secret++;
        std::cout << mc.secret << "\n";
    }
};

int main()
{
    MyClass mc;
    MyAnotherClass mac;
    mac.showSecret(mc);
}