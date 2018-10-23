//
//  main.cpp
//  Iterator
//
//  Created by Bill on 12/9/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <algorithm>
#include <map>
#include <set>
#include <cctype> 
using namespace std;
template <class T>
class Plus
{
public:
    T operator()(T & a1, T & a2) { return a1 + a2;}
};
void display(const string & a) { cout << a << " ";}
char toLower(char a) { return tolower(a);}
string & ToLower(string & s) { transform(s.begin(),s.end(),s.begin(),toLower); return s;}
void outint(int n) { std::cout << n << " ";}
int main(int argc, const char * argv[]) {
   
   /* int casts[10] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> array(10);
    copy(casts, casts+10, array.begin());
    ostream_iterator<int,char> out_it(cout, " ");
    cout << "Come on.\n";
    copy(array.begin(),array.end(),out_it);
    cout << endl;
    *out_it++ = 14;
    cout << "\nImplicit reverse.\n";
    copy(array.rbegin(),array.rend(),out_it);
    cout << endl;
    copy(casts,casts+2,back_insert_iterator<vector<int> >(array));
    copy(casts+2,casts+3,insert_iterator<vector<int> >(array, array.begin()+6));
    cout << "\nExplicit.\n";
    vector<int>::reverse_iterator rit;
    for(rit = array.rbegin();rit != array.rend(); rit++)
        cout << *rit << " ";
    cout << endl;
    cout << *array.rbegin() << endl;
    vector<int>::iterator it;
    for(it = array.begin();it != array.end(); it++)
        cout << *it << " ";
    cout << endl;
    cout << *array.begin() << endl;
    */
    /*list<int> one(5,2);
    int arr[5] = {1,2,30,4,5};
    int more[6] = {6,2,4,1,6,8};
    list<int> two(arr,arr+5);
    cout << "Two:\n";
    for_each(two.begin(), two.end(), outint);
    list<int> three(two);
    three.insert(three.end(), more,more+6);
    cout << "\nThree.\n";
    for_each(three.begin(), three.end(), outint);
    three.sort();
    three.unique();
    cout << "\nThree sort and unique.\n";
    for_each(three.begin(), three.end(), outint);
    three.merge(two);
    cout << "\nMerge two.\n";
    for_each(three.begin(), three.end(), outint);
    //sort(two.begin(),two.end()); not allowed
    */
    
    
    
    
    /*typedef int KeyType;
    typedef std::pair<KeyType,std::string> Pair;
    typedef std::multimap<KeyType,std::string> MapCodes;
    MapCodes codes;
    codes.insert(Pair(415,"San Francisco"));
    codes.insert(Pair(510,"Oakland"));
    codes.insert(Pair(718,"Brooklyn"));
    codes.insert(Pair(718,"Staten Islande"));
    codes.insert(Pair(415,"San Rafael"));
    codes.insert(Pair(510,"Berkeley"));
    cout << "Number of cities with area code 415: "
    << codes.count(415);
    cout<<"\nArea Code        City\n";
    MapCodes::iterator it;
    for(it = codes.begin();it != codes.end(); it++)
    {
        cout << "   " << (*it).first << "       "
        << (*it).second << endl;
    }
    cout <<"City with code 718.\n";
    pair<MapCodes::iterator, MapCodes::iterator> range
    = codes.equal_range(718);
    for(it = range.first; it != range.second; it++)
        cout << (*it).second << endl;
    
    list<int> a1 = {1,2,3,4,5};
    list<int> a2 = {3,4,5,6,7};
    transform(a1.begin(),a1.end(),a2.begin(),ostream_iterator<int,char> (cout," "),Plus<int>());*/
    
    string enterstring;
    vector<string> word;
    typedef map<string,int> MapString;
    typedef set<string> SetString;
    cout << "Please enter word, quit to quit.\n";
    while(cin >> enterstring && enterstring != "quit")
    {
        word.push_back(enterstring);
    }
    if(!word.empty())
    {
        SetString setstring;
        transform(word.begin(),word.end(),insert_iterator<set<string> >(setstring,setstring.begin()),ToLower);
        cout << "\nThe set string: \n";
        for_each(setstring.begin(),setstring.end(),display);
        MapString wordmap;
        SetString::iterator si;
        for(si = setstring.begin(); si != setstring.end(); si++)
        {
            wordmap.insert(pair<string,int>(*si,count(word.begin(),word.end(),*si)));
        }
        cout << "\nWord frequency:\n";
        
        for(si = setstring.begin(); si != setstring.end(); si++)
        {
            cout << *si << ": " << wordmap[*si] << endl;
        }
    }
    
    return 0;
}
