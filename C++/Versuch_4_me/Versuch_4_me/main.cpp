//
//  main.cpp
//  Versuch_4_me
//
//  Created by Bill on 17/5/15.
//  Copyright © 2017年 Bill. All rights reserved.
//


#include "Vektor.h"
#include <cmath>
#define STEP 0.00000000000001
#define ERDE_RADIUS 6371000
int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    double height = 831.8;
    Vektor Person(0,ERDE_RADIUS+831.8,0);
    double angle = 0.0;
    Vektor ROT(0,ERDE_RADIUS,0);
    long count = 0L;
    Vektor diff = Person.sub(ROT);
    
    while(diff.scalarProd(ROT)>=0)
    {
        ROT.rotateAroundZ( angle-= STEP);
        count ++;
        diff = Person.sub(ROT);
    }
    cout.setf(ios_base::fixed,ios_base::showpoint);
    
    cout<<"You can see "<< ROT.getX()/1000<<" km far.\n";
    cout<<"The angle is " << Person.angle(ROT)<<" Grad.\n";
    cout<<"You are "<<height<<" tall.\n";
    cout <<"The step takes "<<count<<endl;
    
    return 0;
}
