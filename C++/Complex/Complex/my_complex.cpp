//
//  my_complex.cpp
//  Complex
//
//  Created by Bill on 17/6/6.
//  Copyright © 2017年 Bill. All rights reserved.
//


#include "my_complex.h"
namespace Complex{
    complex::complex()
    {
        x = 0.0;
        y = 0.0;
    }
    complex::complex(double a, double b)
    {
        x = a;
        y = b;
    }
    complex::~complex(){
        std::cout<<"Bye from "<< *this <<std::endl;
        
    }
    complex complex::operator+(const complex & s) const
    {
        return complex(x+s.x,y+s.y);
    }
    complex complex::operator-(const complex & s) const
    {
        return complex(x-s.x,y-s.y);
    }
    complex complex::operator~() const
    {
        return complex(x,-y);
    }
    complex complex::operator*(const complex & s) const
    {
        double x_val = x * s.x - y * s.y;
        double y_val = x * s.y + y * s.x;
        return complex(x_val,y_val);
    }
    complex operator*(double a, complex & s)
    {
        return complex(a*s.x,a*s.y);
    }

    std::ostream & operator<<(std::ostream & os, const complex & s)
    {
        os<<"("<<s.x<<","<<s.y<<"i)";
        return os;
    }
    std::istream & operator>>(std::istream & is, complex & s)
    {
        std::cout<<"real: ";
        is >> s.x;
        if(!is.good()) {
            s.x = 0;
            s.y = 0;
            return is;
        }
        std::cout<<"imaginary: ";
        is >> s.y;
        return is;
        
    }
}
