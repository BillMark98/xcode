//
//  add.cpp
//  versuch_8
//
//  Created by Bill on 17/6/26.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include "add.h"
Add::Add(Expression* left, Expression* right): leftOperand(left),rightOperand(right)
{
    //std::cout<<"Add create";
}
double Add::evaluate() const
{
    return leftOperand->evaluate() + rightOperand -> evaluate();
}
void Add::print() const
{
    std::cout<< "(";
    leftOperand -> print();
    std::cout<<" + ";
    rightOperand -> print();
    std::cout<<")";
}
Add::~Add()
{
    //std::cout<<"Add destructed.\n";
    leftOperand -> ~Expression();
    rightOperand -> ~Expression();
}
