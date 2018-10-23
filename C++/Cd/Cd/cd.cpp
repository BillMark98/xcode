//
//  cd.cpp
//  Cd
//
//  Created by Bill on 10/21/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include "cd.h"
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    int len = (int) strlen(s1);
    performers = new char[len+1];
    strcpy(performers,s1);
    len = (int) strlen(s2);
    label = new char[len+1];
    strcpy(label,s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d)
{
    int len = (int) strlen(d.performers);
    performers = new char[len+1];
    strcpy(performers, d.performers);
    len = (int) strlen(d.label);
    label = new char[len + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd()
{
    performers = new char[1];
    performers[0] = '\0';
    label = new char [1];
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}
Cd::~Cd()
{
    delete [] performers;
    delete [] label;
    
}
void Cd::Report() const
{
    cout << "performers: " << performers
         << "\nlabel: "<<label
         << "\nselections: "<<selections
         << "\nplaytime: " <<playtime << endl;
    
}
Cd & Cd::operator=(const Cd & d)
{
    if ( this == &d)
        return * this;
    delete [] performers;
    delete [] label;
    int len = (int) strlen(d.performers);
    performers = new char[len+1];
    strcpy(performers, d.performers);
    len = (int) strlen(d.label);
    label = new char[len + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return * this;
}
Classic::Classic():Cd()
{
    work = new char[1];
    work[0] = '\0';
}

Classic::Classic(const char * s1, const char * s2, const char * s3,int n, double x):Cd(s2,s3,n,x)
{
    int len = (int)strlen(s1);
    work = new char[len + 1];
    strcpy(work,s1);
}

Classic::Classic(const Classic & c) : Cd(c)
{
    int len = (int)strlen(c.work);
    work = new char[len + 1];
    strcpy(work,c.work);
    
}
Classic & Classic::operator=(const Classic & c)
{
    if (this == &c)
        return * this;
    Cd::operator=(c);
    delete [] work;
    int len = (int)strlen(c.work);
    work = new char[len + 1];
    strcpy(work,c.work);
    return * this;
}

Classic::~Classic()
{
    delete [] work;
}
void Classic::Report() const
{
    Cd::Report();
    cout << "Playing the " << work <<endl;
}
