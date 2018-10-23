//
//  main.cpp
//  stock_c++
//
//  Created by Bill on 17/5/12.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include "stock00.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    /*{  Stock Bill;
        
        Bill.show();
        Bill.buy(15,18.125);
        Bill.show();
        Bill.sell(10,17);
        Bill.update(30);
        Bill.show();
        Bill.buy(300000,16.7);
        Bill.show();
        Bill.sell(200000,12);
        Bill.show();
        cout<<'\n';
        Stock Bill1 = Stock("Furry Mason",50,2.5);
        Bill1.show();
        Stock Bill2("Come on",14,2.2);
        Bill2.show();
        cout<<"Assigning one to the other.\n";
        Bill2 = Bill1;
        Bill1.show();
        Bill2.show();
        cout<<'\n';
        cout<<"Using a constructor to reset an object.\n";
        Bill1 = Stock("My dear",67,2.9);
        cout<<"Revised Bill1: \n";
        Bill1.show();
        cout<<"Done.\n";
        
        
    }
    */
    Stock stock[4]{
        Stock{"One",12,20.0},
        Stock{"Two",200,2.0},
        Stock{"Three",130,3.25},
        Stock("Four",60,6.5)
    };
    cout<<"Stock holdings: \n";
    int st;
    for(st = 0;st<4;st++)
    {
        stock[st].show();
    }
    const Stock * top = &stock[0];
    for(st = 1;st<4;st++)
    {
        top = &top->topval(stock[st]);
    }
    cout<<"Most valuable\n";
    top->show();
    return 0;
        
}
