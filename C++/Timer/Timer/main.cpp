//
//  main.cpp
//  Timer
//
//  Created by Bill on 17/5/22.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include <iostream>
#include "mytime.h"
#include <string>
int main(int argc, const char * argv[]) {
    using namespace std;
    /*Time wed(4,35);
    Time waxing = Time(2,47);
    Time total;
    Time mult;
    wed.Show();
    waxing.Show();
    total = wed + waxing;
    total.Show();
    double m = 2;
    mult = wed * 2;
    mult.Show();
    cout<<wed;
    mult = -wed;
    cout<<"\nMinus one:\n"<<mult;
    Time newer = 1;
    int q = int(newer);
    cout<<"the type cast: "<<q<<endl;
    newer.Show();
    
    */
    
    struct me{
        int age;
        string name;
        
    } ME;
    cout<<sizeof(ME)<<endl;
    ME.age = 12;
    ME.name = "Bill";
    cout<<sizeof(ME)<<endl;
    cout<<"Capacity "<< ME.name.capacity()<<endl;
    ME.name += "MATUREHUCOMDEUPRINCETON";
    cout<<"Capacity2 "<< ME.name.capacity()<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(ME.name)<<endl;
    string name;
    name.reserve(30);
    name = "ah";
    cout<<"name size "<<name.size()<<endl;
    cout<<"name capacity "<<name.capacity()<<endl;
    cout<<name[3]<<endl;
    cout<<sizeof(name)<<endl;
    cout<<name.length()<<endl;
    
    string word;
    word.reserve();
    cout<<"Word capacity "<<word.capacity()<<endl;
    
    //cout << R"+*("(Who wouldn't ?)",she whispered.)+*"<<endl;
                   
    return 0;
    
}
