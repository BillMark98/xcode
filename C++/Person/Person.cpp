//
//  Person.cpp
//  Person
//
//  Created by Bill on 11/2/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include "Person.hpp"

//Member function of Person
Person::~Person()
{
    
}
void Person::Show() const
{
    cout << "First name: " << fname
    << "\nLast name: " << lname << endl;
}


void Person::Set()
{
    cout << "Please enter the first name:";
    cin >> fname;
    cout << "Please enter the last name:";
    cin >> lname;
    
}


// Member function of Gunslinger
double Gunslinger::Draw() const
{
    return times;
}

void Gunslinger::Show() const
{
    cout << "Gunslinger:\n";
    Person::Show();
    Data();
    
}
void Gunslinger::Data() const
{
    cout << "Points: " << points
    << "\ndraw time: " << times << endl;
}

void Gunslinger::Set()
{
    Person::Set();
    cout << "Please enter the points:";
    cin >> points;
    cout << "Please enter the times:";
    cin >> times;
}
// Member function of PokerPlayer
int PokerPlayer::Draw() const
{
    srand((unsigned int)time(NULL));
    return rand() % 52 + 1;
}

void PokerPlayer::Show() const
{
    cout << "Poker player:\n";
    Person::Show();
}
void PokerPlayer::Data() const
{
    
}



void PokerPlayer::Set()
{
    Person::Set();
}


// Member function of BadDude

int BadDude::Cdraw() const
{
    return PokerPlayer::Draw();
    
}
double BadDude::Gdraw() const
{
    return Gunslinger::Draw();
}
void BadDude::Show() const
{
    cout << "Bad Dude: \n";
    Person::Show();
    Gunslinger::Data();
    
}

void BadDude::Set()
{
    Gunslinger::Set();
}


