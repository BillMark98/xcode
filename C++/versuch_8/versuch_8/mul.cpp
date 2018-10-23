//
//  mul.cpp
//  versuch_8
//
//  Created by Bill on 17/6/27.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include "mul.h"
Mul::Mul(Expression * left, Expression * right):leftOperand(left),rightOperand(right)
{
    //std::cout <<"Mul created\n";
}
double Mul:: evaluate()const
{
    return leftOperand -> evaluate() * rightOperand -> evaluate();
}
void Mul::print() const
{
    std::cout << "(";
    leftOperand -> print();
    std::cout <<"*";
    rightOperand -> print();
    std::cout <<")";
}
Mul::~Mul()
{
   // std::cout << "Mull destructed\n";
    leftOperand -> ~Expression();
    rightOperand -> ~Expression();
}
