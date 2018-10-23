//
//  main.cpp
//  Person
//
//  Created by Bill on 11/2/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
#include <cstring>
const int SIZE = 5;
int main(int argc, const char * argv[]) {
    Person * lolas[SIZE];
    int ct;
    for(ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the person category.\n"
         << "g: Gunslinger  "
         << "p: PokerPlayer b: BadDude q: quit\n";
        cin >> choice;
        while(strchr("gpbq",choice) == NULL)
        {
            cout << "Please enter an charactr g,p,b,q\n";
            cin >> choice;
        }
        if(choice == 'q')
            break;
        switch(choice)
        {
            case 'g': lolas[ct] = new Gunslinger;
                    break;
            case 'p': lolas[ct] = new PokerPlayer;
                break;
            case 'b': lolas[ct] = new BadDude;
                break;
                
                
        }
        cin.get();
        lolas[ct] -> Set();
        
    }
    cout << "\n here is your person.\n";
    int i;
    for(i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i] -> Show();
    }
    for(i = 0; i < ct; i++)
        delete lolas[i];
    cout << "Bye\n";
    return 0;
}
