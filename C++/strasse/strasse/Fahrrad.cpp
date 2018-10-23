//
//  Fahrrad.cpp
//  strasse
//
//  Created by Bill on 11/7/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include "Fahrrad.h"



Fahrrad::Fahrrad() :Fahrzeug()
{
    //p_dGeschwindigkeit = 20;
}
Fahrrad::Fahrrad(string name) : Fahrzeug(name)
{
    //p_dGeschwindigkeit = 20;
}
Fahrrad::Fahrrad(string name, double MaxGeschwindigkeit) : Fahrzeug(name, MaxGeschwindigkeit)
{
    //p_dGeschwindigkeit = MaxGeschwindigkeit;
}

Fahrrad::~Fahrrad()
{
}
double Fahrrad::dGeschwindigkeit() const
{
    /*if (p_dGeschwindigkeit <= 12)
     {
     return 12.;
     }
     else
     {
     int iTimes = p_dGesamtStrecke / 20; // wird berechnet, wie viel 20 km wird insgesamt gefahren;
     p_dGeschwindigkeit = pow(0.9, iTimes) * p_dMaxGeschwindigkeit;
     if (p_dGeschwindigkeit <= 12)
     {
     p_dGeschwindigkeit = 12;
     }
     
     }
     return p_dGeschwindigkeit;
     */
    //cout << "In the Fahrrad: \n";
    int iTimes = p_dGesamtStrecke / 20; // wird berechnet, wie viel 20 km wird insgesamt gefahren;
    double dSpeed = pow(0.9, iTimes) * p_dMaxGeschwindigkeit;
    if (dSpeed < 12)
    {
        return 12.;
    }
    else if (fabs(dSpeed - 12) <= EPSILON)
    {
        return 12;
    }
    else
    {
        return dSpeed;
    }
    
}
void Fahrrad::vAusgabe() const
{
    cout << "Fahrrad\n" << endl;
    Fahrzeug::vAusgabe();
}
void Fahrrad::vAbfertigung()
{
    Fahrzeug::vAbfertigung();
}
