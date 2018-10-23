//
//  expression.h
//  versuch_8
//
//  Created by Bill on 17/6/26.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef EXPRESSION_H
#define EXPRESSION_H

class Expression
{
public:
    Expression();
    virtual ~Expression();
    virtual double evaluate() const = 0; // calculates and returns the value of expression
    virtual void print() const = 0; // prints the mathematical expression as string
};

#endif
