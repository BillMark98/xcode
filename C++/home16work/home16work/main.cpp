//
//  main.cpp
//  home16work
//
//  Created by Bill on 12/10/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isPalindrome(const string & st);
int main(int argc, const char * argv[]) {
   
   /*
    string input;
    cout << "Enter a word and I will test a palindrome. quit to quit\n";
    getline(cin,input);
    while(cin.good() && input != "quit")
    {
        if(isPalindrome(input))
        {
            cout << "It's a palindrome: " << input << endl;
                  
        }
        else{
            cout << "Sorry.  it's not \n";
        }
            cout << "Next one.\n";
        getline(cin,input);
    }*/
    
    int max = 20;
    for(int i = 2; i < max; i++)
    {
        for(int j = 2; j <= i ; j++)
        {
            if( j >= i) printf(" %d ",i);
            if( i % j == 0) break;
            
        }
    }
    
    
  /*  string test;
    test.reserve(5);
    test[1] = 'a';
    test[0] = 'e';
    cout << test << endl;*/
    return 0;
}
bool isPalindrome(const string & st)
{
    string copystring;
    copystring.reserve(st.size());
    cout << "The copystring capcity: " << copystring.capacity() << endl;
    int strSize = (int) st.size();
    int len;
    int i,j;
    for(i = 0,j = 0; i < strSize; i++)
    {
        if(isalpha(st[i]))
        {
            //copystring[j] = isupper(st[i]) ? (char)tolower(st[i]) : st[i];
            /*cout << copystring[j] << endl;
            j++;*/
            char ch = isupper(st[i]) ? (char)tolower(st[i]) : st[i];
            copystring.insert(copystring.end(),ch);
        }

    }
    cout << "\nThe copystring: " << copystring << endl;
    int copyStrSize = (int)copystring.size();
    string::const_iterator it;
    string::const_reverse_iterator rit;
    for(it = copystring.cbegin(),rit = copystring.crbegin(),len = 0; len <= copyStrSize/2;
        it++,rit++,len++)
    {
        cout << *it << "  " << *rit << endl;
        if(*it != *rit)
            return false;
        
    }
    return true;
}
