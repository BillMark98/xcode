//
//  main.cpp
//  TV
//
//  Created by Bill on 11/4/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include "TV.hpp"
int main(int argc, const char * argv[]) {
    Tv s42;
    cout << "Initial settings for s42\n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << "\nAdjusted Settings for 42\" Tv: \n";
    s42.settings();
    
    Remote grey;
    grey.show_mode();
    grey.set_chan(s42, 25);
    grey.volup(s42);
    grey.set_input(s42);
    cout << "42 adjusted using remote.\n";
    s42.settings();
    
    Tv s52(Tv::On);
    s52.set_mode();
    grey.set_chan(s52,29);
    cout << "\n58 setting.\n";
    s52.settings();
    
    cout << "Changing the remote.\n";
    s42.chan_r_mode(grey);
    grey.show_mode();
    return 0;
}
