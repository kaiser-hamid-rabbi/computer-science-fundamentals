#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include "user.h"

class Student : public User
{
public:
    std::vector<std::string> subjects_learning;
    void output();
    Student();
};

#endif