//
//  tree.c
//  tree_code
//
//  Created by Bill on 17/1/9.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include "tree.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct pair{
    Node * parent;
    Node * child;
}Pair;
static bool Toleft(const Item * item, const Item * i2);
static bool Toright(const Item * item, const Item * i2);
static Node* MakeNode(const Item * item);
static void AddNode(Node * node, Node * root);
static Pair SeekItem(const Item*item, const Tree* ptree);
static void DeleteNode(Node ** ptr);
static bool Toleft(const Item * item, const Item * i2)
{
    int cmp;
    if( (cmp = strcmp(item->petname, i2->petname))<0)
        return true;
    else if (cmp == 0 && (cmp = strcmp(item->petkind, i2->petname))<0)
             return true;
    else
             return false;
             
}

static bool Toright(const Item * item, const Item * i2)
{
    int cmp;
    if( (cmp = strcmp(item->petname, i2->petname))>0)
        return true;
    else if (cmp == 0 && (cmp = strcmp(item->petkind, i2->petname))>0)
        return true;
    else
        return false;
}

static Node* MakeNode(const Item * item)
{
    Node * new_node;
    new_node = (Node *) malloc(sizeof(Node));
    if(new_node)
    {
        new_node ->item = *item;
        new_node ->left = NULL;
        new_node ->right = NULL;
    }
    return new_node;
    
}
static void AddNode(Node * node, Node * root)
{
        if(Toleft(&node->item,&(root->item)))
        {
            if (root->left == NULL)
                root->left = node;
            else
                AddNode(node,root->left);
        }
    else if(Toright(&node->item,&(root->item)))
    {
        if(root->right == NULL)
            root->right = node;
        else
            AddNode(node,root->right);
    }
    
    else
    {  fprintf(stderr,"Location error in AddNode()\n");
        exit(1);
    }
}
static Pair SeekItem(const Item*item, const Tree* ptree)
{
    Pair look;
    look.child = ptree->root;
    if(look.child == NULL)
        return look;
        while(look.child)
        {
            
            if(Toleft(item,&(look.child->item)))
            {
                look.parent = look.child;
                look.child = look.child->left;
            }
            else if(Toright(item,&(look.child->item)))
            {
                look.parent = look.child;
                look.child = look.child->right;}
            else
                break;
        }
        
    return look;
}
static void DeleteNode(Node ** ptr)
{
    Node * temp;
    if((*ptr)->left == NULL)
    {
        temp = *ptr;
        *ptr = (*ptr)->right;
        free(temp);
    }
    else if((*ptr)->right == NULL)
    {
        temp = *ptr;
        *ptr = (*ptr)->left;
        free(temp);
        
    }
    else
    {
        for(temp = (*ptr)->left;temp->right != NULL;temp = temp->right)
            continue;
        temp->right = (*ptr)->right;
        temp = *ptr;
        *ptr = (*ptr)->left;
        free(temp);
    }
}
void Initialize(Tree * ptree)
{
    ptree -> root = NULL;
    ptree -> size = 0;
}


bool TreeIsEmpty( const Tree * ptree)
{
    return (ptree->size == 0)? true: false;
}

bool TreeIsFull(const Tree * ptree)
{
    return (ptree ->size == MAX)? true : false;
}
int TreeItemCount( const Tree * ptree)
{
    return ptree->size;
}
bool AddItem(const Item * item, Tree * ptree)
{
    Node * new_node;
    if(TreeIsFull(ptree))
    {
        fprintf(stderr,"Tree is full\n");
        return false;
    }
    if(SeekItem(item,ptree).child != NULL)
    {
        fprintf(stderr,"Attempted to add duplicate item.\n");
        return false;
    }
    new_node = MakeNode(item);
    if(new_node == NULL)
    {
        fprintf(stderr,"Couldn't create node.\n");
        return false;
        
    }
    ptree->size++;
    if(ptree->root == NULL)
        ptree->root = new_node;
    else
        AddNode(new_node,ptree->root);
    return true;
}




bool InTree( const Item * item, const Tree * ptree);

bool DeleteItem(const Item * pi, Tree * ptree)
{
    Pair look;
    look = SeekItem(pi, ptree);
    if(look.child == NULL)
        return false;
    if(look.parent == NULL)
        DeleteNode(&(ptree->root));
    else if(look.child == look.parent->left)
        DeleteNode(&(look.parent->left));
    else
        DeleteNode(&(look.parent->left));
    ptree->size --;
    return true;
    
}

void Traverse( const Tree * ptree, void(*pfun)(Item item));

void DeleteAll(Tree * ptree);
