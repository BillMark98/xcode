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
    }
    // just testing if initialize string using the following method is possible. it turns out to be NO!!!
   /*  string test;
    test.reserve(5);
    test[1] = 'a';
    test[0] = 'e';
    cout << test << endl;
    */
    return 0;
}
bool isPalindrome(const string & st)
{
    string copystring; // the copy of the orignal string
    cout << "The copystring capcity: " << copystring.capacity() << endl;
    int strSize = (int) st.size();
    int len;  // the variable for the end of the second loop should be smaller than the half of the size of the copystring
    int i;// The index for the element in string
    for(i = 0; i < strSize; i++)
    {
        if(isalpha(st[i]))
        {
            //copystring[j] = isupper(st[i]) ? (char)tolower(st[i]) : st[i];
            /*cout << copystring[j] << endl;
            j++;*/
            char ch = isupper(st[i]) ? (char)tolower(st[i]) : st[i];  // testing if the character is upper case, if yes lower it first
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
