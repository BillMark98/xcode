//
//  result.cpp
//  versuch_8
//
//  Created by Bill on 17/6/26.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include "result.h"
double Result::evaluate() const
{
    return result -> evaluate();
}
void Result::print() const
{
    result -> print();
}
Result::~Result()
{
    //std::cout<<"Result deleted\n";
    result -> ~Expression();
}
