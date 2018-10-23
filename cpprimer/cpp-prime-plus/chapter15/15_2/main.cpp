//
//  main.c
//  ptr
//
//  Created by Bill on 11/7/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "exc_mean.h"
using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);

int main(int argc, const char * argv[]) {
    double a, b;
    cout << "Please enter two doubles for calculation.\n";
    while(cin >> a >> b)
    {
        try {
            cout << "Harmonic mean of a and b is "
            << hmean(a,b) << endl;
            cout << "The geometric mean of a and b is "
            << gmean(a,b) << endl;
        }
        catch (bad_hmean & bh)
        {
            cout << bh.what() << endl;
            cout << "Please enter another two one.\n";
            continue;
        }
        catch(bad_gmean & bg)
        {
            cout << bg.what() << endl;
            cout << "You have no chance.\n";
            exit(4);
        }
    }
    return 0;
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
    return sqrt(a*b);
}
