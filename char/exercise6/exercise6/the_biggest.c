//
//  the_biggest.c
//  exercise6
//
//  Created by Bill on 16/11/5.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include "the_biggest.h"

#include <stdio.h>
int the_biggest(int*,int*,int*);
int aha(void){
    int a,b,c;
    int max;
    printf("Enter three integers:\n");
    scanf("%d %d %d",&a,&b,&c);
    max = the_biggest(&a,&b,&c);
    printf("The biggest is %d\n", max);
    return 0;
}
int the_biggest(int*u,int*v,int*w)
{
    int max;
    max = (*u > *v) ? *u: *v;
    max = (max > *w) ? max : *w;
    return max;
}
