//
//  Fahrrad.hpp
//  strasse
//
//  Created by Bill on 11/7/17.
//  Copyright © 2017 Bill. All rights reserved.
//


#pragma once
#include "Fahrzeug.h"
class Fahrrad :
public Fahrzeug
{
protected:
    //double p_dGeschwindigkeit;
public:
    Fahrrad();
    Fahrrad(string name);
    Fahrrad(string name, double MaxGeschwindigkeit);
    virtual ~Fahrrad();
    virtual double dTanken(double dMenge = VOLL) { return 0; }
    virtual double dGeschwindigkeit() const;
    virtual void vAusgabe() const;
    virtual void vAbfertigung();
};


