//
//  main.c
//  ptr
//
//  Created by Bill on 11/7/17.
//  Copyright © 2017 Bill. All rights reserved.
//
/*
#include <iostream>
#include <exception>
#include <stdexcept>
#include <cmath>
#include "exc_mean.hpp"
using namespace std;

void myQuit();
void myUnexpected();
double Rs(double,double) throw(out_of_range,bad_exception);
double hmean(double a, double b);
double gmean(double a, double b);

int main(int argc, const char * argv[]) {
    /*cout << "Hello" << endl;
    set_terminate(myQuit);
    set_unexpected(myUnexpected);
    int x = 3;
    if(x == 4)
        throw "Bad";
    double a = 2,b = 3;
    try {
        double z = Rs(a, b);
    }
    catch(out_of_range & org)
    {
        cout << org.what() << endl;
        exit(4);
    }
    catch(bad_exception &be)
    {
        cout << "It's bad exception.\n";
        
        exit(2);
    }
    double a, b;
    cout << "Please enter two doubles for calculation.\n";
    while(cin >> a >> b)
    {
        try {
            cout << "Harmonic mean of a and b is "
            << hmean(a,b) << endl;
            cout << "The geometric mean of a and b is"
            << gmean(a,b) << endl;
        }
        catch (bad_hmean & bh)
        {
            cout << bh.what() ;
            cout << "Please enter another two one.\n";
            continue;
        }
        catch(bad_gmean & bg)
        {
            cout << bg.what();
            cout << "You have no chance.\n";
            exit(4);
        }
    }
    return 0;
}
void myQuit()
{
    cout << "Terminating due to uncaught exception.\n";
    exit(5);
}
double Rs(double a, double b) throw(out_of_range,bad_exception)
{
    if(a == 2)
        throw out_of_range("IT's out of range!");
    if(b == 3)
        throw bad_alloc();
    return a+b;
    
}
void myUnexpected()
{
    cout << "in my unexpected throw bad\n";
    throw bad_exception();
}
double hmean(double a, double b)
{
    if(a == -b)
        throw bad_hmean();
    return 2 * a * b/(a + b);
}
double gmean(double a, double b)
{
    if( a < 0 || b < 0)
        throw bad_gmean();
    return std::sqrt(a*b);
}*/


#include "exc_mean.h"
#include <cmath>

using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);

int main(int argc, const char * argv[]) {
    double a, b,z;
    cout << "Please enter two doubles for calculation.\n";
    while(cin >> a >> b)
    {
        try {
            z = hmean(a, b);
            cout << "Harmonic mean of a and b is "
            << z << endl;
            z = gmean(a,b);
            cout << "The geometric mean of a and b is "
            << z << endl;
        }
        catch(bad_mean & bm)
        {
            cout << bm.what() << endl;
            bm.report();
            cout << "Please enter another two. q to quit.\n";
        }
    }
    cout << "Bye.\n";
    return 0;
}
double hmean(double a, double b)
{
    if(a == -b)
        throw bad_hmean(a,b);
    return 2 * a * b/(a + b);
}
double gmean(double a, double b)
{
    if( a < 0 || b < 0)
        throw bad_gmean(a,b);
    return sqrt(a*b);
}
