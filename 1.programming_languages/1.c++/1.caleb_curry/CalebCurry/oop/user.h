/* 
=====================================================
Class Across Files
=====================================================
*/
#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User
{
    static int user_count; // static variable, can't assign value here, you've to assign value outside the class
    std::string first_name;
    std::string last_name;
    std::string status;

    public:
        static int get_user_count();
        User();
        ~User();
        std::string get_first_name();
        void set_first_name(std::string first_name);
        std::string get_last_name();
        void set_last_name(std::string last_name);
        std::string get_status();
        void set_status(std::string status);

        virtual void output(); // "I am a teacher"
        // void output(); // "I am a user"

        friend std::ostream& operator << (std::ostream &output, const User user);
        friend std::istream& operator >> (std::istream &input, User &user);
};

#endif