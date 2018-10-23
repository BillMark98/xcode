//
//  String.cpp
//  String2
//
//  Created by Bill on 10/20/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include "String.h"

String::String()
{
    str = new char[1];
    str[0] = '\0';
    len = 0;
}
String::String(const char * ptr)
{
    len = (int)std::strlen(ptr);
    str = new char[len+1];
    strcpy(str,ptr);
    
}
String::String(const String& Sta)
{
    len = Sta.len;
    str = new char[len+1];
    strcpy(str,Sta.str);
}
String::~String()
{
    delete [] str;
}
String & String::operator=(const String & Sta)
{
    if(this == &Sta)
    {
        return * this;
    }
    len = Sta.len;
    delete [] str;
    str = new char[len+1];
    
    strcpy(str,Sta.str);
    return * this;
}
String & String::operator=(const char * ptr)
{
    delete [] str;
    len = (int)strlen(ptr);
    str = new char[len+1];
    strcpy(str,ptr);
    return * this;
}
String String::operator+(const String & Sta)
{
    char * ptr = new char[len + Sta.len + 1];
    strcpy(ptr,str);
    strcpy(ptr + len, Sta.str);
    String temp(ptr);
    delete [] ptr;
    return temp;
    
}
String & String::Stringlow()
{
    char * temp = str;
    while(*temp)
    {
        *temp = tolower(*temp);
        temp++;
    }
    return * this;
}
String & String::Stringhigh()
{
    char * temp = str;
    while(*temp)
    {
        *temp = toupper(*temp);
        temp++ ;
    }
    return * this;
}
bool String::operator==(const String & Sta) const
{
    bool equal = strcmp(str, Sta.str);
    return equal == 0;
}
int String::has(char ch) const
{
    int count = 0;
    char * temp = str;
    while(*temp)
    {
        if(*temp == ch)
        {
            count++;
        }
        temp++;
    }
    return count;
}
String operator+(const char * st, const String & Sta)
{
    
    int length = int(strlen(st) + Sta.len + 1);
    char * ptr = new char[length+2];
    strcpy(ptr,st);
    strcpy(ptr + int(strlen(st))+1, Sta.str);
    ptr[strlen(st)] = ' ';
    String temp(ptr);
    //cout << "In the operator function before. temp: " << temp << endl;
    delete [] ptr;
    //cout << "In the operator function after. temp: " << temp << endl;
    return temp;
    
}
ostream & operator<<(ostream & os, const String & Sta)
{
    os << Sta.str;
    return os;
}
istream & operator>>(istream & is, String & Sta)
{
    delete [] Sta.str;
    char st[40];
    is.getline(st,40);
    Sta.len = (int)strlen(st);
    Sta.str = new char[Sta.len + 1];
    strcpy(Sta.str,st);
    return is;
    
}



