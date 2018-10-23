//
//  sub.h
//  versuch_8
//
//  Created by Bill on 17/6/27.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef sub_h
#define sub_h
#include "expression.h"
class Sub:public Expression
{
private:
    Expression * leftOperand;
    Expression * rightOperand;
public:
    Sub(Expression * left, Expression * right);
    virtual double evaluate() const;
    virtual void print() const;
    ~Sub();
};

#endif /* sub_h */
