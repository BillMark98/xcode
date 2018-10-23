//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXVIII
// Versuch 04: Einf¸hrung Klasse
//
// Datei:  main.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Vektor.h"
#include <cmath>
#define pi 3.1415
#define person 0.0018
#define earth 6370
#define plattform 0.832

int main()
{
    //-----------------------------Test gegebener Variablen-----------------------------
    /*Vektor vector1(1,0,0);
     Vektor vector2(0,1,0);
     
     vector1.print();
     vector2.print();
     
     std::cout << "Die Laenge des vector1s ist£∫ " << vector1.length() << std::endl;
     std::cout << "Die Laenge des vector2s ist£∫ " << vector2.length() << std::endl;
     
     Vektor vector3 = vector1.sub(vector2);
     std::cout << "Das sub-Ergbenisvektor ist£∫ " << std::endl;
     
     vector3.print();
     
     std::cout << "Der Skalarprodukt zweier Vektoren ist£∫ " << vector1.scalarProd(vector2) << std::endl;
     std::cout << "Der Winkel zwischen zweier Vektoren ist£∫ " << vector1.angle(vector2) << std::endl;
     
     double rad;
     std::cin >> rad;
     std::cout << "Rotationsmatrix ist: " << std::endl;
     vector1.rotateAroundZ(rad);
     vector2.rotateAroundZ(rad);
     */
    
    //-------------------------------------4.6.2----------------------------------------
    Vektor vectorPerson = Vektor(0, (earth+person+plattform), 0);
    Vektor vectorEarth = Vektor(0, earth, 0);
    Vektor vectorDistance = vectorEarth.sub(vectorPerson);
    Vektor vectorHeight = Vektor(0, (person+plattform), 0);
    
    int Schritt = 0;
    do
    {
        vectorEarth.rotateAroundZ(0.1);
        vectorDistance = vectorEarth.sub(vectorPerson);
        Schritt++;
    }
    while(vectorDistance.scalarProd(vectorEarth) < 0); //angle >= 90 Grad
    
    std::cout << std::fixed;
    std::cout << std::setprecision(4) << "Sie koennen " << vectorDistance.length() << " Km weit sehen." << std::endl;
    std::cout << std::setprecision(1) << "Sie sind " << vectorHeight.length()*1000 << " Meter hoch." << std::endl;
    std::cout << std::setprecision(4) << "Der Winkel betraegt " << vectorEarth.angle(vectorPerson) << " Grad." << std::endl;
    std::cout << "Anzahl Schritte: " << Schritt << std::endl;
    
    return 0;
}
