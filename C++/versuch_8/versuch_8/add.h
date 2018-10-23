//
//  add.h
//  versuch_8
//
//  Created by Bill on 17/6/26.
//  Copyright © 2017年 Bill. All rights reserved.
//


#ifndef add_h
#define add_h
#include <iostream>
#include "expression.h"
class Add :public Expression
{
private:
    Expression * leftOperand;
    Expression * rightOperand;
public:
    Add(Expression * left, Expression * right);
    virtual double evaluate() const;
    virtual void print()const;
    ~Add();
};
#endif /* add_h */
