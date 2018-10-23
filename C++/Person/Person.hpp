//
//  Person.hpp
//  Person
//
//  Created by Bill on 11/2/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::string;
class Person
{
protected:
    enum{F_NAME = 10, L_NAME = 10};
    string fname;
    string lname;
public:
    Person() : fname("No"),lname("Nop") {}
    Person(const char * s1, const char * s2): fname(s1),lname(s2) {}
    virtual ~Person() = 0;
    virtual void Show() const = 0;
    virtual void Set();
};




class Gunslinger : virtual public Person
{
protected:
    int points; // the points on the shouqiang
    double times;
public:
    Gunslinger(): Person(), points(0) {}
    Gunslinger(const char * s1, const char * s2,int pt,double tim):
        Person(s1,s2),points(pt),times(tim){}
    virtual ~Gunslinger() {}
    void Show() const;
    virtual void Data() const;
    virtual void Set();
    double Draw() const;
};



class PokerPlayer: virtual public Person
{
public:
    PokerPlayer():Person(){}
    PokerPlayer(const char * s1, const char * s2) : Person(s1,s2){}
    virtual ~PokerPlayer() {};
    void Show() const;
    virtual void Data() const;
    virtual void Set();
    
    int Draw() const;
};



class BadDude: public Gunslinger, public PokerPlayer
{
    
public:
    BadDude(): Person(),Gunslinger(),PokerPlayer(){}
    BadDude(const char * s1, const char * s2,int pt,double tim) :
    Person(s1,s2),Gunslinger(s1,s2,pt,tim),PokerPlayer(s1,s2) {}
    virtual ~BadDude() {};
    double Gdraw()const;
    void Set();
    int Cdraw() const;
    void Show() const;
    
    
};

#endif /* Person_hpp */
