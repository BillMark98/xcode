//
//  main.cpp
//  Student
//
//  Created by Bill on 10/21/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include "Student.h"
using namespace std;
void set(Student & sa, int n);
const int pupils = 3;
const int quizzes = 5;
int main(int argc, const char * argv[]) {
    /*Student ada[pupils] =
    {
        Student(quizzes),Student(quizzes),Student(quizzes)
    };
    int i;
    for(i = 0; i < pupils; ++i)
    {
        set(ada[i],quizzes);
    }
    cout << "\nStudent List:\n";
    for(i = 0; i < pupils; ++i)
    {
        cout << endl << ada[i];
        cout << "average: " << ada[i].Average() << endl;
    }
    cout << "Done\n";
*/
    int x = 2^2;
    cout << x <<endl;
    return 0;
}
void set(Student & sa, int n)
{
    cout << "Please enter the student name: ";
    getline(cin, sa);
    cout << "Please enter " << n << " quiz scores: \n";
    for ( int i = 0; i < n; i ++ )
        cin >> sa[i];
    while ( cin.get() != '\n')
        continue;
}
