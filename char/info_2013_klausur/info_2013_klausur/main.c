//
//  main.c
//  info_2013_klausur
//
//  Created by Bill on 17/2/23.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <stdio.h>
#define NUM_NODES 6
#define MAKE_NODE(n,v,l,r) n.value=v; n.left=l; n.right=r;
typedef struct node {
    int value;
    struct node* left; struct node* right;
} node_t;
node_t* function1(node_t* array); int function2(node_t* root );
int main () {
    node_t node_array[NUM_NODES]; printf("Result=%d",function2(function1(node_array))); return 0;
}
node_t* function1(node_t* array) {
    MAKE_NODE(array[4],2,&array[2],&array[3]) MAKE_NODE(array[0],4,NULL,NULL) MAKE_NODE(array[2],6,&array[0],&array[1]) MAKE_NODE(array[1],1,NULL,NULL) MAKE_NODE(array[3],3,&array[5],NULL) MAKE_NODE(array[5],5,NULL,NULL)
    return &array[4]; }
int function2(node_t* root) {
    if(root == NULL) return 0;
    else
        return root->value +
        function2(root->left) + function2(root->right);
}
