//
//  mytime.h
//  Timer
//
//  Created by Bill on 17/5/22.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef mytime_h
#define mytime_h
#include <iostream>
class Time
{
    private:
    int hours;
    int minutes;
    
    public:
    Time();
    Time(int h,int m = 0);
    Time operator+(const Time & t) const;
    void Show() const;
    friend Time operator*(double m, const Time & t);
    Time operator*(double m) const;
    Time operator-();
    friend void operator<<(std::ostream & os, const Time & t);
    explicit operator int()const;
};

#endif /* mytime_h */
