#include "Fahrzeug.h"
#include <string>
using namespace std;

Fahrzeug::Fahrzeug()
{
    /*p_sName = "";
     p_iMaxID++;
     p_iID = p_iMaxID;
     cout << p_sName << " auto is created with ID: " << p_iID << endl;*/
    vInitialisierung();
}

Fahrzeug::Fahrzeug(string name)
{
    /*
     p_iMaxID++;
     p_iID = p_iMaxID;
     cout << p_sName << " auto is created with ID: " << p_iID << endl;*/
    vInitialisierung();
    p_sName = name;
}
Fahrzeug::Fahrzeug(string name, double MaxGeschwindigkeit)
{
    /*p_sName = name;
     p_iMaxID++;
     p_iID = p_iMaxID;
     cout << p_sName << " auto is created with ID: " << p_iID << endl;*/
    vInitialisierung();
    p_sName = name;
    p_dMaxGeschwindigkeit = MaxGeschwindigkeit;
}
Fahrzeug::Fahrzeug(const Fahrzeug & rF)
{
    p_iMaxID++;
    p_sName = rF.p_sName;
    p_iID = p_iMaxID;
    p_dGesamtStrecke = rF.p_dGesamtStrecke;
    p_dGesamtZeit = rF.p_dGesamtZeit;
    p_dZeit = rF.p_dZeit;
    p_dMaxGeschwindigkeit = rF.p_dMaxGeschwindigkeit;
    
}
Fahrzeug::~Fahrzeug()
{
    cout << p_sName << " auto is destructed with ID: " << p_iID << endl;
    p_iMaxID--;
}
void Fahrzeug::vInitialisierung(void)
{
    p_sName = "";
    p_iMaxID++;
    p_iID = p_iMaxID;
    p_dMaxGeschwindigkeit = 0;
    p_dGesamtZeit = 0;
    p_dGesamtStrecke = 0;
    p_dZeit = 0;
    cout << p_sName << " auto is created with ID: " << p_iID << endl;
}
void Fahrzeug::vAusgabe() const
{
    cout << setw(8) << resetiosflags(ios::right) << setiosflags(ios::left) << "ID"
    << setw(12) << "Name" << setw(6) << ':' << setw(12) << "MaxKmh"
    << setw(18) << "GesamtStrecke" << setw(18) << "Geschwindigkeit" << endl;
    cout << resetiosflags(ios::right);
    cout << setw(8) << setiosflags(ios::left) << p_iID
    << setw(12) << p_sName << setw(6) << ":"
    << setw(12) << setiosflags(ios::fixed) << setprecision(2) << p_dMaxGeschwindigkeit
    << setw(18) << p_dGesamtStrecke << setw(18) << dGeschwindigkeit() << endl;
    /*cout << "In the Fahrzeug: ";
     cout << dGeschwindigkeit() << endl;*/
}
int Fahrzeug::getMaxID()
{
    return p_iMaxID;
}

bool Fahrzeug::operator<(Fahrzeug & rF) const
{
    cout << "This Strecke: " << p_dGesamtStrecke << endl;
    cout << "That Strecke: " << rF.p_dGesamtStrecke << endl;
    return p_dGesamtStrecke < rF.p_dGesamtStrecke + EPSILON;
}

Fahrzeug & Fahrzeug::operator=(const Fahrzeug & rF)
{
    if (this == &rF)
        return *this;
    
    p_sName = rF.p_sName;
    p_dGesamtStrecke = rF.p_dGesamtStrecke;
    p_dGesamtZeit = rF.p_dGesamtZeit;
    p_dZeit = rF.p_dZeit;
    p_dMaxGeschwindigkeit = rF.p_dMaxGeschwindigkeit;
    
    
}

void Fahrzeug::vAbfertigung()
{
    if (fabs(p_dZeit - dGlobaleZeit) < EPSILON)
    {
        p_dGesamtZeit = 0;
    }
    else if (fabs(dGlobaleZeit - p_dZeit) >= EPSILON)
    {
        p_dGesamtZeit = dGlobaleZeit - p_dZeit;
        p_dGesamtStrecke += p_dGesamtZeit * dGeschwindigkeit();
        p_dZeit = dGlobaleZeit;
        p_dGesamtZeit = 0;
    }
    else
    {
        p_dGesamtZeit = dGlobaleZeit - p_dZeit;
    }
    //cout << p_sName << " auto ID " << p_iID << " the GesamtZeit: " << p_dGesamtZeit << endl;
}
ostream & Fahrzeug::ostreamAusgabe(ostream & os) const
{
    os << setw(3) << resetiosflags(ios::right) << setiosflags(ios::left) << "ID"
    << setw(10) << "Name" << setw(5) << ':' << setw(12) << "MaxKmh"
    << setw(15) << "GesamtStrecke" << setw(16) << "Geschwindigkeit" << endl;
    os << resetiosflags(ios::right);
    os << setw(3) << setiosflags(ios::left) << p_iID
    << setw(10) << p_sName << setw(5) << ":"
    << setw(12) << setiosflags(ios::fixed) << setprecision(2) << p_dMaxGeschwindigkeit
    << setw(15) << p_dGesamtStrecke << setw(9) << dGeschwindigkeit() << endl;
    return os;
}
