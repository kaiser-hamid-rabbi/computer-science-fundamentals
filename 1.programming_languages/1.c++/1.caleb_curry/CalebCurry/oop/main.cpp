/* 
=====================================================
Intro to Object Oriented Programming (O.O.P.)
=====================================================
*/



/* 
=====================================================
Intro to Structs
=====================================================
*/



/* 
=====================================================
Creating a Struct
=====================================================
*/

// #include <iostream>
// #include <string>
// #include <vector>

// struct User
// {
//     /* data */
//     std::string first_name;
//     std::string last_name;
//     std::string get_status()
//     {
//         return status;
//     }
//     private:
//         std::string status = "Gold";
// };


// int main()
// {
//     User user;
//     user.first_name = "Kaiser Hamid";
//     user.last_name = "Rabbi";
//     // user.status = "Gold";

//     std::cout << "First Name: " << user.first_name << "\n";
//     std::cout << "Last Name: " << user.last_name << "\n";
//     std::cout << "Status: " << user.get_status() << "\n";
// }



/* 
=====================================================
 Classes and Object
=====================================================
*/



/* 
=====================================================
 Creating a Class
=====================================================
*/

// #include <iostream>
// #include <string>
// #include <vector>

// class User
// {
//     std::string status = "Gold";
//     public:
//         std::string first_name;
//         std::string last_name;
//         std::string get_status()
//         {
//             return status;
//         }
// };


// int main()
// {
//     User user;
//     user.first_name = "Kaiser Hamid";
//     user.last_name = "Rabbi";
//     // user.status = "Gold";

//     std::cout << "First Name: " << user.first_name << "\n";
//     std::cout << "Last Name: " << user.last_name << "\n";
//     std::cout << "Status: " << user.get_status() << "\n";
// }



/* 
=====================================================
Working with Objects
=====================================================
*/

// #include <iostream>
// #include <string>
// #include <vector>

// class User
// {
//     std::string status = "Gold";
//     public:
//         std::string first_name;
//         std::string last_name;
//         std::string get_status()
//         {
//             return status;
//         }
// };

// int add_user_if_not_exist(std::vector<User> &users, User user)
// {
//     for(int i = 0; i < users.size(); i++)
//     {
//         if(users[i].first_name == user.first_name && users[i].last_name == user.last_name)
//         {
//             return i;
//         }
//     }
//     users.push_back(user);
//     return users.size() - 1;
// }

// int main()
// {
//     // User user;
//     // user.first_name = "Kaiser Hamid";
//     // user.last_name = "Rabbi";
//     // // user.status = "Gold";

//     // std::vector<User> users;
//     // users.push_back(user);
//     // users.push_back(User()); // output empty string
//     // std::cout << "First Name: " << users[0].first_name << "\n";

//     // std::cout << "First Name: " << user.first_name << "\n";
//     // std::cout << "Last Name: " << user.last_name << "\n";
//     // std::cout << "Status: " << user.get_status() << "\n";



//     std:: vector<User> users;

//     User user1, user2, user3;

//     user1.first_name = "Sally";
//     user1.last_name = "Swan";

//     user2.first_name = "Jake";
//     user2.last_name = "Johnson";

//     user3.first_name = "Caleb";
//     user3.last_name = "Curry";

//     users.push_back(user1);
//     users.push_back(user2);
//     users.push_back(user3);

//     User user;
//     // user.first_name = "Jake";
//     // user.last_name = "Johnson";
//     user.first_name = "Jacob";
//     user.last_name = "Johnson";

//     std::cout << add_user_if_not_exist(users, user) << "\n";
//     std::cout << users.size() << "\n";
// }



/* 
=====================================================
Intro to Constructors
=====================================================
*/



/* 
=====================================================
Constructors and Destructors
=====================================================
*/

// #include <iostream>
// #include <string>
// #include <vector>

// class User
// {
//     std::string status = "Gold";
//     public:
//         std::string first_name;
//         std::string last_name;
//         std::string get_status()
//         {
//             return status;
//         }
//         User() // default constructor
//         {
//             std::cout << "Constructor!\n";
//         }
//         User(std::string first_name, std::string last_name, std::string status) // constructor with parameters
//         {
//             this -> first_name = first_name;
//             this -> last_name = last_name;
//             this -> status = status;
//         }
//         ~User() // destructor
//         {
//             std::cout << "Destructor!\n";
//         }
// };

