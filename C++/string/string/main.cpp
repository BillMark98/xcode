//
//  main.cpp
//  string
//
//  Created by Bill on 17/6/6.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "String.h"
void callme1(String & s);
void callme2(String s);
using std::cin;
using std::cout;
using std::endl;
const int ArSize = 10;
const int MaxLen = 81;
int main(int argc, const char * argv[]) {
    
    /*{
        cout<<"Starting an inner block.\n";
        String headline1("Celery Stalks at Midnight");
        String headline2("Lettuce Prey");
        String sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: "<< sports << endl;
        callme1(headline1);
        cout << "headline1 : "<< headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl;
        cout << "Initialize one object to another.\n";
        String sailor = sports;
        cout << " sailor: " << sailor << endl;
        cout <<"Assign one object to another: \n";
        String knot;
        knot = headline1;
        cout << " knot: " << knot << endl;
        cout << "Exiting the block.\n";
    }
    cout << "End.\n";*/
    String name;
    cout << "Hi, whats your name?\n";
    cin >> name;
    cout << name << ", please enter up to "<< ArSize
    << " short sayings <empty line to quit> :\n";
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for(i = 0;i<ArSize;i++)
    {
        cout << i+1 << ": ";
        cin.get(temp,MaxLen);
        while(cin && cin.get()!= '\n')
            continue;
        if(!cin || temp[0] == '\n')
            break;
        else
            sayings[i] = temp;
    }
    int total = i;
    if(total > 0)
    {
        cout << "Here are your entries: \n";
        for(i = 0; i < total; i++)
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        String * shortest = &sayings[0];
        String * first = &sayings[0];
        for(i = 1;i<total; i++)
        {
        
            if (sayings[i].lengther()< shortest->lengther())
                shortest = &sayings[i];
            if(sayings[i] < *first)
                first = &sayings[i];
        }
        cout << "Shortest saying: \n" << *shortest << endl;
       cout << "First alphabetically:\n" << *first << endl;
        srand((unsigned int )time(0));
        int choice = rand() % total;
        String * favorite = new String(sayings[choice]);
        cout << "My favorite saying: \n" << *favorite << endl;
        delete favorite;
        cout << "This program used " << String::HowMany()
        << " String objects.Bye.\n";
    }
    else
        cout << "No input" <<endl;
    return 0;
}
void callme1(String &s)
{
    cout<< "String passed by reference.\n";
    cout << "     \""<< s << "\"\n";
}
void callme2(String s)
{
    cout<< "String passed by value.\n";
    cout << "     \""<< s << "\"\n";
}
