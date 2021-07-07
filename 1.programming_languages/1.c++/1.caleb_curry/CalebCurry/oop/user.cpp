/* 
=====================================================
Class Across Files
=====================================================
*/

#include <iostream>
#include <string>
#include "user.h"

int User::get_user_count() // static function
{
    return user_count;
}
User::User()
{
    std::cout << "User created!\n";
    User::user_count++;
}
User::~User()
{
    user_count--;
}

std::string User::get_first_name() // getters
{
    return first_name;
}
void User::set_first_name(std::string first_name) // setters
{
    this->first_name = first_name;
}

std::string User::get_last_name() // getters
{
    return last_name;
}
void User::set_last_name(std::string last_name) // setters
{
    this->last_name = last_name;
}

std::string User::get_status() // getters
{
    return status;
}
void User::set_status(std::string status) // setters
{
    // you can set constraints/conditions in setter for better data manipulation
    if (status == "Gold" || status == "Silver" || status == "Bronze")
    {
        this->status = status;
    }
    else
    {
        this->status = "No status!";
    }
}

void User::output()
{
    std::cout << "I am a user\n";
}

std::ostream &operator<<(std::ostream &output, const User user);
std::istream &operator>>(std::istream &input, User &user);

int User::user_count = 0;

std::ostream &operator<<(std::ostream &output, const User user)
{
    output << "First Name: " << user.first_name << "\tLast Name: " << user.last_name << "\tStatus: " << user.status << "\n";
    return output;
}

// This operator overloading works for only public data members
std::istream &operator>>(std::istream &input, User &user)
{
    std::cout << "Enter First Name: ";
    input >> user.first_name;
    std::cout << "Enter Last Name: ";
    input >> user.last_name;
    std::cout << "Enter Status: ";
    input >> user.status;
    return input;
}