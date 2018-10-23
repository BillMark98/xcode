//
//  main.cpp
//  versuch7
//
//  Created by Bill on 17/6/25.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include <vector>
#include "mystudent.h"
#include <algorithm>
#include <cmath>
Student & create_Student(Student &);
std::ostream & operator<< (std::ostream & out, Student & s)
{
    return s.ausgabe(out);
}
void Student_print(std::vector<Student> & s)
{
    for(std::vector<Student>::iterator it = s.begin();it!=s.end();it++)
        std::cout << *it;
}
bool comp_student(const Student & s1, const Student &s2)
{
    return s1 < s2;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    vector<Student>student_vector;
    vector<Student*> * ptr = new vector<Student*>;
    if(ptr ->empty())
        cout << "Yes its a null\n";
    else
        cout <<"It's something else\n";
    cout << pow(2,3)<<endl;
    /*char abfrage;
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
        << "(5): Datenbank sortieren."<<std::endl
        << "(6): Datenelement nach Matrikel Nummer finden und loschen" << std::endl
        << "(7): Beenden"<< std::endl;
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
                std::cout << "Sortieren der Liste.\n";
                stable_sort(student_vector.begin(), student_vector.end(), comp_student);
                for(vector<Student>::iterator it = student_vector.begin();it!=student_vector.end();it++)
                    cout << *it;
                break;
            case '6':
            {
                std::cout << "Bitte geben Sie die Nummer.\n";
                unsigned int matr;
                cin >> matr;
                vector<Student>::iterator it = find(student_vector.begin(), student_vector.end(), matr);
                if(it!=student_vector.end())
                {
                    cout<< "Student found\n";
                    cout<< *it <<endl;
                    student_vector.erase(it);
                    Student_print(student_vector);
                }
            }
                break;
            case '7':
                cout<<"Beenden.\n";
                break;
            default :
                std::cout << "Falsche Eingabe, bitte nochmal";
                break;
        }
    }
    while (abfrage != '7');
    */
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
