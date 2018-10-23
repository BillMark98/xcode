//
//  result.h
//  versuch_8
//
//  Created by Bill on 17/6/26.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef result_h
#define result_h
#include "expression.h"
class Result :public Expression
{
private:
    Expression * result;
public:
    Result(Expression * p_result) : Expression(),result(p_result){};
    virtual double evaluate() const;
    virtual void print() const;
    ~Result();
};

#endif /* result_h */
