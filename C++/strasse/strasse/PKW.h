//
//  PKW.hpp
//  strasse
//
//  Created by Bill on 11/7/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#ifndef PKW_hpp
#define PKW_hpp



#pragma once
#include "Fahrzeug.h"
class PKW :
public Fahrzeug
{
protected:
    double p_dVerbrauch;
    double p_dTankinhalt;
    double p_dTankvolumen;
public:
    PKW();
    PKW(string name, double MaxGeschwindigkeit, double verbrauch, double tankvolumen = 55);
    PKW(double verbrauch, string name, double tankvolumen = 55);
    virtual ~PKW();
    double dVerbrauch() const;
    virtual double dTanken(double dMenge = VOLL);
    virtual void vAbfertigung();
    virtual void vAusgabe() const;
    virtual double dGeschwindigkeit() const;
};




#endif /* PKW_hpp */
