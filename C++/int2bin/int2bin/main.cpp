//
//  main.cpp
//  int2bin
//
//  Created by Bill on 2/5/18.
//  Copyright © 2018 Bill. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
void int2bin(unsigned long a);
unsigned long bin2int(const string & a);
int main(int argc, const char * argv[]) {
    

    int2bin(64);
    cout << endl;
    cout << '1'+0 << endl;
    cout << bin2int("10000110011000") << endl;
    return 0;
}
void int2bin(unsigned long a)
{
    /*
    long c;
    if(a <= 1)
        return (int)a;
    else
    {
        c = a % 2;
    }
    long b = a/2;
    int p = int2bin(str, b);
    cout << c;
     */
    int r = (int) a % 2;
    if( a >= 2)
        int2bin(a/2);
    putchar('0'+r);
    
}
unsigned long bin2int(const string & a)
{
    unsigned long numb = 0;
    string temp = a;
    while(temp.size() > 1)
    {
        int c = temp.front() - '0';
        numb += c;
        numb *= 2;
        temp.erase(temp.begin(),temp.begin()+1);
    }
    numb += temp.front()-'0';
    return numb;
}
