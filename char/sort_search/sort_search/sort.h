//
//  sort.h
//  sort_search
//
//  Created by Bill on 16/11/29.
//  Copyright © 2016年 Bill. All rights reserved.
//


#include <stdio.h>
#ifndef sort_h
#define sort_h

int binarsuche(int A[],int l,int r,int gesucht);
void showchar(int *,int num);
void insertion(int *list,int num);
void bublblesort(int * list, int num);
void xchange(int *a,int* b);
void heap_sort(int* list,int N);
void sink(int* list, int k, int N);
#endif /* sort_h */
