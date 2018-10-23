//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXVIII
// Versuch 04: Einf¸hrung Klasse
//
// Datei:  Vektor.cpp
// Inhalt: Sourcedatei der Klasse Vektor
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Vektor.h"
#include <cmath>
#define pi 3.1415

Vektor::Vektor(double inX, double inY, double inZ) : x(inX), y(inY), z(inZ)
{
    
}

Vektor::~Vektor()
{
    
}

/**
 * @brief Function printing the components of the vector
 */
void Vektor::print() const
{
    std::cout << "X-Komponente: " << x << std::endl;
    std::cout << "Y-Komponente: " << y << std::endl;
    std::cout << "Z-Komponente: " << z << std::endl << std::endl;
}

/**
 * @brief Function printing the length of the vector
 */
double Vektor::length() const
{
    return sqrt(x*x + y*y + z*z);
}

/**
 * @brief Function printing the subtraction of two vectors
 */
Vektor Vektor::sub(const Vektor& input) const
{
    return Vektor(x-input.x, y-input.y, z-input.z);
}

/**
 * @brief Function printing the dot product of two vectors
 */
double Vektor::scalarProd(const Vektor& input) const
{
    return x*input.x + y*input.y + z*input.z;
}

/**
 * @brief Function printing the angle of two vectors in degree
 */
double Vektor::angle(const Vektor& input) const
{
    return (acos(scalarProd(input)/(length()*sqrt(pow(input.x,2)+pow(input.y, 2)+pow(input.z, 2)))))/pi*180;
}

/**
 * @brief Function printing the vector rotate around the z-axis in radian
 */
void Vektor::rotateAroundZ(const double rad)
{
    /*
    double new_x = cos(rad) * (this -> x) - sin(rad) * (this -> y);
    double new_y = sin(rad) * (this -> x) + cos(rad) * (this -> y);
    
    x = new_x;
    y = new_y;
     
    */
    
     (this -> x) = cos(rad) * (this -> x) - sin(rad) * (this -> y);
     (this -> y) = sin(rad) * (this -> x) + cos(rad) * (this -> y);
     
     
}
