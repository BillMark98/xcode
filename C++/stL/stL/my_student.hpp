//
//  my_student.hpp
//  stL
//
//  Created by Bill on 17/6/22.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef my_student_hpp
#define my_student_hpp

#include <stdio.h>

#include <string>

class Student
{
public:
    Student();
    Student(unsigned int matNr, std::string name, std::string dateOfBirth, std::string address);
    unsigned int getMatNr();
    std::string getName();
    std::string getDateOfBirth();
    std::string getAddress();
    void print();
private:
    unsigned int matNr;
    std::string name;
    std::string dateOfBirth;
    std::string address;
};

#endif /* my_student_hpp */
