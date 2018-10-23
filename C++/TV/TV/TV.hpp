//
//  TV.hpp
//  TV
//
//  Created by Bill on 11/4/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#ifndef TV_hpp
#define TV_hpp

#include <iostream>
using namespace std;
class Remote;
class Tv
{
public:
    friend class Remote;
    enum{TV,DVD};
    enum{Off, On};
    enum{MinVal, MaxVal = 20};
    enum{Antenna, Cable};
    Tv(int s = Off, int mc = 125) : state(s),maxchannel(mc),volume(5),
    channel(2),mode(Cable),input(TV) {}
    void onoff() {state ^= 1;}
    bool ison() const {return state == On;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna ;}
    void set_input() { input = (input == TV) ? DVD : TV; }
    void settings() const;
    void chan_r_mode(Remote & rm);
private:
    int state;
    int maxchannel;
    int channel;
    int volume;
    int mode;
    int input;
};

class Remote
{
private:
    enum{ Normal, Active};
    int r_mode; 
public:
    friend class Tv;
    Remote(int mode = Normal) : r_mode(mode) {}
    
    bool volup(Tv & t) {return t.volup();}
    bool voldown(Tv & t) {return t.voldown();}
    void onoff(Tv & t) {t.onoff();}
    void chanup(Tv & t) {t.chanup();}
    void chandown(Tv & t) {t.chandown();}
    void set_chan(Tv & t, int c) { t.channel = c;}
    void set_mode(Tv & t) { t.set_mode();}
    void set_input( Tv & t) { t.set_input();}
    void show_mode() const;
    
    
    
};
inline void Remote::show_mode() const
{
    cout << "The mode of Remote is : "
        << ((r_mode == Normal) ? "Normal": "Active")<<endl;
    
}

#endif /* TV_hpp */
