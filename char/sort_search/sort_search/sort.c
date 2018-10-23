//
//  sort.c
//  sort_search
//
//  Created by Bill on 16/11/29.
//  Copyright © 2016年 Bill. All rights reserved.
//
#include <stdio.h>
#include "sort.h"
int binarsuche(int A[],int l,int r,int gesucht)
{
    int k;
    while(l<=r)
    {
        k = (l+r)/2;
        if(A[k]== gesucht)
        {
            break;}
        
        else if(A[k]>gesucht)
            r = k-1;
        else
            l = k+1;
    }
    if(l >r)
        return -1;
    else
        return k;
}


void showchar(int  *lis,int num)
{
    int i;
    
    for(i = 0;i<num;i++)
    {
        printf("%3d", lis[i]);
        if(i%5 ==0)
            putchar('\n');
    }
}

void insertion(int *list,int num)
{
    int i,j;
    int temp;
    for(i = 1;i<num;i++)
    {
        j = i-1;
        temp = list[i];
        while(list[j]>temp && j>=0)
        {
            list[j+1] = list[j];
            printf("%3d,%3d,%3d\n",list[j],list[i],list[j+1]);
            j--;
        }
        list[j+1] = temp;
        printf("%3d,%3d,%3d\n",list[j],list[i],list[j+1]);
    }
}
void bublblesort(int * list, int num)
{
    int i,j;
    for(i=0;i<num;i++)
    {
        for(j=num-1;j>i;j--)
        {
            if(list[j-1]>list[j])
                xchange(list+j-1,list+j);
        }
    }
}

void xchange(int *a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


void sink(int* list, int k, int N)
{
    while(1)
    {
        
        int sons;
        if(2*k>N)
            break;
        if(2*k+1>N)
        {
            sons = 2*k;
        }
        else
        {
            if(list[2*k-1]<list[2*k])
                sons = 2*k;
            else
                sons = 2*k+1;
        }
        
        if(list[k-1]>list[sons-1])
        {
            xchange(list+k-1,list+sons-1);
            k = sons;
        }
        else
            break;
    }
    
}
void heap_sort(int* list,int N)
{
    int i = N/2;
    for(i=N/2;i>0;i--)
    {
        sink(list,i,N);
        
    }
    for(i = N;i>0;i--)
    {
        xchange(list,list+i-1);
        sink(list,1,i);
    }
    
}













