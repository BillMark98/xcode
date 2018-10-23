//
//  Vektor.h
//  Versuch_4_me
//
//  Created by Bill on 17/5/15.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef Vektor_h
#define Vektor_h
#define RAD_TO_GRAD (180/3.1415926)
#include <iostream>
#define PI 3.1415926
class Vektor
{
public:
    Vektor(double x, double y, double z);
    ~Vektor();
    
    double getX() const;
    double getY() const;
    double getZ() const;
    
    Vektor sub(const Vektor& input) const;
    Vektor add(const Vektor& input) const;
    
    double length() const;
    bool ortho(const Vektor& input) const;
    double scalarProd(const Vektor& input) const;
    double angle(const Vektor& input) const;
    
    void rotateAroundZ(const double rad);
    
    void ausgabe() const;
    
private:
    double x;
    double y;
    double z;
    
};

#endif /* Vektor_h */
