//
//  stock00.h
//  stock_c++
//
//  Created by Bill on 17/5/12.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef STOCK00_H
#define STOCK00_H

#include <string>
class Stock
{
    private :
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot(){total_val = shares * share_val;};
    public :
        void acquire(const std::string & str, long n, double pr);
        Stock();
        Stock(const std::string &co, long n = 0, double pr = 0.0);
        ~Stock();
        void buy(long num,double price);
        void sell(long num, double preice);
        void update(double price);
        void show() const;
        const Stock & topval(const Stock&)const;
    
};





#endif/* stock00_h */