// int main()
// {
//     User user1;
//     std::cout << "First Name: " << user1.first_name << "\n";
//     std::cout << "Last Name: " << user1.last_name << "\n";

//     User user2("Caleb", "Curry", "Silver");
//     std::cout << "First Name: " << user2.first_name << "\n";
//     std::cout << "Last Name: " << user2.last_name << "\n";
//     // user.status; // you will get an error because status is private member variable
//     std::cout << "Status: " << user2.get_status() << "\n";
// }



/* 
=====================================================
Encapsulation
=====================================================
*/



/* 
=====================================================
Getters and Setters
=====================================================
*/

// #include <iostream>
// #include <string>

// class User
// {
//     std::string first_name;
//     std::string last_name;
//     std::string status;

//     public:
//         std::string get_first_name() // getters
//         {
//             return first_name;
//         }
//         void set_first_name(std::string first_name) // setters
//         {
//             this -> first_name = first_name;      
//         }

//         std::string get_last_name() // getters
//         {
//             return last_name;
//         }
//         void set_last_name(std::string last_name) // setters
//         {
//             this -> last_name = last_name;      
//         }

//         std::string get_status() // getters
//         {
//             return status;
//         }
//         void set_status(std::string status) // setters
//         {
//             // you can set constraints/conditions in setter for better data manipulation
//             if(status == "Gold" || status == "Silver" || status == "Bronze")
//             {
//                 this -> status = status;
//             }
//             else
//             {
//                 this -> status = "No status!";
//             }
//         }
// };

// int main()
// {
//     User user1, user2, user3, user4;

//     user1.set_first_name("Kaiser Hamid");
//     user1.set_last_name("Rabbi");
//     user1.set_status("Gold");

//     user2.set_first_name("Caleb");
//     user2.set_last_name("Curry");
//     user2.set_status("Silver");

//     user3.set_first_name("Corey");
//     user3.set_last_name("Schefer");
//     user3.set_status("Bronze");

//     user4.set_first_name("Kirill");
//     user4.set_last_name("Eremenko");
//     user4.set_status("Premium");

//     std::cout << "First Name: " << user1.get_first_name() << "\t" << "Last Name: " << user1.get_last_name() << "\t" << "Status: " << user1.get_status() << "\n";
//     std::cout << "First Name: " << user2.get_first_name() << "\t" << "Last Name: " << user2.get_last_name() << "\t" << "Status: " << user2.get_status() << "\n";
//     std::cout << "First Name: " << user3.get_first_name() << "\t" << "Last Name: " << user3.get_last_name() << "\t" << "Status: " << user3.get_status() << "\n";
//     std::cout << "First Name: " << user4.get_first_name() << "\t" << "Last Name: " << user4.get_last_name() << "\t" << "Status: " << user4.get_status() << "\n";
// }



/* 
=====================================================
Static Data Members
=====================================================
*/

// #include <iostream>
// #include <string>

// class User
// {
//     static int user_count; // static variable, can't assign value here, you've to assign value outside the class
//     std::string first_name;
//     std::string last_name;
//     std::string status;

//     public:
//         static int get_user_count() // static function
//         {
//             return user_count;
//         }
//         User()
//         {
//             user_count++;
//         }
//         ~User()
//         {
//             user_count--;
//         }

//         std::string get_first_name() // getters
//         {
//             return first_name;
//         }
//         void set_first_name(std::string first_name) // setters
//         {
//             this -> first_name = first_name;      
//         }

//         std::string get_last_name() // getters
//         {
//             return last_name;
//         }
//         void set_last_name(std::string last_name) // setters
//         {
//             this -> last_name = last_name;      
//         }

//         std::string get_status() // getters
//         {
//             return status;
//         }
//         void set_status(std::string status) // setters
//         {
//             // you can set constraints/conditions in setter for better data manipulation
//             if(status == "Gold" || status == "Silver" || status == "Bronze")
//             {
//                 this -> status = status;
//             }
//             else
//             {
//                 this -> status = "No status!";
//             }
//         }
// };

