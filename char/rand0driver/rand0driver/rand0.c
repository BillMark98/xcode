//
//  rand0.c
//  rand0driver
//
//  Created by Bill on 16/11/18.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>
static unsigned long int next = 1;
int rand0(void)
{
    next = next*1103515245+ 12345;
    return (unsigned int) (next/65536)%32768;
}
void change(int seed)
{
    next = seed;
    
}
