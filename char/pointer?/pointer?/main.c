//
//  main.c
//  pointer?
//
//  Created by Bill on 17/1/24.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <stdio.h>
typedef struct stu1{
     int m;
         int n;
}stu1;
 typedef struct stu2{
char c1;
         char c2;
     } stu2;
void turnb(int);
int main(void) {
#ifdef qwer
    
         struct stu1 s1;
         struct stu2 s2;
         s1.m = 815;  //11 00101111
         s1.n = 600;  //10 01011000
         s2 = *((struct stu2 *)&s1);
         printf("%d, %d, \n", s2.c1, s2.c2);
         int a = 559; //10 00101111
         char c = (char)a;
         printf("%d\n", c);
         s1.m = 559;
         s2 = *((struct stu2 *)&s1);
        printf("%d, %d, \n", s2.c1, s2.c2);
#endif
    int qq = 600;
    turnb(qq);
    putchar('\n');
    stu2 ch;
    ch = *((struct stu2 *)&qq);
    turnb(ch.c1);
    putchar('\n');
    turnb(ch.c2);
    putchar('\n');
    printf("c1:%d, c2: %d \n",ch.c1,ch.c2);
    
    putchar('\n');
    return 0;
}
void turnb(int q)
{
    int r;
    if(q<=1)
        putchar('0'+q);
    else
    {
        r = q % 2;
        turnb(q/2);
        putchar('0'+r);
    }
}
