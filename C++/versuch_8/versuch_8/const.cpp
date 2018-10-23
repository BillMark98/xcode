//
//  const.cpp
//  versuch_8
//
//  Created by Bill on 17/6/26.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include "const.h"
using std::cout;
using std::endl;
Const::Const(double number):Expression(),num(number)
{
     //std::cout << "( Const created "<<num<< " " ;
    
}
double Const::evaluate () const
{
    return num;
}
void Const::print() const
{
    cout << num;
}
Const::~Const()
{
    //cout << "Const destructed "<<num<<" )";
}
