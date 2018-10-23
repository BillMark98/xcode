//
//  const.h
//  versuch_8
//
//  Created by Bill on 17/6/26.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef const_h
#define const_h
#include "expression.h"
#include <iostream>
class Const :public Expression
{
private:
    double num;
public:
    Const(double number);
    virtual double evaluate () const;
    virtual void print() const;
    ~Const();
    
};

#endif /* const_h */
