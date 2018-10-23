//
//  main.cpp
//  chapter15
//
//  Created by Bill on 11/4/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cfloat> // for DBL_MAX
#include "exc_mean.h"
#include <cmath>
#include <new>
using namespace std;

double gmean(double a, double b);
double hmean(double a, double b);
bool hmean2(double a , double b, double * ans);
double hmean3(double a, double b);


struct Big
{
    double stuff[200000];
};
int main(int argc, const char * argv[]) {
    double x,y,z;
    cout << "Enter two numbers: ";
    Big * pb;
    /*try {
        cout << "Trying to get a big block of memory.\n";
        pb = new Big[100000000000];
        cout << "Got past the new request.\n";
    } catch (std::bad_alloc & ba) {
        cout << "Caught the exception.\n";
        cout << ba.what() << endl;
        exit(EXIT_FAILURE);
    }*/
    pb = new (nothrow) Big[100000000000];
    if(pb == 0)
    {
        cout << "could not allocate memory.\n";
        exit(EXIT_FAILURE);
    }
    cout << "Meomory successfully allocated.\n";
    delete []pb;
    /*while(cin >> x >> y)
    {
        z = hmean(x,y);
        cout << "Harmonic mean of " << x << " and " << y
        << " is " << z << endl;
        cout << "Enter next set of numbers <q to quit>: ";
    }*/
    /*while(cin >> x >> y)
    {
        if(hmean2(x,y,&z))
        {
            cout << "Harmonic mean of " << x << " and " << y
            << " is " << z << endl;
            
        }
        else
        {
            cout << "One value should not be the negative of the other - try again.\n";
            
        }
        cout << "Enter next set of numbers <q to quit>: ";
    }*/
   /* while(cin >> x >> y)
    {
        try {
            z = hmean3(x,y);
        } catch (const char * s) {
            cout << s << "\n";
            cout << "Enter a new pair of numbers.\n";
            continue;
        }
        cout << "Harmonic mean of " << x << " and " << y
        << " is " << z << endl;
        cout << "Enter next set of numbers <q to quit>: ";
    }*/
    /*while(cin >> x >> y)
    {
        try {
            z = hmean(x,y);
            cout << "Harmonic mean of " << x << " and " << y
             << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
            << " is " << gmean(x, y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }
        catch (bad_hmean & hg)
        {
            hg.mesg();
            cout << "Enter a new pair of numbers.\n";
            continue;
        }
        catch (bad_gmean & bg)
        {
            cout << bg.mesg();
            cout << "You have no chance.\n";
            break;
        }
        
    }
    cout << "Bye.\n";
     */
    return 0;
}
double hmean(double a, double b)
{
    if ( a == -b)
    {
        //cout << "untenable arguments to hmean().\n";
        //std::abort();
        throw bad_hmean(a,b);
    }
    return 2 * a * b/(a + b);
}
double gmean(double a, double b)
{
    if(a < 0 || b < 0)
    {
        throw bad_gmean(a,b);
    }
    return std::sqrt(a*b);
}
bool hmean2(double a, double b, double * ans)
{
    if( a == -b)
    {
        *ans = DBL_MAX;
        return false;
    }
    else
    {
        *ans = 2 * a * b/(a + b);
        return true;
    }
}
double hmean3(double a, double b)
{
    if(a == -b)
    {
        throw "bad hmean() arguments a = -b not allowed";
    }
    return 2.0 * a * b / (a + b);
}
