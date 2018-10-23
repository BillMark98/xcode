//
//  main.c
//  hangman
//
//  Created by Bill on 11/18/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;
const int NUM = 10;
const string wordlist[NUM] = {"apple","banac","cola","dish","extravgent",
    "fabulous","grocery","hessian","index","jacket"};

int main(int argc, const char * argv[]) {
    string target;
    char choice;
    srand(time(0));
    cout << "Would you like to play a game? <y/n>\n";
    cin >> choice;
    choice = tolower(choice);
    while(choice == 'y')
    {
        srand(time(0));
        target = wordlist[rand() % NUM];
        int length = (int)target.length();
        string attempt(length,'-');
        int guesses = 6;
        cout << "Guess my secret word, length: "
        << length << "\nyou have " << guesses << " wrong words\n";
        string badchars;
        while(guesses > 0 && attempt != target)
        {
            char word;
            cout << "Guess a letter: ";
            cin >> word;
            word = tolower(word);
            int loc;
            if(attempt.find(word)!= string::npos || badchars.find(word) != string::npos)
            {
                cout << "You already guessed that.\n";
                continue;
            }
            else if( (loc = (int)target.find(word)) != string::npos)
            {
                cout << "Good guess!\n";
                char c = target[loc];
                while(loc != string::npos)
                {
                    attempt[loc] = c;
                    loc = (int)target.find(c,loc+1);
                }
                cout << "Carry on.\n";
            }
            else
            {
                cout << "Bad\n";
                guesses --;
                cout << "\nYou have " << guesses << " times\n";
                badchars += word;
            }
            cout << "Your word: ";
             cout << attempt << endl;
            cout << "Bad guesses: " << badchars << endl;
        }
        if(guesses == 0)
        {
            cout << "Sorry you lose.\n";
            
        }
        cout << "Would you like to try one more? <y/n>\n";
        cin >> choice;
        choice = tolower(choice);
    }
    return 0;
}
