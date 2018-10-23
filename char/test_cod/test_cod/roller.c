//
//  roller.c
//  test_cod
//
//  Created by Bill on 17/1/6.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include "roller.h"
#include <stdio.h>
#include <stdlib.h>

int roll_em_count;
static int roller_count( int sides)
{
    int q;
    roll_em_count ++;
    return q = rand()%sides + 1;
}

int roller(int sides,int times)
{
    int total = 0;
    if(sides < 2)
    {
        printf("Don't play me. At least 2 sides.\n");
        return -2;
    }
    if(times<1)
    {
        printf("Are you nuts. At least 1 time.\n");
        return -1;
    }
    for(int i = 0; i< times; i++)
    {
        total += roller_count(sides);
        
    }
    return total;
}
