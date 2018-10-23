//
//  main.cpp
//  home16work
//
//  Created by Bill on 12/10/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string & st);
int main(int argc, const char * argv[]) {
    
    string input;
    cout << "Enter a word and I will test a palindrome. quit to quit\n";
    while(cin >> input && input != "quit")
    {
        if(isPalindrome(input))
        {
            cout << "It's a palindrome: " << input << endl;
                  
        }
        else{
            cout << "Sorry.  it's not \n";
        }
            cout << "Next one.\n";
    }
    return 0;
}
bool isPalindrome(const string & st)
{
    int strSize = (int) st.size();
    int len;
    string::const_iterator it;
    string::const_reverse_iterator rit;
    for(it = st.cbegin(),rit = st.crbegin(),len = 0; len <= strSize/2; it++,rit++,len++)
    {
       // cout << *it << "  " << *rit << endl;
        if(*it != *rit)
            return false;
        
    }
    return true;
}
