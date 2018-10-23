//
//  Vektor.cpp
//  Versuch_4_me
//
//  Created by Bill on 17/5/15.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include "Vektor.h"
#include <cmath>


Vektor::Vektor(double inX, double inY, double inZ) : x(inX), y(inY), z(inZ)
{
    
}

Vektor::~Vektor()
{
    
}


void Vektor::ausgabe() const
{   using std::cout;
    using std::endl;
    cout<<"The x,y,z,value.\n";
    std::cout << this->x<<' '<<this->y<<' '<<this->z<<std::endl;
    
}

double Vektor::getX() const
{
    return this->x;
    
}
double Vektor::getY() const
{
    return this->y;
    
}
double Vektor::getZ() const
{
    return this->z;
}
double Vektor::length() const
{
    double len = pow(this->x,2)+pow(this->y,2)+pow(this->z,2);
    return sqrt(len);
}

bool Vektor::ortho(const Vektor& input) const
{
    double product = this->scalarProd(input);
    return product == 0;
}
double Vektor::scalarProd(const Vektor& input) const
{
    double product = this->x * input.x + this->y * input.y + this->z * input.z;
    return product;
}
double Vektor::angle(const Vektor& input) const
{
    double scalar = this->scalarProd(input);
    double leng = this->length() * input.length();
    double angle = acos(scalar/leng)*RAD_TO_GRAD;
    return angle;
}
void Vektor::rotateAroundZ(const double rad)
{
    double temp1 = this->x;
    double temp2 = this->y;
    this->x = temp1 * cos(rad) - sin(rad) * temp2;
    this->y = temp1 * sin(rad) + cos(rad) * temp2;
    
    
}

Vektor Vektor::sub(const Vektor& input) const
{
    Vektor temp(this->x - input.getX(),this->y - input.getY(),this->z - input.getZ());
    return temp;
}
Vektor Vektor:: add(const Vektor& input) const
{
    Vektor temp(this->x + input.getX(),this->y + input.getY(),this->z + input.getZ());
    return temp;
}


















