//
//  main.cpp
//  String2
//
//  Created by Bill on 10/20/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include "String.h"
int main(int argc, const char * argv[]) {
    String s1(" and I am a C++ student.");
    String s2 = "Please enter your name: ";
    String s3;
    cout << s2;
    cin >> s3;
    cout << s3 << endl;
    s2 = "My name is" + s3;
    cout << s2 << ".\n";
    s2 = s2 + s1;
    cout <<"The added: "<< s2 <<endl;
    s2.Stringhigh();
    cout << "The string\n" << s2 << "\ncontains " << s2.has('A')
         << " 'A' characters in it.\n";
    s1 = "red";
    String rgb[3] = { String(s1),String("green"),String("blue") };
    cout << "Enter the name of a primary color for mixing light: ";
    String ans;
    bool success = false;
    while( cin >> ans)
    {
        ans.Stringlow();
        for (int i = 0; i < 3; i++)
        {
            if (ans == rgb[i])
            {
                cout << "That's right\n";
                success = true;
                break;
            }
            
        }
        if (success)
            break;
        else
            cout << "Try again\n";

    }
    cout << "Bye\n";
    return 0;
    
    return 0;
}