// int User::user_count = 0;

// int main()
// {
//     User user1, user2, user3, user4;

//     user1.set_first_name("Kaiser Hamid");
//     user1.set_last_name("Rabbi");
//     user1.set_status("Gold");

//     user2.set_first_name("Caleb");
//     user2.set_last_name("Curry");
//     user2.set_status("Silver");

//     user3.set_first_name("Corey");
//     user3.set_last_name("Schefer");
//     user3.set_status("Bronze");

//     user4.set_first_name("Kirill");
//     user4.set_last_name("Eremenko");
//     user4.set_status("Premium");

//     std::cout << "First Name: " << user1.get_first_name() << "\t" << "Last Name: " << user1.get_last_name() << "\t" << "Status: " << user1.get_status() << "\n";
//     std::cout << "First Name: " << user2.get_first_name() << "\t" << "Last Name: " << user2.get_last_name() << "\t" << "Status: " << user2.get_status() << "\n";
//     std::cout << "First Name: " << user3.get_first_name() << "\t" << "Last Name: " << user3.get_last_name() << "\t" << "Status: " << user3.get_status() << "\n";
//     std::cout << "First Name: " << user4.get_first_name() << "\t" << "Last Name: " << user4.get_last_name() << "\t" << "Status: " << user4.get_status() << "\n";

//     std::cout << "Total number of users: " << User::get_user_count() << "\n";
//     user1.~User();
//     std::cout << "Total number of users: " << User::get_user_count() << "\n";
//     user2.~User();
//     std::cout << "Total number of users: " << User::get_user_count() << "\n";
//     user3.~User();
//     std::cout << "Total number of users: " << User::get_user_count() << "\n";
//     user4.~User();
//     std::cout << "Total number of users: " << User::get_user_count() << "\n";
// }



/* 
=====================================================
Intro to Operator Overloading
=====================================================
*/



/* 
=====================================================
Operator Overloading == and +
=====================================================
*/

// #include <iostream>
// #include <string>

// class Position
// {
//     public:
//         int x = 10;
//         int y = 20;
//         Position operator + (Position pos) // Operator Overloading
//         {
//             Position new_pos;
//             new_pos.x = x + pos.x;
//             new_pos.y = y + pos.y;
//             return new_pos;
//         }
//         bool operator == (Position pos)
//         {
//             if(x == pos.x && y == pos.y)
//             {
//                 return true;
//             }
//             return false;
//         }
// };

// int main()
// {
//     Position pos1, pos2;
//     Position pos3 = pos1 + pos2; // you will get an error if you don't overload the "+" operator. Because compiler don't know how to add these two objects
//     std::cout << pos3.x << "\t" << pos3.y << "\n";

//     // pos2.x = 30;
//     if(pos1 == pos2)
//     {
//         std::cout << "They are the same!\n";
//     }
// }



/* 
=====================================================
Overloading Insert and Extraction Operators - 1
=====================================================
*/

// #include <iostream>
// #include <string>

// class User
// {
//     static int user_count; // static variable, can't assign value here, you've to assign value outside the class
//     std::string first_name;
//     std::string last_name;
//     std::string status;

//     public:
//         static int get_user_count() // static function
//         {
//             return user_count;
//         }
//         User()
//         {
//             user_count++;
//         }
//         ~User()
//         {
//             user_count--;
//         }

//         std::string get_first_name() // getters
//         {
//             return first_name;
//         }
//         void set_first_name(std::string first_name) // setters
//         {
//             this -> first_name = first_name;      
//         }

//         std::string get_last_name() // getters
//         {
//             return last_name;
//         }
//         void set_last_name(std::string last_name) // setters
//         {
//             this -> last_name = last_name;      
//         }

//         std::string get_status() // getters
//         {
//             return status;
//         }
//         void set_status(std::string status) // setters
//         {
//             // you can set constraints/conditions in setter for better data manipulation
//             if(status == "Gold" || status == "Silver" || status == "Bronze")
//             {
//                 this -> status = status;
//             }
//             else
//             {
//                 this -> status = "No status!";
//             }
//         }
// };

// int User::user_count = 0;

