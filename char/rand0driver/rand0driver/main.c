//
//  main.c
//  rand0driver
//
//  Created by Bill on 16/11/18.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>
#include <time.h>
extern int rand0(void);
void change(int);
int main() {
    
    int count;
    int co;
    printf("Enter number to continue\n");
    while((scanf("%d",&co))==1)
    {
    change((int) time(0));
        for(count = 0;count<5;count++)
        {
            
            printf("%d\n",rand0());
        }
        printf("One more.\n");
    }
    return 0;
}
