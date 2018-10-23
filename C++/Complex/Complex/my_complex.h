//
//  my_complex.h
//  Complex
//
//  Created by Bill on 17/6/6.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef my_complex_h
#define my_complex_h
#include <iostream>
namespace Complex {
    class complex{
    private:
        double x;
        double y;
        
    public:
        complex();
        complex(double a, double b);
        ~complex();
        complex operator+(const complex & s) const;
        complex operator-(const complex & s) const;
        complex operator~() const;
        complex operator*(const complex & s) const;
        friend complex operator*(double, complex & s);
        friend std::ostream &
        operator<<(std::ostream &, const complex & s);
        friend std::istream & operator>>(std::istream & is, complex & s);
    };
}

#endif /* my_complex_h */
