//
//  list.h
//  trycod
//
//  Created by Bill on 16/12/6.
//  Copyright © 2016年 Bill. All rights reserved.
//

#ifndef list_h
#define list_h

#include <stdbool.h>
#define TSIZE 50

/* definition of variable.*/
typedef struct film
{
    char fname[TSIZE];
    int rating;
} Item;

typedef struct node
{
    Item item;
    struct node * next;
} Node;
typedef Node* List;


/* Initializing Function */
/*precondition: the argument *plist points to a list*/
/* postcondition: points to NULL */
void Initialize (List * plist);

/*Testing if the list is null*/
/*precon: the *plist points to a list */
/* postcon: return the bool value true for is null */
bool ListIsEmpty(const List * plist);

/*Testing if the list is full */
/* precon: the plist points to a list */
/* postcon: return the bool value true for is full */
bool ListIsFull(const List * plist);

/* Counting the elements */
/* precon: give an list* value*/
/* post con: give an unsigned int value back, indicating the number of the nodes.*/

unsigned int ListItemCount(const List * plist);

/* Adding an Item */
/*precon: give an list * value */
/* postcon : add an Item to the end of the list and give an bool for true if it succeeds*/
bool AddItem(Item item, List * plist);

/* Clearing the list */
/* precon: give an list* value */
/* postcon: clearing the malloc */
void Cleanup(List * plist);

/* Executing the function at the argument */
void Traverse(const List *plist,void (*pfun) (Item item));






#endif /* list_h */
