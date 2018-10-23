//
//  String.hpp
//  string
//
//  Created by Bill on 17/6/6.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef String_hpp
#define String_hpp
#include <iostream>

class String{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
    
public:
    String();
    String(const char *);
    String(const String &);
    ~String();
    static int HowMany();
    int lengther() const { return len;};
    friend std::ostream & operator<<(std::ostream & os, const String & s);
    String & operator=(const String & s);
    String & operator=(const char * s);
    friend bool operator<(const String & a, const String & b);
    friend bool operator>(const String & a, const String & b);
    friend bool operator==(const String & a, const String & b);
     char & operator[](int i);
    const char & operator[](int i) const;
    friend std::istream & operator>>(std::istream & is, String & s);
};

#endif /* String_hpp */
