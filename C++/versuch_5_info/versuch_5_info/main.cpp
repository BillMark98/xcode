/** @mainpage
 *
 * Praktikum Informatik 1@n
 * Versuch 5: Dynamische Datenstrukturen
 *
 * *Die erklaerenden Texte wurden zum Teil von* wikipedia.org *uebernommen*@n
 * *Siehe hierzu die entsprechende* [Webseite][wikipedia].
 *
 * [wikipedia]: https://en.wikipedia.org/wiki/Stack_(abstract_data_type)
 */

/**
 * @file main.cpp
 *
 * content: main routine
 */

#include <iostream>
#include <string>
#include "Stack.h"
#include "Student.h"
#include "List.h"
void del_student_matr(List & list);
void add_student_list(List & list);
int main()
{
    List testList;
    Student student = Student();
    
    char abfrage;
    std::cout << "Wollen sie den Stack selbst fuellen? (j)/(n) ";
    std::cin >> abfrage;
    
    if (abfrage != 'j')
    {
        student = Student(12345, "Siggi Baumeister", "23.04.1983", "Ahornst.55");
        testList.enqueue_head(student);
        student = Student(23456, "Walter Rodenstock", "15.10.1963", "W¸llnerstr.9");
        testList.enqueue_head(student);
        student = Student(34567, "Harro Simoneit", "19.06.1971", "Am Markt 1");
        testList.enqueue_head(student);
    }
    
    do
    {
        std::cout << "\nMenue:" << std::endl
        << "-----------------------------" << std::endl
        << "(1): Datenelement hinzuf¸gen" << std::endl
        << "(2): Datenelement abh‰ngen" << std::endl
        << "(3): Datenbank in Reihenfolge ausgeben" << std::endl
        << "(4): Datenbank in umgekehrter Reihenfolge ausgeben" << std::endl
        << "(5): Datenelement gemäß Matrikel Nummer löschen" << std::endl
        << "(6): Datenelement hinten erganzen" <<std::endl
        << "(7): Beenden" << std::endl;
        std::cin >> abfrage;
        
        switch (abfrage)
        {
            case '1':
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
                
                student = Student(matNr, name, dateOfBirth, address);
                
                testList.enqueue_head(student);
            }
                break;
            case '2':
            {
                Student delElem = Student();
                bool success = false;
                success = testList.dequeue(delElem);
                
                if(success)
                {
                    std::cout << "Das letzte Datenelemt wird entfernt\n";
                    delElem.print();
                }
                else
                {
                    std::cout << "Die Liste ist leer!\n";
                }
            }
                break;
                
            case '3':
                std::cout << "Inhalt der Liste:\n";
                testList.print_forwards();
                break;
            case '4':
                std::cout << "Inhalt der Liste: \n";
                testList.print_backwards();
                break;
            case '5':
                del_student_matr(testList);
                break;
            case '6':
                add_student_list(testList);
                break;
            case '7':
                std::cout << "Das Programm wird nun beendet";
                break;
                
            default :
                std::cout << "Falsche Eingabe, bitte nochmal";
                break;
        }
    }
    while (abfrage != '7');
    
    return 0;
}
void del_student_matr(List & list)
{
    unsigned int number;
    std::cout << "Please enter the matrikel number of the student "
    << "you want to delete."<<std::endl;
    std::cin >> number;
    list.del_matnr(number);
}
void add_student_list(List & list)
{
    unsigned int number;
    std::cout << "Please enter the matrikel number of the student "
    << "whom you want to add after ."<<std::endl;
    std::cin >> number;
    if(list.add_data_matr(number))
        std::cout << "Add succeeded."<< std::endl;
    
}
