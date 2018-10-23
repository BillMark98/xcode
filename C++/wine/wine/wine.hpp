//
//  wine.hpp
//  wine
//
//  Created by Bill on 10/31/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#ifndef wine_hpp
#define wine_hpp

#include <iostream>
#include <string>
#include <valarray>
#include <iomanip>
using std::valarray;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;

template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    Pair(){}
    Pair(const T1 & aval, const T2 & bval): a(aval),b(bval){}
    T1 & first();
    T2 & second();
    T1 first() const {return a;}
    T2 second() const { return b;}
};
template <class T1, class T2>
T1 & Pair<T1,T2>::first()
{
    return a;
}
template <class T1, class T2>
T2 & Pair<T1,T2>::second()
{
    return b;
}

class Wine
{
private:
    typedef valarray<int> ArrayInt;
    typedef Pair<ArrayInt,ArrayInt> PairArray; // a (the first array) for years, b for bottles
    string label;
    PairArray p_pairArray;
public:
    Wine(const char * l, int y, const int yr[],const int bot[]) :
    label(l),p_pairArray(ArrayInt(yr,y),ArrayInt(bot,y))
    {
        cout << "The first constructor." << endl;
    }
    Wine(const char * l, int y) : label(l),p_pairArray(ArrayInt(y),ArrayInt(y))
    { cout << "The secondconstructor." << endl;}
    void GetBottles();
    void Show() const;
    string Label() const { return label;}
    int sum() const { return p_pairArray.second().sum();}
    
};
/*
class Wine :
private string, private Pair< valarray<int>,valarray<int> >
{
    typedef valarray<int> ArrayInt;
    typedef Pair<ArrayInt,ArrayInt> PairArray; // a (the first array) for years, b for bottles
public:
    Wine(const char * l, int y, const int yr[],const int bot[]) :
    string(l),PairArray::Pair(ArrayInt(yr,y),ArrayInt(bot,y))
    {
        cout << "The first constructor." << endl;
    }
    Wine(const char * l, int y) : string(l),PairArray::Pair(ArrayInt(y),ArrayInt(y))
    { cout << "The secondconstructor." << endl;}
    void GetBottles();
    void Show() const;
    string Label() const { return (const string &) (*this);}
    int sum() const { return Pair::second().sum(); }
    
};*/
#endif /* wine_hpp */
