//
//  main.cpp
//  analysis
//
//  Created by Bill on 10/28/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include <string>
#include "ArrayTP.h"
using namespace std;
template <typename T>
void Swap(T &a, T &b);

template <typename T>
T Add(T a, T b);

template <>
int Add<int>(int a, int b);
template <class Type> void recycle (Type t);
template <class Type> void recycle (Type * t);

struct blot {int a; char b[10];};
template <class T1,class T2,class T3> class Trio{};
template <class T1,class T2> class Trio<T1,T2,T2>{};
template <class T1> class Trio<T1,T1*,T1*>{};

int sheets(int );
int main(int argc, const char * argv[]) {

    //cout << sheets(10) <<endl;
   /* string name;
    getline(cin,name);
    cout << name <<endl;*/
    int x = 2;
    int y = 4;
    Swap(x,y);
    cout << x << ' ' << y <<endl;
    double z = 4.4;
    cout << Add<double>(x,z) <<endl;
    cout << Add(x,y) << endl;
    blot ink = {2,"Spots"};
    recycle(&ink);
    Trio<char,char*,char*> t3;
    Trio<int , short,short> t2;
    
    /*ArrayTP<int ,10> sums;
    ArrayTP<double ,10>aves;
    ArrayTP< ArrayTP<int, 5>, 10> twodee;
    for(int i = 0; i < 10; i++)
    {
        sums[i] = 0;
        for(int j = 0; j < 5; j++)
        {
            twodee[i][j] = (i + 1) * (j+1);
            sums[i] += twodee[i][j];
        }
        aves[i] = (double) sums[i] / 10;
    }
    for(int i = 0; i < 10; i++)
    {
        for( int j = 0; j < 5; j++)
        {
            cout.width(2);
            cout << twodee[i][j] << ' ';
        }
        cout << ": sum = ";
        cout.width(3);
        cout << sums[i] << ", average = " << aves[i] << endl;
    }
    */
    
    return 0;
}
int sheets(int n)
{
    int times = 0;
    int i,j,k;
    for(i = 1;i <= n; i++)
    {
        for(j = 1; j<= n; j++)
        {
            for(k = 1; k<=n; k++)
            {
                if(i+j+k == n)
                {
                    times++;
                }
            }
        }
    }
    return times;
}
template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    
}
template <typename T>
T Add(T a, T b)
{
    return a + b;
}
template <> int Add<int>(int a, int b)
{
    cout << "The explicit specialization for int Add.\n";
    return a+b;
}
template <class Type> void recycle (Type t)
{
    cout << "This is the Type t function\n";
}
template <class Type> void recycle (Type * t)
{
    cout << "This is the Type * the pointer!!!!\n";

}
