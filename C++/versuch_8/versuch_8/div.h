//
//  div.h
//  versuch_8
//
//  Created by Bill on 17/6/27.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef div_h
#define div_h
#include "expression.h"
class Div:public Expression
{
private:
    Expression * leftOperand;
    Expression * rightOperand;
public:
    Div(Expression * left, Expression * right);
    virtual double evaluate() const;
    virtual void print() const;
    ~Div();
};

#endif /* div_h */
