//
//  TV.cpp
//  TV
//
//  Created by Bill on 11/4/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include "TV.hpp"
void Tv::chanup()
{
    if(channel == maxchannel)
    {
        channel = 1;
    }
    else
        channel ++;
    
}
void Tv::chandown()
{
    if(channel == 1)
        channel = maxchannel;
    else
        channel --;
    
}
bool Tv::volup()
{
    if(volume == MaxVal)
        return false;
    else
        volume++;
    return true;
}
bool Tv::voldown()
{
    if(volume == MinVal)
        return false;
    else
        volume--;
    return true;
}
void Tv::settings() const
{
    cout << "Tv state: " << ((state == On)? "On" : "Off")
    <<"\nChannel: "<< channel << "\nVolume: " << volume
    <<"\nMode: " << ((mode == Antenna)? "Antenna" : "Cable")
    << "\nInput: " << ((input == TV)? "TV" : "DVD")<<endl;
}
void Tv::chan_r_mode(Remote & rm)
{
    if(state == On)
    {
        rm.r_mode ^= 1;
    }
    else
    {
        cout << "Tv is off, can't do anything.\n";
    }
}
