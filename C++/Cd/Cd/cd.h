//
//  cd.hpp
//  Cd
//
//  Created by Bill on 10/21/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#ifndef cd_hpp
#define cd_hpp

#include <iostream>
#include <cstring>
using namespace std;

class Cd {
private:
    char * performers;
    char * label;
    int selections;
    double playtime;
public:
    Cd(const char * s1, const char * s2,int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};
class Classic : public Cd {
private:
    char * work;
public:
    Classic(const char * s1, const char * s2, const char * s3,int n, double x);
    Classic();
    Classic(const Classic & c);
    Classic & operator=(const Classic & c);
    virtual ~Classic();
    virtual void Report() const;
    
};

#endif /* cd_hpp */
