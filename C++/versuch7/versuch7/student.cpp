//
//  Student.cpp
//  versuch7
//
//  Created by Bill on 17/6/25.
//  Copyright © 2017年 Bill. All rights reserved.
//


#include <iostream>
#include "mystudent.h"

Student::Student(unsigned int matNr, std::string name, std::string dateOfBirth, std::string address) :
matNr(matNr), name(name), dateOfBirth(dateOfBirth), address(address)
{ }

Student::Student() : matNr(0), name(""), dateOfBirth(""), address("")
{ }

unsigned int Student::getMatNr()
{
    return this->matNr;
}

std::string Student::getName()
{
    return this->name;
}

std::string Student::getDateOfBirth()
{
    return this->dateOfBirth;
}

std::string Student::getAddress()
{
    return this->address;
}

void Student::print()
{
    std::cout << this->getName() << ", MatNr. " << this->getMatNr() << " geb. am "
    << this->getDateOfBirth() << " wohnhaft in " << this->getAddress()
    << std::endl;
}
bool Student::operator<(const Student & s) const
{
    return matNr < s.matNr;
}
bool Student::operator>(const Student & s) const
{
    return matNr > s.matNr;
}
bool Student::operator==(const Student & s) const
{
    return matNr == s.matNr;
}
std::ostream & Student::ausgabe(std::ostream & out)
{
    out << this->getName() << ", MatNr. " << this->getMatNr() << " geb. am "
    << this->getDateOfBirth() << " wohnhaft in " << this->getAddress()
    << std::endl;
    return out;
}
bool Student::operator==(unsigned int n) const
{
    return matNr == n;
}
bool Student::operator!=(unsigned int n) const
{
    return matNr != n;
}





