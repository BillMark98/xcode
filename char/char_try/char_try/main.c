//
//  main.c
//  char_try
//
//  Created by Bill on 17/1/7.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
int calcu(const char*);
int calcuopen(int);
int giveback(int,int);
char * itobs(int ,char*);
void phe();
void f3(int *,int *);
int * halb(int * zahl);
void ToUpper(char*);
#define LIMIT 20
#define Square(x) ((x)*(x))
#define PX printf("Evaluating: %d\n",q)
#define PX1(x) printf("the result is %d\n",x);
#define FO "Evaluating new: %d\n"
#define XN(n) x ## n
#define PX7(x,...) printf("Message" #x ":" __VA_ARGS__)
#define PXX(n) printf("x" #n " is equal %d\n",x ## n)
#include "names.h"
int main()
{
#ifdef namet
    
    int q,p;
    /*char num[10];
    printf("Give a string.\n");
    gets(num);
    printf("The value is %d.\n",q = calcu(num));
    printf("The open bits are %d.\n",calcuopen(q));*/
    
    /*printf("enter a num.\n");
    scanf("%d",&q);
    while(getchar()!= '\n')
        continue;
    
    printf("enter the position.\n");
    scanf("%d",&p);
    printf("The result.%d\n",giveback(q,p));*/
    /*q = 3;
    p = 5;
    printf("before, p:%4d,q:%4d.\n",p,q);
    q = q^p;
    p = q^p;
    q = q^p;
    printf("after, p:%4d,q:%4d.\n",p,q);
    */
    
    
    q = 8;
    p = 10;
    PX7(1,"x = %d\n",q);
#ifdef SHOW
    printf("Hello there.\n");
#else
    printf("Sorry. can't see above.\n");
#endif
    PX7(2,"y = %d\n",p);
    
#endif
   // Names person;
   /* printf("The programm will be tested.\n");
    getname(&person);
    showname(person);
    */

#ifdef qwer
    char lines[40] = "hello world.";
    char * strq = lines;
    ToUpper(strq);
    puts(strq);
    puts(lines);
    
#endif
    int a[8] = {1, 2, 3, 4,5,6,7,8};
    int *ptr = a;
    int *ptr2;
    printf("%p\n",ptr);
    ptr = (int*)(&a+1);
    printf("%p\n",ptr);
    printf("%d\n",ptr[-2]);
    ptr2 = a;
    printf("%p\n",ptr2);
    ptr2 = a+1;
    printf("%p\n",ptr2);
    

    return 0;
    
}
int calcu (const char* p)
{
    int val = 0;
    
    while(*p)
    {
        val = 2*val + (*p++ -'0');
    }
    return val;
}

int calcuopen(int pp)
{
    int val = 0;
    while(pp)
    {
        val += pp & 01;
        pp >>= 1;
    }
    return val;
}
int giveback(int a, int b)
{
    a >>= b;
    return 0+ (a&01);
}
char * itobs(int q, char * pt)
{
    static const int size = 8*sizeof(int);
    int i;
    for(i = size -1; i>= 0; i--,q >>= 1)
    {
        pt[i] = '0' + (q&01);
    }
    pt[size] = '\0';
    return pt;
}
void phe()
{
    printf("Hello world.\n");
}
void f3(int * a, int * z)
{
    *a = 2;
    z = 5;
}
int * halb(int * zahl)
{
    int * ergebnis;
    //ergebnis = &(*zahl/2);
    return ergebnis;
}
void ToUpper(char* str)
{
    while(*str)
    {
        *str = toupper(*str++);
        
    }
}
