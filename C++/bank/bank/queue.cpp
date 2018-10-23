//
//  queue.cpp
//  bank
//
//  Created by Bill on 17/6/8.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include "queue.h"
#include <cstdlib>
Queue::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}
Queue::~Queue()
{
    Node * temp;
    while(front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}
bool Queue::isempty() const
{
    return items == 0;
}
bool Queue::isfull() const
{
    return items == qsize;
}
int Queue::queuecount() const
{
    return items;
}
bool Queue::enqueue(const Item & item)
{
    Node * temp = new Node;
    if(isfull())
        return false;
    temp -> item = item;
    temp -> next = NULL;
    items++;
    if(front == NULL)
        front = temp;
    else
    {
        rear->next = temp;
        
    }
    rear = temp;
    return true;
}
bool Queue::dequeue(Item & item)
{
    if(isempty())
        return false;
    item = front -> item;
    items--;
    Node * temp = front;
    front = front -> next;
    delete temp;
    if( items == 0)
        rear = NULL;
    return true;
}

void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}








