//
//  main.c
//  decimal_binary
//
//  Created by Bill on 16/12/28.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>

void dtob(int);
void dtob2(int);
void dtor(int,int);
#define MASK  01
int count = 0;
int main() {
    int n;
    int base;
    printf("give a number.\n");
    scanf("%d",&n);
    printf("give a base.\n");
    scanf("%d",&base);
    printf("now to the appropriate form.\n");
    dtor(n,base);
    
    putchar('\n');
    
    return 0;
}
void dtob(int a)
{
 
    if (a != 0)
    {
        
        dtob(a>>1);
        
        a &= MASK;
        putchar('0'+a);
        
    }
    
}
void dtob2(int a)
{
    if (a>1)
        dtob2(a/2);
    putchar('0'+a%2);
    
        
}
void dtor(int n, int q)
{
    if(n >= q)
        dtor(n/q,q);
    putchar('0'+n%q);
}

