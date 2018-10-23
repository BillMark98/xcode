//
//  acctabc.cpp
//  abctabc
//
//  Created by Bill on 17/6/26.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include "acctabc.h"
using std::cout;
using std::ios_base;
using std::endl;
using std::string;

AcctABC::AcctABC(const std::string &s,long an , double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}
void AcctABC::Deposit(double amt)
{
    if (amt < 0)
        cout << "Negative deposit not allowed: "
        << "deposit is cancelled\n";
    else
        balance -= amt;
}
