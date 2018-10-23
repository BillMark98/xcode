//
//  String.hpp
//  String2
//
//  Created by Bill on 10/20/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#ifndef String_hpp
#define String_hpp

#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
class String
{
private:
    char * str;
    int len;
public:
    String();
    String(const char *);
    String(const String&);
    ~String();
    String & operator=(const String &);
    String & operator=(const char * );
    String operator+(const String &);
    String & Stringlow();
    String & Stringhigh();
    bool operator==(const String &) const;
    int has(char ch)const;
    friend String operator+(const char *, const String &);
    friend ostream & operator<<(ostream & os, const String & Sta);
    friend istream & operator>>(istream & is, String & Sta);
};
#endif /* String_hpp */