// std::ostream& operator << (std::ostream &output, User &user)
// {
//     output << "First Name: " << user.get_first_name() << "\tLast Name: " << user.get_last_name() << "\tStatus: " << user.get_status() << "\n";
//     return output;
// }

// int main()
// {
//     User user1, user2, user3;

//     user1.set_first_name("Kaiser Hamid");
//     user1.set_last_name("Rabbi");
//     user1.set_status("Gold");
//     std::cout << user1 << "\n";

//     user2.set_first_name("Caleb");
//     user2.set_last_name("Curry");
//     user2.set_status("Silver");
//     std::cout << user2 << "\n";

//     user3.set_first_name("Corey");
//     user3.set_last_name("Schefer");
//     user3.set_status("Bronze");
//     std::cout << user3 << "\n";
// }



/* 
=====================================================
Overloading Insert and Extraction Operators - 2
=====================================================
*/

// #include <iostream>
// #include <string>

// class User
// {   
//     public:
//         std::string first_name;
//         std::string last_name;
//         std::string status;
// };

// std::ostream& operator << (std::ostream &output, const User user)
// {
//     output << "First Name: " << user.first_name << "\tLast Name: " << user.last_name << "\tStatus: " << user.status << "\n";
//     return output;
// }

// // it work for only public data members
// std::istream& operator >> (std::istream &input, User &user)
// {
//     std::cout << "Enter First Name: ";
//     input >> user.first_name;
//     std::cout << "Enter Last Name: ";
//     input >> user.last_name;
//     std::cout << "Enter Status: ";
//     input >> user.status;
//     return input;
// }

// int main()
// {
//     User user;
//     std::cout << user;
//     std::cin >> user;
//     std::cout << "After Extraction Operators overloading... \n";
//     std::cout << user;
// }



/* 
=====================================================
Friend Functions and Operator Overloading - 1
=====================================================
*/

// #include <iostream>
// #include <string>

// class User
// {
//     std::string status = "Gold";   
//     public:
//         std::string first_name;
//         std::string last_name;
//         friend void output_status(User user);
// };

// void output_status(User user)
// {
//     std::cout << user.status;
// }

// std::ostream& operator << (std::ostream &output, const User user)
// {
//     output << "First Name: " << user.first_name << "\tLast Name: " << user.last_name << "\n";
//     return output;
// }

// // This operator overloading works for only public data members
// std::istream& operator >> (std::istream &input, User &user)
// {
//     std::cout << "Enter First Name: ";
//     input >> user.first_name;
//     std::cout << "Enter Last Name: ";
//     input >> user.last_name;
//     return input;
// }

// int main()
// {
//     User user;
//     std::cout << user;
//     std::cin >> user;
//     std::cout << "After Extraction Operators overloading... \n";
//     std::cout << user;

//     // std::cout << user.status << "\n"; // you will get an error because status is private
//     output_status(user);
//     std::cout << "\n";
// }



/* 
=====================================================
Friend Functions and Operator Overloading - 2
=====================================================
*/

// #include <iostream>
// #include <string>

// class User
// {
//     std::string status = "Gold";   
//     public:
//         std::string first_name;
//         std::string last_name;
//         friend std::ostream& operator << (std::ostream &output, const User user);
//         friend std::istream& operator >> (std::istream &input, User &user);
// };

// std::ostream& operator << (std::ostream &output, const User user)
// {
//     output << "First Name: " << user.first_name << "\tLast Name: " << user.last_name << "\tStatus: " << user.status << "\n";
//     return output;
// }

// // This operator overloading works for only public data members
// std::istream& operator >> (std::istream &input, User &user)
// {
//     std::cout << "Enter First Name: ";
//     input >> user.first_name;
//     std::cout << "Enter Last Name: ";
//     input >> user.last_name;
//     std::cout << "Enter Status: ";
//     input >> user.status;
//     return input;
// }

// int main()
// {
//     User user;
//     std::cout << user;
//     std::cin >> user;
//     std::cout << "After Extraction Operators overloading... \n";
//     std::cout << user;
// }



/* 
=====================================================
Class Across Files
=====================================================
*/

#include <iostream>
#include <string>
#include "user.h"

int main()
{
    User user;
    std::cout << user;
    std::cin >> user;
    std::cout << "After Extraction Operators overloading... \n";
    std::cout << user;
}