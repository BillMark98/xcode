//
//  tree.h
//  tree_code
//
//  Created by Bill on 17/1/9.
//  Copyright © 2017年 Bill. All rights reserved.
//

#ifndef tree_h
#define tree_h

#include <stdio.h>

#include <stdbool.h>

#define MAX 10
typedef struct Item
{
    char petname[20];
    char petkind[10];
}Item;

typedef struct node
{
    Item item;
    struct node * left;
    struct node * right;
}Node;

typedef struct tree
{
    Node * root;
    int size;
}Tree;

void Initialize( Tree * ptree);


bool TreeIsEmpty( const Tree * ptree);

bool TreeIsFull(const Tree * ptree);

int TreeItemCount( const Tree * ptree);

bool AddItem(const Item * item, Tree * ptree);

bool InTree( const Item * item, const Tree * ptree);

bool DeleteItem(const Item * pi, Tree * ptree);

void Traverse( const Tree * ptree, void(*pfun)(Item item));

void DeleteAll(Tree * ptree);
#endif /* tree_h */
