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

#include <iostream>
#include <string>
#include <vector>

class User
{
    std::string status = "Gold";
    public:
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
        User() // default constructor
        {
            std::cout << "Constructor!\n";
        }
        User(std::string first_name, std::string last_name, std::string status) // constructor with parameters
        {
            this -> first_name = first_name;
            this -> last_name = last_name;
            this -> status = status;
        }
        ~User()
        {
            std::cout << "Destructor!\n";
        }
};

int main()
{
    User user1;
    std::cout << "First Name: " << user1.first_name << "\n";
    std::cout << "Last Name: " << user1.last_name << "\n";
    
    User user2("Caleb", "Curry", "Silver");
    std::cout << "First Name: " << user2.first_name << "\n";
    std::cout << "Last Name: " << user2.last_name << "\n";
    // user.status; // you will get an error because status is private member variable
    std::cout << "Status: " << user2.get_status() << "\n";
}