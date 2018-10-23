//
//  sub.cpp
//  versuch_8
//
//  Created by Bill on 17/6/27.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include "sub.h"
Sub::Sub(Expression * left, Expression * right):leftOperand(left),rightOperand(right)
{
   // std::cout<<"Sub created.\n";
}
double Sub::evaluate() const
{
    return leftOperand -> evaluate() - rightOperand -> evaluate();
}
void Sub::print() const
{
    std::cout << "(";
    leftOperand -> print();
    std::cout <<"-";
    rightOperand -> print();
    std::cout <<")";
}
Sub::~Sub()
{
    // std::cout<<"Sub destructed.\n";
    leftOperand -> ~Expression();
    rightOperand -> ~Expression();
}
