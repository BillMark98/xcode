//
//  list.c
//  trycod
//
//  Created by Bill on 16/12/6.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include "list.h"
#include <stdio.h>
#include <stdlib.h>
static void CopytoNode(Item item, Node* pnode)
{
    pnode->item = item;
}

void Initialize(List * plist)
{
    *plist = NULL;
}
bool ListIsEmpty(const List * plist)
{
    return (*plist == NULL) ? true : false;
}
bool ListIsFull(const List * plist)
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

unsigned int ListItemCount(const List * plist)
{
    unsigned int count = 0;
    Node* current;
    current = *plist;
    while(current)
    {
        count++;
        current = current ->next;
    }
    return count;
}
bool AddItem(Item item, List * plist)
{
    Node * pnew;
    Node * current;
    pnew = (Node *) malloc(sizeof (Node));
    if (pnew == NULL)
        return false;
    CopytoNode(item, pnew);
    pnew->next = NULL;
    current = *plist;
    if(current == NULL)
        *plist = pnew;
    else
    {
        while(current->next!= NULL)
            current = current ->next;
        current->next = pnew;
    }
    return true;
}

void Cleanup(List * plist)
{
    Node* psave;
    while(*plist)
    {
        psave = (*plist) -> next;
        free(*plist);
        *plist = psave;
    }
    
}
void Traverse(const List *plist,void (*pfun) (Item item))
{
    Node * pnode = *plist;
    while(pnode)
    {
        (*pfun)(pnode -> item);
        pnode = pnode->next;
    }
}




