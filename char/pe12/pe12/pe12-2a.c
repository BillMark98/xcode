//
//  pe12-2a.c
//  pe12
//
//  Created by Bill on 16/11/19.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include "pe12-2a.h"

static int mode;
static float distance;
static float consumption;
void set_mode(int q)
{
    if(q ==1 || q ==0)
    {
        mode = q;
    }
    else if(abs(q-1)>abs(q))
    {
        printf("Invalid mode specified. Mode 0(UK) used.\n");
        mode = 0;
    }
    else
    {
        printf("Invalid mode specified. Mode 1(US) used.\n");
        mode = 1;
    }
}
void get_info(void)
{
    if(mode ==0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%f",&distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%f",&consumption);
        
    }
    else
    {
        printf("Enter distance traveled in miles: ");
        scanf("%f",&distance);
        printf("Enter fuel consumed in gallon: ");
        scanf("%f",&consumption);
    }
}

void show_info(void)
{
    if(mode)
    {
        printf("Fuel consumption is %.2f miles per gallon.\n", (double)distance/consumption);
        
    }
    else
    {
        printf("Fuel consumption is %.2f kilometers per liters.\n", (double)distance/consumption);
    }
}










