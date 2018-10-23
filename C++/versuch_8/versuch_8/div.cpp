//
//  div.cpp
//  versuch_8
//
//  Created by Bill on 17/6/27.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include "div.h"
Div::Div(Expression * left, Expression * right):leftOperand(left),rightOperand(right)
{
   // std::cout << "Div created.\n";
}
double Div::evaluate() const
{
    return leftOperand -> evaluate() / rightOperand -> evaluate();
}
void Div::print() const
{
    std::cout << "(";
    leftOperand -> print();
    std::cout <<"/";
    rightOperand -> print();
    std::cout <<")";

}
Div::~Div()
{
    //std::cout << "Div destructed.\n";
    leftOperand -> ~Expression();
    rightOperand -> ~Expression();
}
