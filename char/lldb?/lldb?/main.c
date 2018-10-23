//
//  main.c
//  lldb?
//
//  Created by Bill on 17/2/13.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <stdio.h>
#include<string.h>
#include <time.h>
#include <ctype.h>
enum color {red,blue,white,yellow};
enum color spe;
enum color *spe_t;
void mirror(int n,int arr[n][n]);
void showMatrix(int n, int arr[n][n]);
void incme(int *);
extern  const int able;
const int able = 12;

#include <stdlib.h>
#define LEN 20
union hold{
    int num;
    char c;
    double guess;
};

char * goupper(char *str)
{
    char * temp = str;
    while(*temp)
        
    {
        *temp = toupper(*temp);
        temp++;
        
    }
    return str;
    
}

void sign_off(void)
{
    puts("Thus terminates another magnificent programm from");
    puts("SeeSaw Software!");
}
void toobad(void)
{
    puts("SeeSaw extends its heartfelt condolences");
    puts("to you upon the failure of your program.");
}
void show_ar(int n, int m, int arr[n][m])
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            printf("%3d",arr[i][j]);
        putchar('\n');
    }
}
void get_arr(int n, int m, int arr[n][m]);
void double_arr(int n, int m, int arr[n][m])
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            arr[i][j] *=2;
        
    }
}
double average_line(int n, int arr[]);
double average_whole(int n, int m, int arr[n][m]);
int biggest_arr(int n, int m, int arr[n][m]);
int my_atoi(char*,int n);
void show_array(int arr[],int n);
int mycomp(const void*,const void*);
int main()
{
  /*  int *arr[2][2];
    int *(*jp)[2];
    jp = arr;
    int arr1[2][2];
    int (**pq)[2];
    int (*pqp)[2];
    pq = &pqp;
    pqp = arr1;
   
    
    
    
    int arr2[2][2][2];
    int (**pt)[2];
    int (*pp)[2][2];
    int **p1;
    pp = arr2;
    pt = &(&arr2[0][0]);
    p1 =&(arr[0][1]);

    
    printf("arr: %p\n",arr);
    printf("&arr: %p\n",&arr);
    printf("jp:%p\n",jp);
    printf("jp+1: %p\n",jp+1);*/
   /* int arr[3][4];
    double average;
    get_arr(3, 4, arr);
    show_ar(3, 4, arr);
    average = average_line(4, arr[2]);
    printf("%.2f\n",average);
    printf("the average: %.3f\n",average_whole(3, 4, arr));
    printf("The biggest:%.3d\n",biggest_arr(3, 4, arr));*/
    char * s1 = "hello";
    char * s2 = "world";
    char * s3 = "hello";
    printf("%p\n",s1);
    printf("%p\n",s3);
    printf("/*%-30.3s*/\n",s2);
    return 0;
}

void mirror(int n,int arr[n][n])
{
    int i,j;
    for(i = 0;i<n-1;i++)
    {
        for(j = 0;j<n-1-i;j++)
        {
            arr[i][j] = arr[n-1-i][n-1-j];
        }
    }
    
    showMatrix(n, arr);
}
void showMatrix(int n, int arr[n][n])
{
    int i,j;
    for(i = 0;i<n;i++)
{
    for(j = 0;j<n;j++)
    {
        printf("%5d",arr[i][j]);
    }
    putchar('\n');
}
    
}

void incme(int * q)
{
    printf("in the incme: %d\n",*q);
    
    (*q) ++;
    
}
void get_arr(int n, int m, int arr[n][m])
{
    for(int i = 0;i<n;i++){
        printf("Enter an array\n");
        for(int j = 0;j<m;j++)
            scanf("%d",arr[i]+j);
        scanf("%*s");
    }
}
double average_line(int n, int arr[])
{
    double average = 0;
    for(int i = 0;i<n;i++)
    {
        average +=arr[i];
        
    }
    return (double)average/n;
}
double average_whole(int n, int m, int arr[n][m])
{
    double average = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++)
            average += arr[i][j];
        
    }
    return (double)average/(n+m);
}
int biggest_arr(int n, int m, int arr[n][m])
{
    int large = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
         if(arr[i][j] > large)
             large = arr[i][j];
        }
    }
    return large;
}
int my_atoi(char * str,int n)
{
    int value=0,temp = 0;
    while(*str)
    {
        if(isalnum(*str))
        {if(!isalpha(*str))
        {   value *= n;
            value += *str-'0';
        }
            else if((temp = *str - 'a' ) < n-10)
            {   value *= n;
                value += temp+10;
            }
        }
        str++;
        
    }
    return value;
}
void show_array(int arr[],int n)
{
    int i = 0;
    for(i = 0; i<n;i++)
    {
        if(i%5 == 0)
            putchar('\n');
        printf("%5d",arr[i]);
    }
    if(!(i%5))
        putchar('\n');
}
int mycomp(const void * a1, const void * a2)
{
    const int * p1 = (const int *) a1;
    const int *p2 = (const int *) a2;
    if(*p1 < *p2)
        return 1;
    else if(*p1 == *p2)
        return 0;
    else
        return -1;
    
}
