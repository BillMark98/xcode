//
//  mystudent.h
//  versuch7
//
//  Created by Bill on 17/6/25.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef my_student_h
#define my_student_h

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
    bool operator<(const Student & s) const;
    bool operator>(const Student & s) const;
    bool operator==(const Student & s) const;
    bool operator==(unsigned int n) const;
    bool operator!=(unsigned int n) const;
    std::ostream & ausgabe(std::ostream & out);
    void print();
private:
    unsigned int matNr;
    std::string name;
    std::string dateOfBirth;
    std::string address;
};

#endif /* my_student_hpp */
