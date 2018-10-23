//
//  queue.hpp
//  bank
//
//  Created by Bill on 17/6/8.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef queue_hpp
#define queue_hpp

class Customer
{
private:
    long arrive;
    int processtime;
public:
    Customer(){ arrive = processtime = 0;}
    void set(long when);
    long when()const { return arrive;}
    int ptime() const { return processtime; }
    
};
typedef Customer Item;

class Queue
{
private:
    // type definition
    struct Node
    {
        Item item;
        Node * next;
    };
    enum {Q_SIZE = 10 };
    // private attributes
    Node * front;
    Node * rear;
    int items;
    const int qsize;
    Queue(const Queue &) : qsize(0){}
    Queue & operator=(const Queue &) { return *this; }
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item & item);
    bool dequeue(Item & item);
};
#endif /* queue_hpp */
