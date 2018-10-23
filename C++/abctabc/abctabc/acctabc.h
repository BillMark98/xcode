//
//  acctabc.h
//  abctabc
//
//  Created by Bill on 17/6/26.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef acctabc_h
#define acctabc_h
#include <string>
#include <iostream>
class AcctABC
{
private:
    std::string fullName;
    long acctNum;
    double balance;
protected:
    struct Formatting
    {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string & Fullname() const {return fullName;}
    long AcctNum() const {return acctNum; }
    Formatting & SetFormat() const;
    void Restore(Formatting & f) const;
public:
    AcctABC(const std::string &s = "Nullbody",long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt) = 0;
    double Balance() const {return balance;}
    virtual void ViewAcct() const = 0;
    virtual ~AcctABC(){};
    
};

class Brass :public AcctABC
{
public:
    Brass(const std::string &s = "Nullbody",long an = -1,
          double bal = 0.0) : AcctABC(s,an,bal) { }
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    virtual ~Brass();
};
class BrassPlus :public AcctABC
{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string &s = "Nullbody",long an = -1,
              double bal = 0.0,double ml = 500,
              double r = 0.0);
    BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
    virtual void ViewAcct() const;
    virtual void Withdraw() const;
};
#endif /* acctabc_h */
