//
//  main.c
//  usehotel
//
//  Created by Bill on 16/11/5.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>
#include "hotel.h"
int main()
{
    int nights;
    double hotel_rate;
    int code;
    while ((code = menu()) != 5)
    {
        switch(code)
        {
            case 1: hotel_rate = Royal;
                break;
            case 2: hotel_rate = Super;
                break;
            case 3: hotel_rate = Carre;
                break;
            case 4: hotel_rate = Mond;
                break;
            default: hotel_rate = 0.0;
                printf("Oops!\n");
                break;
        }
        nights = getnights();
        showprice(hotel_rate,nights);
        
    }
    printf("Thank you and goodbye.\n");
    return 0;
}
