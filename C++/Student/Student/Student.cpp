//
//  Student.cpp
//  Student
//
//  Created by Bill on 10/21/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include "Student.h"
double Student::Average() const
{
    double average;
    if(scores.size() > 0)
        average = scores.sum()/scores.size();
    else
        average = 0;
    return average;
    
}
const std::string & Student::Name() const
{
    return name;
}
double & Student::operator[](int i)
{
    return scores[i];
}
double Student::operator[](int i) const
{
    return scores[i];
}

std::istream & operator>>(std::istream & is,
                                 Student & stu)
{
    is >> stu.name;
    return is;
}
std::istream & getline(std::istream & is,
                              Student & stu)
{
    getline(is,stu.name);
    return is;
    
}
std::ostream & operator<<(std::ostream & os,
                                 const Student &  stu)
{
    os << "Scores for " << stu.name << ":\n";
    stu.arr_out(os);
    return os;
}
std::ostream & Student::arr_out(std::ostream & os) const
{
    int i;
    int lim = (int) scores.size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << scores[i] << " ";
            if(i % 5 == 4)
                os << std::endl;
        }
        if(i % 5 != 0)
            os << std::endl;
    }
    else
    {
        os << "empty array.\n";
    }
    return os;
}
