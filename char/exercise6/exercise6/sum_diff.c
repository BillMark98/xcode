//
//  main.c
//  exercise6
//
//  Created by Bill on 16/11/5.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>
#include "the_biggest.h"
void sum_diff(int*,int*);
int main(void) {
    int a,b;
    printf("Enter two numbers for analyse:('q'to quit)\n");
    while((scanf("%d %d",&a,&b)==2))
    {
        sum_diff(&a,&b);
        printf("The first represent the sum: %d \n", a);
        printf("The second represent the difference: %d\n",b);
        while(getchar()!='\n')
            continue;
        printf("One more time\n");
    }
    
     aha();
    printf("Bye.\n");
    return 0;
}
void sum_diff(int * u,int * v)
{
    int sum,diff;/* 其实可以只要一个变量，想想 */
    sum = *u + *v;
    diff = *u - *v;
    *u = sum;     /*甚至可以不要多余变量*/
    *v = diff;
}
