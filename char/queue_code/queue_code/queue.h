//
//  queue.h
//  queue_code
//
//  Created by Bill on 17/1/7.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include <stdbool.h>
#define TSIZE 50

/* definition of variable.*/
typedef struct film
{
    char fname[TSIZE];
    unsigned int rating;
} Item;

typedef struct node
{
    Item item;
    struct node * next;
} Node;
typedef struct queue
{
    Node * front;
    Node * rear;
    int items;
} Queue;




/* Initializing Function */
/*precondition: the argument *plist points to a list*/
/* postcondition: points to NULL */
void Initialize (Queue * pqueue);

/*Testing if the list is null*/
/*precon: the *plist points to a list */
/* postcon: return the bool value true for is null */
bool QueueIsEmpty(const Queue * pqueue);

/*Testing if the list is full */
/* precon: the plist points to a list */
/* postcon: return the bool value true for is full */
bool QueueIsFull(const Queue * pqueue);

/* Counting the elements */
/* precon: give an list* value*/
/* post con: give an unsigned int value back, indicating the number of the nodes.*/

unsigned int QueueItemCount(const Queue * pqueue);

/* Adding an Item */
/*precon: give an list * value */
/* postcon : add an Item to the end of the list and give an bool for true if it succeeds*/
bool AddItem(Item item, Queue * pqueue);

/* Clearing the list */
/* precon: give an list* value */
/* postcon: clearing the malloc */
void Cleanup(Queue * pqueue);

/* Executing the function at the argument */
void Traverse(const Queue * pqueue,void (*pfun) (Item item));

bool DeQueue(Item * item,Queue * pqueue);

#endif /* queue_h */
