//
//  mul.h
//  versuch_8
//
//  Created by Bill on 17/6/27.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef mul_h
#define mul_h
#include "expression.h"
class Mul:public Expression
{
private:
    Expression * leftOperand;
    Expression * rightOperand;
public:
    Mul(Expression * left, Expression * right);
    virtual double evaluate()const;
    virtual void print() const;
    ~Mul();
};

#endif /* mul_h */
