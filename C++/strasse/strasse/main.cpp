

#include <iostream>
#include "Fahrzeug.h"
#include "PKW.h"
#include "Fahrrad.h"
#include <vector>
#define ZEITSCHRITT 0.3
void vAufgabe_1(void);
void vAufgabe_1_deb();
void vAufgabe_2();
void vAufgabe_3();
double dGlobaleZeit = 0.0;
int Fahrzeug::p_iMaxID = 0;
int main()
{
    //vAufgabe_1();
    //vAufgabe_1_deb();
    /*Fahrzeug F1("F1", 40);
     PKW PK1("PK1", 45, 50);
     Fahrrad FR1("FR1", 30);
     Fahrzeug * p_f = &F1;
     p_f->vAusgabe();
     p_f = &PK1;
     p_f->vAusgabe();
     p_f = &FR1;
     p_f->vAusgabe();*/
    vAufgabe_2();
    //vAufgabe_3();
    return 0;
    
}
void vAufgabe_1(void)
{
    Fahrzeug Auto1;
    Fahrzeug Auto2("BMW");
    Fahrzeug * p_FAuto1 = new Fahrzeug;
    Fahrzeug * p_FAuto2 = new Fahrzeug("Audi", 30.0);
    string name;
    cout << "Ein Automarke eingeben: ";
    cin >> name;
    Fahrzeug * p_FAuto3 = new Fahrzeug(name, 40.0);
    cout << setw(3) << resetiosflags(ios::right) << setiosflags(ios::left) << "ID"
    << setw(10) << "Name" << setw(5) << ':' << setw(12) << "MaxKmh"
    << setw(15) << "GesamtStrecke" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    for (int i = 0; i < 10; i++)
    {
        dGlobaleZeit += ZEITSCHRITT;
        Auto1.vAbfertigung();
        Auto2.vAbfertigung();
        p_FAuto1->vAbfertigung();
        p_FAuto2->vAbfertigung();
        p_FAuto3->vAbfertigung();
        p_FAuto1->vAbfertigung();
        p_FAuto2->vAbfertigung();
        Auto1.vAusgabe();
        cout << endl;
        Auto2.vAusgabe();
        cout << endl;
        p_FAuto1->vAusgabe();
        cout << endl;
        p_FAuto2->vAusgabe();
        cout << endl;
        p_FAuto3->vAusgabe();
        cout << endl;
        cout << endl;
    }
    delete p_FAuto3;
    delete p_FAuto2;
    delete p_FAuto1;
    
}
void vAufgabe_1_deb()
{
    Fahrzeug Auto1 = Fahrzeug("VK");
    Fahrzeug Auto2 = Fahrzeug("BMW", 40);
    Fahrzeug Auto3 = Fahrzeug("NE", 20);
    Fahrzeug Auto4 = Fahrzeug("QWE", 22);
    Fahrzeug * p_Fahrzeug[4] =
    {
        &Auto1,&Auto1,&Auto3,&Auto4
    };
    for (int i = 0; i < 4; i++)
    {
        p_Fahrzeug[i]->vAusgabe();
        cout << endl;
        
    }
    p_Fahrzeug[2] = 0;
    for (int i = 0; i < 4; i++)
    {
        p_Fahrzeug[i]->vAusgabe();
        
    }
    
}
void vAufgabe_2()
{
    /*cout << "Please enter the size of the vector: ";
     int iSize;
     cin >> iSize;
     vector<Fahrzeug *> vFahrzeug(iSize);
     for (int i = 0; i < iSize; i++)
     {
     cout << " choose one type\n"
     << "1) Fahrzeug\t" << "2) PKW \t" << "3) Fahrrad\n";
     int iChoose;
     cin >> iChoose;
     if (iChoose == 1)
     {
     cout << "Enter the name: \n";
     string sname;
     cin >> sname;
     cout << "Enter the speed: \n";
     double dGeschwindigkeit;
     cin >> dGeschwindigkeit;
     vFahrzeug[i] = new Fahrzeug(sname, dGeschwindigkeit);
     }
     else if (iChoose == 2)
     {
     cout << "Enter the name: \n";
     string sname;
     cin >> sname;
     cout << "Enter the speed: \n";
     double dGeschwindigkeit;
     cin >> dGeschwindigkeit;
     cout << "Enter the verbrauch: \n";
     double dVerbrauch;
     cin >> dVerbrauch;
     cout << "Enter the tank volume : \n";
     double dVolumen;
     cin >> dVolumen;
     vFahrzeug[i] = new PKW(sname, dGeschwindigkeit, dVerbrauch, dVolumen);
     
     }
     else if (iChoose == 3)
     {
     cout << "Enter the name: \n";
     string sname;
     cin >> sname;
     cout << "Enter the speed: \n";
     double dGeschwindigkeit;
     cin >> dGeschwindigkeit;
     vFahrzeug[i] = new Fahrrad(sname, dGeschwindigkeit);
     }
     }
     */
    int iSize = 4;
    vector<Fahrzeug *> vFahrzeug(iSize);
    vFahrzeug[0] = new PKW("Ad", 55, 50, 50);
    vFahrzeug[1] = new PKW("KD", 55, 60, 66);
    vFahrzeug[2] = new PKW("LQ", 88, 98, 45);
    vFahrzeug[3] = new PKW("QLL", 120, 120, 50);
    for (int i = 0; i < 10; i++)
    {
        cout << "---------------------------------------------------------------------------\n";
        dGlobaleZeit += ZEITSCHRITT;
        vector<Fahrzeug *>::iterator itF = vFahrzeug.begin();
        while (itF != vFahrzeug.end())
        {
            (*itF)->vAbfertigung();
            (*itF)->vAusgabe();
            cout << endl;
            itF++;
        }
        cout << "-----------------------------------------------------------------------------\n";
    }
    
    vector<Fahrzeug *>::iterator itF = vFahrzeug.begin();
    while (itF != vFahrzeug.end())
    {
        (*itF)->dTanken(100);
        itF++;
        
    }
    cout << "Nach dem Tanken.";
    for (int i = 0; i < 10; i++)
    {
        cout << "-----------------------------------------------------------------------------\n";
        dGlobaleZeit += ZEITSCHRITT;
        vector<Fahrzeug *>::iterator itF = vFahrzeug.begin();
        while (itF != vFahrzeug.end())
        {
            (*itF)->vAbfertigung();
            (*itF)->vAusgabe();
            cout << endl;
            itF++;
        }
        cout << "-----------------------------------------------------------------------------\n";
    }
    itF = vFahrzeug.begin();
    while (itF != vFahrzeug.end())
    {
        delete (*itF);
        itF++;
    }
    
}
void vAufgabe_3()
{
    //Unterpunkt 1 Testen << Überladung
    Fahrzeug F1("Ad", 45);
    PKW P1("Be", 65, 89, 40);
    Fahrrad FA1("He", 23);
    Fahrzeug F2("DE", 50);
    cout << F1 << endl
    << P1 << endl
    << FA1 << endl;
    
    
    // Unterpunkt 2 Test < Vergleich Operator
    
    vector<Fahrzeug *> vFahrzeug(4);
    vFahrzeug[0] = new Fahrzeug("IU", 45);
    vFahrzeug[1] = new PKW("OI", 65, 89, 40);
    vFahrzeug[2] = new Fahrrad("He", 23);
    vFahrzeug[3] = new Fahrzeug("DE", 50);
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "---------------------------------------------------------------------------\n";
        dGlobaleZeit += ZEITSCHRITT;
        vector<Fahrzeug *>::iterator itF = vFahrzeug.begin();
        while (itF != vFahrzeug.end())
        {
            (*itF)->vAbfertigung();
            cout << *(*itF);
            cout << endl;
            itF++;
        }
        cout << "-----------------------------------------------------------------------------\n";
    }
    cout << "Ende der Abfertigung.\n";
    if (*(vFahrzeug[0]) < *(vFahrzeug[1]))
    {
        cout << "IU fahrt weniger als OI.\n";
    }
    else
    {
        cout << "IU fahrt mehr als OI.\n";
    }
    
    //Unterpunkt 3 Copy-Konstruktur und = operator
    Fahrzeug Fnew = F1;
    cout << "The orginal F1 \n";
    cout << F1;
    cout << "\nThe copied Fnew: \n"
    << Fnew << endl;
    cout << "Now the operator = \n";
    Fnew = F2;
    cout << "The orginal F2 \n";
    cout << F2 << endl;
    cout << "The copied Fnew: \n";
    cout << Fnew << endl;
    cout << "To copy self. \n";
    Fnew = Fnew;
    cout << Fnew << endl;
    vector<Fahrzeug *>::iterator itF = vFahrzeug.begin();
    while (itF != vFahrzeug.end())
    {
        delete (*itF);
        itF++;
    }
}
