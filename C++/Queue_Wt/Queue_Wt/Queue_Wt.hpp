//
//  Queue_Wt.hpp
//  Queue_Wt
//
//  Created by Bill on 10/31/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#ifndef Queue_Wt_hpp
#define Queue_Wt_hpp

#include <iostream>
#include <string>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::string;

template < typename T>
class Queue
{
    class Node
    {
    public:
        T item;
        Node * next;
        Node(const T & it): item(it),next(nullptr) {}
        
    };
private:
    /*struct Node
    {
        T item;
        Node * next;
    };*/
    
    enum {Q_SIZE = 10};
    Node * front;
    Node * rear;
    int items;
    const int qsize;
    Queue(const Queue & q) : qsize(0),items(0) {}
    Queue & operator[](const Queue & q) {return *this;}
public:
    Queue(int qs = Q_SIZE) : qsize(qs){ front = rear = nullptr; items = 0;}
    ~Queue();
    bool isempty() const {return items == 0;}
    bool isfull() const { return items == qsize;}
    int queuecount() const {return items;}
    bool enqueue(const T & item);
    bool dequeue(T & item);
    
};
template <typename T>
Queue<T>::~Queue()
{
    Node * temp = front;
    while(temp != nullptr)
    {
        temp = front;
        front = front -> next;
        delete temp;
    }
}

template <typename T>
bool Queue<T>::enqueue(const T & item)
{
    if(isfull())
        return false;
    /*Node * temp = new Node;
    temp -> item = item;
    temp -> next = nullptr;*/
    Node * temp = new Node(item);
    if(rear == nullptr)
    {
        front = rear = temp;
        //front -> next = rear -> next = nullptr;
    }
    else
    {
        rear -> next = temp;
    }
    items ++;
    rear = temp;
    return true;
}
template <typename T>
bool Queue<T>::dequeue(T & item)
{
    if(isempty())
        return false;
    Node * temp = front;
    item = front -> item;
    front = front -> next;
    delete temp;
    items --;
    if(front == nullptr)
        rear = nullptr;
    return true;
}



class Worker
{
private:
    string fullname;
    long id;
public:
    Worker(): fullname("no one"),id(0L) {}
    Worker(const string & s, long n) : fullname(s),id(n) {}
    ~Worker() {}
    void Set();
    void Show() const;
    
};















#endif /* Queue_Wt_hpp */
