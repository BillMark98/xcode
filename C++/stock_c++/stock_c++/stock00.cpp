//
//  stock00.cpp
//  stock_c++
//
//  Created by Bill on 17/5/12.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include "stock00.h"
#include <iostream>
void Stock:: acquire(const std::string & str, long n, double pr)
{
    company = str;
    if(n < 0){
        std::cout<<"Number of shares can't be negative.! "<<company<<" shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
void Stock::buy(long num,double price)
{
    if(num < 0)
    {
        std::cout << "You can't buy negative number of shares.\n"
        <<"Transaction is aborted.\n";
    }
    else
    {   shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price)
{
    using std::cout;
    if(num < 0)
    {
        cout << "NUmber of sels can't be negative."
        <<"Transaction aborted.\n";
    }
    else if(num>shares)
    {
        cout<<"You can't sell more than you own.\n";
    }
    else{
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock:: update(double price)
{
    share_val = price;
    set_tot();
}
void Stock:: show() const
{
    using std::ios_base;
    using std::cout;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed,ios_base::floatfield);
    std::streamsize prec =
    std::cout.precision(3);
    std:: cout <<"Company "<<company
    <<" Shares: "<<shares<<std::endl
    <<" Share Price: $"<<share_val;
    cout.precision(2);
    cout<<" Total worth: $"<<total_val<<'\n';
    
    cout.setf(orig,ios_base::floatfield);
    cout.precision(prec);
}

Stock:: Stock(const std::string &co,long n, double pr)
{
    company = co;
    std::cout << "Constructor "<< company<<" has been called\n";
    if(n < 0){
        std::cout<<"Number of shares can't be negative.! "<<company<<" shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
    
}
Stock::~Stock()
{
    std::cout<<"Bye "<<company<< std::endl;
}
Stock:: Stock()
{
    std::cout <<"Default constructor called.\n";
    company = "No name";
    shares = 0;
    share_val = 0.0;
}

const Stock & Stock:: topval(const Stock& s) const
{
    if(s.total_val > total_val)
        return s;
    else
        return *this;
}

