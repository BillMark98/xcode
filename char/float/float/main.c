//
//  main.c
//  float
//
//  Created by Bill on 17/1/30.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#define XNAME(n) x##n
#define LEN 20
#define PX(x,...) printf("Message"#x ":" __VA_ARGS__)

typedef struct {
    double x;
    double y;
    
}RECT_V;
typedef struct{
    double magnitude;
    double angle;
}POLAR_V;
int test(int,int,int);
int* str(int*);
POLAR_V rect_to_polar(RECT_V);
void init(int*,int);
void show_arr(int*,int);
int mycomp(const void*,const void *);
int main() {
#ifdef Mac
    int a,b;
    a = 1;
    b = 2;
    int * pt1,*pt2;
    pt1 = &a;
    pt2 = &b;
    printf("%+3.4d\n",a);
    printf("%d % d\n",-42,-42);
    printf("%p %p \n",pt1,pt2);
    long c,d;
    long * cp,*dp;
    cp = &c;
    dp = &d;
    printf("%td\n",pt2-pt1);
    printf("%p %p \n",cp,dp);
    printf("%td\n",cp-dp);
    
    double dd;
    printf("Put in!!\n");
    scanf("%lf",&dd);
    printf("stupid: %.2e\n",dd);
#endif
  /*
    RECT_V vector;
    POLAR_V vecp;
    puts("Enter x and y -coordinate.\n");
    while((scanf("%lf %lf",&vector.x,&vector.y))==2)
    {
        vecp = rect_to_polar(vector);
        printf("The length and angle : %.2f, %.2f\n",vecp.magnitude,vecp.angle);
    }*/
    
    int arr[LEN];
    srand((unsigned int) time(0));
    init(arr,LEN);
    printf("The result.\n");
    show_arr(arr, LEN);
    int arr2[LEN];
    printf("Mmcopy.\n");
    memcpy(arr2,arr,LEN*sizeof(int));
    printf("The arr2\n");
    show_arr(arr2,LEN);
        return 0;
}
POLAR_V rect_to_polar(RECT_V a)
{
    POLAR_V temp;
    temp.magnitude = sqrt(a.x*a.x + a.y*a.y);
    temp.angle = atan2(a.y,a.x);
    return temp;
}
void init(int* str,int n)
{
    for(int i = 0;i<n;i++)
    {
        str[i] = (int)rand()%400+1;
        
    }
}
void show_arr(int* str, int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%7d",str[i]);
        if(i%6 == 5)
            putchar('\n');
    }
    putchar('\n');
}
int mycomp(const void * p1, const void* p2)
{
    const int * a1 = (const int *) p1;
    const int * a2 = (const int *) p2;
    if(*a1 < *a2)
        return -1;
    else if(*a1 == *a2)
        return 0;
    else
        return 1;
    
}
int * str(int * s)
{
    for(int i = 0;i<10;i++)
        printf("%3d",s[i]);
    return s;
}
int test(int a, int b,int c)
{
    int max = a>b?a>c?a:c:b>c?b:c;
    return max;
}
