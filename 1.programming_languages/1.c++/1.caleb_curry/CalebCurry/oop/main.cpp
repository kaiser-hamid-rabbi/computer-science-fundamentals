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
};

int add_user_if_not_exist(std::vector<User> &users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if(5 == 5)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main()
{
    User user;
    user.first_name = "Kaiser Hamid";
    user.last_name = "Rabbi";
    // user.status = "Gold";

    std::vector<User> users;
    // users.push_back(user);
    users.push_back(User()); // output empty string
    std::cout << "First Name: " << users[0].first_name << "\n";

    // std::cout << "First Name: " << user.first_name << "\n";
    // std::cout << "Last Name: " << user.last_name << "\n";
    // std::cout << "Status: " << user.get_status() << "\n";
}