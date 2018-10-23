//
//  hotel.c
//  usehotel
//
//  Created by Bill on 16/11/5.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>
#include "hotel.h"
int menu(void)
{
    int code, status;
    printf("\n%s%s\n",STARS,STARS);
    printf("Welcome and please enter a number for the following choice.\n");
    printf("1) Hotel Royal  2) Hotel Super\n");
    printf("3) Hotel Carre  4) Hotel Mond\n");
    printf("5) to quit\n");
    while((status = scanf("%d",&code))!=1 ||
          code<1 || code>5)
    {
        if(status !=1)
            scanf("%*s");
        printf("Please enter a integer between 1 and 5.\n");
        
    }
    return code;
}

int getnights(void)
{
    int nights;
    printf("Enter the days you want to stay here.\n");
    ;
    while((scanf("%d", &nights)) !=1)
    {
        printf("Please enter one.\n");
        scanf("%*s");
    }
    return nights;
}

void showprice(double rate, int nights)
{
    int q;
    double total = 0.0;
    double factor = 1.0;
    
    for(q = 1;q <=nights; q++,factor *= DISCOUNT)
        total += rate*factor;
    printf("THE price is $%.2f", total);
}
