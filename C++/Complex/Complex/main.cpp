//
//  main.c
//  Complex
//
//  Created by Bill on 17/6/6.
//  Copyright © 2017年 Bill. All rights reserved.
//


#include "my_complex.h"

int main(int argc, const char * argv[]) {
    using namespace std;
    using namespace Complex;
    complex a(3.0,4.0);
    complex c;
    cout<<"Enter a complex number (q to quit) : \n";
    while(cin>>c)
    {
        cout << "c is "<< c << " \n";
        cout << "complex conjugate is "<< ~c << '\n';
        cout << " a is " << a << '\n';
        cout <<"a + c is " << a + c << endl;
        cout << "a - c is " << a - c << endl;
        cout << " a * c is " << a * c << endl;
        cout << " 2 * c is " << 2 * c << endl;
        cout <<"C comes again: "<< c <<endl;
        cout << " Enter a complex number ( q to quit) : \n";
        
    }
    
   // cout << "Done.\n";
    return 0;
}
