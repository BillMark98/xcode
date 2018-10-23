#include "PKW.h"



PKW::PKW() :Fahrzeug()
{
    p_dVerbrauch = 0;
    p_dTankinhalt = 0;
    p_dTankvolumen = 0;
}
PKW::PKW(string name, double MaxGeschwindigkeit, double verbrauch, double tankvolumen) :
Fahrzeug(name, MaxGeschwindigkeit), p_dVerbrauch(verbrauch), p_dTankvolumen(tankvolumen)
{
    
    p_dTankinhalt = p_dTankvolumen/2;
}

PKW::PKW(double verbrauch, string name, double tankvolumen) :
Fahrzeug(name), p_dVerbrauch(verbrauch), p_dTankvolumen(tankvolumen)
{
    p_dTankinhalt = p_dTankvolumen/2;
}

PKW::~PKW()
{
}
double PKW::dVerbrauch() const
{
    return p_dVerbrauch * p_dGesamtStrecke / 100;
}
double PKW::dTanken(double dMenge)
{
    double dTankte;
    double dVorher = p_dTankinhalt;
    if (dMenge == VOLL)
    {
        p_dTankinhalt = p_dTankvolumen;
    }
    else
    {
        dTankte = dMenge;
        
        p_dTankinhalt = p_dTankinhalt + dMenge;
        if (fabs(p_dTankinhalt - p_dTankvolumen) <= EPSILON)
        {
            p_dTankinhalt = p_dTankvolumen;
        }
    }
    if (p_dTankinhalt > p_dTankvolumen)
    {
        p_dTankinhalt = p_dTankvolumen;
    }
    dTankte = p_dTankvolumen - p_dTankinhalt;
    return dTankte;
}
void PKW::vAbfertigung()
{
    if (p_dTankinhalt > 0)  // PKW fährt weiter
    {
        double dStreckeJetzt = p_dGesamtStrecke;
        Fahrzeug::vAbfertigung();
        double dStreckeGefahren = p_dGesamtStrecke - dStreckeJetzt;
        double dVerbrauch = dStreckeGefahren * p_dVerbrauch / 100; // Verbrauch ist Liter/100km ,deshalb soll hier durch 100
        if (fabs(dVerbrauch - p_dTankinhalt) <= EPSILON)
        {
            p_dTankinhalt = 0;
        }
        else
        {
            p_dTankinhalt -= dVerbrauch;
        }
        if (p_dTankinhalt < 0)
        {
            p_dTankinhalt = 0;
        }
    }
    else if (fabs(dGlobaleZeit - p_dZeit) >=  EPSILON)  // muss man trotzdem die Zeit neu updaten, ohne dass PKW fährt.
    {
        p_dGesamtZeit = dGlobaleZeit - p_dZeit;
        p_dZeit = dGlobaleZeit;
        p_dGesamtZeit = 0;
    }
    else
    {
        p_dGesamtZeit = dGlobaleZeit - p_dZeit; // Nur die Zeit, zu der letzten Abfertigung wird neu intialisiert.
    }
}
void PKW::vAusgabe() const
{
    cout << "PKW\n";
    Fahrzeug::vAusgabe();
    cout << setw(38) << "Verbrauch" << setw(18) << "Tankinhalt"
    << setw(20) << "MaxGeschwindigkeit" << endl;
    cout << setw(38) << dVerbrauch() << setw(18) << p_dTankinhalt
    << setw(20) << p_dMaxGeschwindigkeit << endl;
}
double PKW::dGeschwindigkeit() const
{
    //cout << "In the PKW.\n";
    return p_dMaxGeschwindigkeit;
}
ostream & PKW::ostreamAusgabe(ostream & os) const
{
    os << "PKW\n";
    Fahrzeug::ostreamAusgabe(os);
    os << setw(18) << "Verbrauch" << setw(12) << "Tankinhalt" 
    << setw(20) << "MaxGeschwindigkeit" << endl;
    os << setw(18) << dVerbrauch() << setw(12) << p_dTankinhalt 
    << setw(20) << p_dMaxGeschwindigkeit << endl;
    return os;
}
