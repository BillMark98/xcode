//
//  String.cpp
//  string
//
//  Created by Bill on 17/6/6.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include "String.h"
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
int String::num_strings = 0;
using std::strcpy;
using std::strcmp;
String::String()
{
    len = 0;
    num_strings ++;
    str = new char[1];
    str[0] = '\0';
    
}
int String::HowMany()
{
    return num_strings;
}
String::String(const char * s)
{
    len = (int)std::strlen(s);
    str = new char[len+1];
    strcpy(str,s);
    num_strings++;
    cout<<num_strings<< ": \""<< str << "\" object created\n";
}
String::String(const String & s)
{
    len = s.len;
    str = new char[len+1];
    strcpy(str,s.str);
    num_strings++;
    cout<<num_strings<< ": \""<< str << "\" object created\n";
}
String :: ~String()
{
    
    cout<<"\""<< str << "\" object deleted, ";
    --num_strings;
    cout << num_strings << " left \n";
    delete [] str;
    
}
std::ostream & operator<<(std::ostream & os, const String & s)
{
    os<<s.str;
    return os;
}
String & String::operator=(const String & s)
{
    if (this == &s)
        return *this;
    delete [] str;
    len = s.len;
    str = new char [len + 1];
    strcpy(str,s.str);
    return *this;
    
}
bool operator<(const String & a, const String & b)
{
    return std::strcmp(a.str,b.str)<0;
}
bool operator>(const String & a, const String & b)
{
    return b < a;
}
bool operator==(const String & a, const String & b)
{
    return std::strcmp(a.str,b.str) == 0;
}
char & String::operator[](int i)
{
    return str[i];
}
const char & String::operator[](int i) const
{
    return str[i];
}
String & String::operator=(const char * s)
{
    delete [] str;
    len = (int)strlen(s);
    str = new char[len+1];
    strcpy(str,s);
    return *this;
}
std::istream & operator>>(std::istream & is, String & s)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if(is)
        s = temp;
    while(is && is.get()!='\n')
        continue;
    return is;
        
}
