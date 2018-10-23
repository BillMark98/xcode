//
//  main.cpp
//  switch_test
//
//  Created by Bill on 17/6/25.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    char c;
    cout<<"Enter a character.\n";
    cin>>c;
    switch(c)
    {
            case 'a':
            break;
            case 'b':
            cout<<"Banana.\n";
            break;
        case 'c':
        {
            int q = 2;
            q++;
            cout<<"q = 3: "<< q<<endl;
        
            
            break;
        }
        case 'd':;{
            int q = 1;
            q = 4;
            cout<<"q = 4: "<<q<<endl;
        }
            break;
    }
    return 0;
}
