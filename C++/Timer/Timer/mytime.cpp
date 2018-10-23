//
//  mytime.cpp
//  Timer
//
//  Created by Bill on 17/5/22.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include "mytime.h"


Time::Time()
{
    hours = minutes = 0;
}
Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}
Time Time::operator+(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes/60;
    sum.minutes %= 60;
    return sum;
}
void Time::Show() const
{
    std::cout << hours << " hours, "<< minutes <<" minutes\n";
}
Time operator*(double m, const Time & t)
{
    Time result;
    long totalminutes = t. hours * m * 60 + t. minutes * m;
    result.hours = (int) totalminutes/60;
    result.minutes = totalminutes % 60;
    return result;
}
Time Time::operator*(double m) const
{
    Time result;
    long totalminutes = hours * m * 60 + minutes * m;
    result.hours = (int) totalminutes/60;
    result.minutes = totalminutes % 60;
    return result;
}
void operator<<(std::ostream &os, const Time & t)
{
    os<< t. hours << " hours, " << t.minutes << " minutes";
}
Time Time::operator-()
{
    return Time(-hours,-minutes);
}
Time::operator int()const
{
    return hours;
}
