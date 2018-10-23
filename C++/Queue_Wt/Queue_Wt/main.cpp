//
//  main.cpp
//  Queue_Wt
//
//  Created by Bill on 10/31/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include "Queue_Wt.hpp"
int main(int argc, const char * argv[]) {
    Worker worker[4] =
    {
        Worker("First",1234),
        Worker("Seconde",43120),
        Worker("Third",103),
        Worker()
    };
    Queue<Worker *> wk_queue(4);
    bool a1 = wk_queue.enqueue(&worker[2]);
    bool a2 = wk_queue.enqueue(&worker[1]);
    if(!a1 || !a2)
    {
        cout<< "Eroor enqueue."<<endl;
    }
    Worker * worker_pt1 = new Worker;
    Worker * worker_pt2 = new Worker;
    cout << wk_queue.queuecount() << endl;
    a1 = wk_queue.dequeue(worker_pt1);
    a2 = wk_queue.dequeue(worker_pt2);
    if(!a1 || !a2)
    {
        cout<< "Eroor dequeue."<<endl;
    }
    cout << wk_queue.queuecount() << endl;
    cout << "Worker 1: "<<endl;
    
    worker_pt1 -> Show();
    
    cout << "\nWorker 2 : " <<endl;
    worker_pt2 -> Show();
    //delete worker_pt2;  doesn't need to delete the two pointers, the destructor of the queue will do it.
    //delete worker_pt1;
    wk_queue.~Queue();
    
    Queue<string> cs(5);
    string temp;
    while(!cs.isfull())
    {
        cout << "Please enter your name. You will be"
                "served in the order of arrival.\n"
                "name: ";
        getline(cin,temp);
        cs.enqueue(temp);
        
    }
    cout << "The queue is full. Processing begins.\n";
    while(!cs.isempty())
    {
        cs.dequeue(temp);
        cout << "Now processing " << temp << "...\n";
    }
    return 0;
}
