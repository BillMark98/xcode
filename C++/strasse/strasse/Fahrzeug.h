//
//  Fahrzeug.hpp
//  strasse
//
//  Created by Bill on 11/7/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#ifndef Fahrzeug_hpp
#define Fahrzeug_hpp


#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#define ZEITSPANNE 0.4
#define EPSILON 0.0001
#define MINUTE_PER_HOUR 60
#define VOLL 1000
using namespace std;
extern double dGlobaleZeit;
class Fahrzeug
{
protected:
    std::string p_sName;
    int p_iID;
    static int p_iMaxID;
    double p_dMaxGeschwindigkeit;
    double p_dGesamtStrecke;
    double p_dGesamtZeit;
    double p_dZeit;
    void vInitialisierung(void);
public:
    Fahrzeug();
    Fahrzeug(string name);
    Fahrzeug(string name, double MaxGeschwindigkeit);
    virtual ~Fahrzeug();
    virtual double dTanken(double dMenge = VOLL) { return 0; }
    virtual void vAusgabe() const;
    static int getMaxID();
    virtual void vAbfertigung();
    virtual double dGeschwindigkeit() const { return p_dMaxGeschwindigkeit; }
};


#endif /* Fahrzeug_hpp */
