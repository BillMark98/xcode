//
//  wine.cpp
//  wine
//
//  Created by Bill on 10/31/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include "wine.hpp"
/*void Wine::GetBottles()
{
    int size = (int)Pair::first().size(); // calculating how many years entered (which is equal to
                                                // the size of the valarray
    int year;
    cout << "The size in Get function : " << size<< endl;
    int bottle;
    cout << "Enter " << Label()
    << " data for " << size << " years:"<<endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter years: ";
        cin >> year;
        cin.get();
        cout << "Enter bottles for that year: ";
        cin >> bottle;
        cin.get();
        Pair::first()[i] = year;
        Pair::second()[i] = bottle;
        
    }
}
void Wine::Show() const
{
    cout << "Wine:" << Label() <<endl;
    cout << setw(8) << " Year" << setw(10) << "Bottles"<<endl;
    int size = (int)Pair::first().size();
    cout << "The size in Show function : " << size<< endl;
    for(int i = 0; i < size; i++)
    {
        cout << setw(8) << Pair::first()[i]
        <<setw(10) << Pair::second()[i] <<endl;
    }
    
}*/

void Wine::GetBottles()
{
    int size = (int)p_pairArray.first().size(); // calculating how many years entered (which is equal to
    // the size of the valarray
    int year;
    cout << "The size in Get function : " << size<< endl;
    int bottle;
    cout << "Enter " << Label()
    << " data for " << size << " years:"<<endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter years: ";
        cin >> year;
        cin.get();
        cout << "Enter bottles for that year: ";
        cin >> bottle;
        cin.get();
        p_pairArray.first()[i] = year;   // calling the member function of the  contained object of class Pair
        p_pairArray.second()[i] = bottle;
        
    }
}
void Wine::Show() const
{
    cout << "Wine:" << Label() <<endl;
    cout << setw(8) << " Year" << setw(10) << "Bottles"<<endl;
    int size = (int)p_pairArray.first().size();
    cout << "The size in Show function : " << size<< endl;
    for(int i = 0; i < size; i++)
    {
        cout << setw(8) << p_pairArray.first()[i]
        <<setw(10) << p_pairArray.second()[i] <<endl;
    }
    
}
