//
//  main.cpp
//  bank
//
//  Created by Bill on 17/6/8.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x);
int main(int argc, const char * argv[]) {
    using std::cout;
    using std::cin;
    using std::endl;
    using std::rand;
    using std::ios_base;
    // setting things up;
    std::srand((unsigned int) time(0));
    cout << "Case Study: Bank Teller\n";
    cout << " Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    
    cout <<"Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    
    long cyclelimit = MIN_PER_HR * hours;
    cout << "Enter the average number of customers per hours: ";
    double perhour;
    cin >> perhour;
    double min_per_cust;
    //min_per_cust = MIN_PER_HR / perhour;
    
    Item temp;
    long turnaways = 0;     // turned away by full queue
    long customers = 0;     // joined the queue
    long served = 0;        // served during the simulation
    long sum_line = 0;      // cumulative line length
    int wait_time = 0;      // time  until autoseller is free
    long line_wait = 0;     // cumulative time in line
    int mycus = 0;
    // running the simulation
    for(mycus = (int)perhour; mycus > 0 ; mycus --)
    {
        Queue line(qs);
        min_per_cust = MIN_PER_HR / (double)mycus;
        turnaways = 0;     // turned away by full queue
        customers = 0;     // joined the queue
        served = 0;        // served during the simulation
        sum_line = 0;      // cumulative line length
        wait_time = 0;      // time  until autoseller is free
        line_wait = 0;
        
        for (int cycle = 0; cycle < cyclelimit; cycle ++)
        {
            if(newcustomer(min_per_cust))   // having new customers
            {
                if(line.isfull())           // turned away
                    turnaways++;
                else
                {
                    customers++;
                    temp.set(cycle);
                    line.enqueue(temp);
                }
        }
            if(wait_time <= 0 && !line.isempty())
            {
                line.dequeue(temp);
                    served++;
                wait_time = temp.ptime();
                line_wait += cycle - temp.when();
            
            }
            if(wait_time > 0)
            {
                wait_time--;
            
            }
            sum_line += line.queuecount();
        }
        double average = (double) line_wait / served;
        if((int)average < 1)
            break;
        line.~Queue();
    }
    if(customers > 0)
    {
        cout << "customers per hour : " << mycus << endl;
        cout << "customers accepted: " << customers << endl;
        cout << "   customers served: " << served << endl;
        cout << "       turnaways: " << turnaways << endl;
        cout << " average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed,ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: "
             << (double) line_wait / served << " minutes\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done.\n";
    
    return 0;
}
bool newcustomer(double x)
{
    return (std::rand() * x/ RAND_MAX < 1);
}







