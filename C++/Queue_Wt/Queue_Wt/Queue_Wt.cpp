//
//  Queue_Wt.cpp
//  Queue_Wt
//
//  Created by Bill on 10/31/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include "Queue_Wt.hpp"
void Worker::Show() const
{
    cout << setw(5) << "Name: " << setw(10)<< fullname << endl;
    cout << setw(5) << "Id: " << setw(10) << id << endl;
}
