//
//  main.cpp
//  stL
//
//  Created by Bill on 17/6/20.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include <vector>
#include "my_student.hpp"
Student & create_Student(Student &);
int main(int argc, const char * argv[]) {
    using namespace std;
   /* vector<int> ivec;
    int is[4] = {1,2,3,4};
    vector<int>test(is,is+2);
    for(vector<int>::iterator it = test.begin();it!=test.end();it++)
        cout<<*it<<endl;
    cout<<endl;
    cout << test[2]<<endl;
    cout<<"\n";
    vector< vector<int> >a( 10, vector < int> ( 5));
    ivec.push_back(1);
    ivec.push_back(2);
     ivec.push_back(3);
     ivec.push_back(4);
    vector<int> b(ivec.begin(),ivec.end());
    
    for(vector<int>::iterator it = ivec.begin();it!= ivec.end();it++)
    {
        cout<<*it<<endl;
    }
    for(vector<int>::iterator it = b.begin();it!= b.end();it++)
    {
        cout<<*it<<endl;
    }
    */
    vector<Student>student_vector;
    char abfrage;
    std::cout << "Wollen sie den Stack selbst fuellen? (j)/(n) ";
    std::cin >> abfrage;
    Student student;
    if (abfrage != 'j')
    {
        student = Student(12345, "Siggi Baumeister", "23.04.1983", "Ahornst.55");
        student_vector.push_back(student);
        student = Student(23456, "Walter Rodenstock", "15.10.1963", "W¸llnerstr.9");
        student_vector.push_back(student);
        student = Student(34567, "Harro Simoneit", "19.06.1971", "Am Markt 1");
        student_vector.push_back(student);
    }
    do
    {
        std::cout << "\nMenue:" << std::endl
        << "-----------------------------" << std::endl
        << "(1): Datenelement hinzuf¸gen" << std::endl
        << "(2): Datenelement wegschmeissen" << std::endl
        << "(3): Datenbank in Reihenfolge ausgeben" << std::endl
        << "(4): Datenbank in umgekehrter Reihenfolge ausgeben" << std::endl
        << "(5): Beenden"<< std::endl;
        std::cin >> abfrage;
        
        switch (abfrage)
        {
            case '1':
            {
                
                
                student = create_Student(student);
                
                student_vector.push_back(student);
                student_vector.back().print();
                cout<<"is added to.\n";
            }
                break;
            case '2':
            {
                if(student_vector.empty())
                    cout<<"Vector ist leer!";
                else
                {
                    student_vector.back().print();
                    cout<<"\n ist geloscht.\n";
                    student_vector.pop_back();
                }
            }
                break;
                
            case '3':
                std::cout << "Inhalt der Liste:\n";
                for(vector<Student>::iterator it = student_vector.begin();it!=student_vector.end();it++)
                    it->print();
                break;
            case '4':
                std::cout << "Inhalt der Liste: \n";
                for(vector<Student>::reverse_iterator it = student_vector.rbegin();it!=student_vector.rend();it++)
                    it->print();
                break;
            case '5':
                cout<<"Beenden.\n";
                break;
            default :
                std::cout << "Falsche Eingabe, bitte nochmal";
                break;
        }
    }
    while (abfrage != '5');
    
    return 0;
}
Student & create_Student (Student & s)
{
    unsigned int matNr = 0;
    std::string name = "";
    std::string dateOfBirth = "";
    std::string address = "";
    
    std::cout << "Bitte geben sie die Daten f¸r den Studenten ein.\nName: ";
    std::cin.ignore(10, '\n');    // ignore character '\n', which still is in the buffer
    getline(std::cin, name);    // get entire line, including whitespace
    std::cout << "Geburtsdatum: ";
    getline(std::cin, dateOfBirth);
    std::cout << "Adresse: ";
    getline(std::cin, address);
    std::cout << "Matrikelnummer: ";
    std::cin >> matNr;
    
    s = Student(matNr, name, dateOfBirth, address);
    return s;
}
