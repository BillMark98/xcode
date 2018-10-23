//
//  queue.c
//  queue_code
//
//  Created by Bill on 17/1/7.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
static void CopytoNode(Item item, Node* pnode)
{
    pnode->item = item;
}
static void CopytoItem(Item * item, Node * pnode)
{
    *item = pnode -> item;
}
void Initialize(Queue * pqueue)
{
    pqueue -> front = NULL;
    pqueue -> rear = NULL;
    pqueue -> items = 0;
}
bool QueueIsEmpty(const Queue * pqueue)
{
    return ((*pqueue).front == NULL) ? true : false;
}
bool QueueIsFull(const Queue * pqueue)
{
    Node * pnode;
    bool right;
    pnode = (Node *)malloc(sizeof (Node));
    if(pnode == NULL)
        right = true;
    else
        right = false;
    free(pnode);
    return right;
    
}

unsigned int QueueItemCount(const Queue * pqueue)
{
   
    return pqueue->items;
}
bool AddItem(Item item, Queue * pqueue)
{
    Node * pnew;
    Node * current;
    pnew = (Node *) malloc(sizeof (Node));
    if (pnew == NULL)
        return false;
    CopytoNode(item, pnew);
    pnew->next = NULL;
    current = (*pqueue).front;
    if(QueueIsEmpty(pqueue))
        (*pqueue).front = pnew;
    else
    {
        pqueue-> rear->next = pnew;
        
    }
        pqueue -> items ++;
        pqueue-> rear = pnew;
    return true;
}

bool DeQueue(Item * item,Queue * pqueue)
{
    Node * pq;
    
    if((QueueIsEmpty(pqueue)))
        return false;
    CopytoItem(item, pqueue -> front);
    pq = pqueue->front;
    pqueue->front = pqueue->front->next;
    free(pq);
    pqueue->items--;
    if(pqueue->items == 0)
        pqueue->rear = NULL;
    return true;
    
}
void Cleanup(Queue * pqueue)
{
    Item dummy;
    while(!(QueueIsEmpty(pqueue)))
        DeQueue(&dummy, pqueue);
    
}
void Traverse(const Queue * pqueue,void (*pfun) (Item item))
{
    Node * pnode = pqueue -> front;
    while(pnode)
    {
        (*pfun)(pnode -> item);
        pnode = pnode->next;
    }
}
