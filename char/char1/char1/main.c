//
//  main.c
//  char1
//
//  Created by Bill on 16/10/24.
//  Copyright © 2016年 Bill. All rights reserved.
//

 #include <stdio.h>
#include <ctype.h>

#include <stdbool.h>
#define SIZE 10
int sump(int*,int*);

int main() {
    /*long sumof;

    int list[10] = {1,2,3,4,5,6,7,8,9,10};
    
    sumof = sump(list,list+SIZE);
    printf("%ld\n",sumof);
    printf("%zd is the size of array.\n",sizeof list);
     */
    char c;

    printf("Enter a character.\n");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
            break;
        case 'b':
            printf("Banana.\n");
            break;
        case 'c': ;

            int q = 2;
            q++;
            printf("q = 3: %d\n",q);
            
            
            break;
        
        case 'd':
            
            q = 4;
            printf("q = 4: %d\n ",q);
        
            break;
    }
    return 0;
}
int sump(int*start, int * end)
{
    int total=0;
    while (start<end)
    {
        total+= *start++;
    }
    printf("The size of list is %zd bytes.\n",sizeof start);
    return total;
}


