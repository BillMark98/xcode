//
//  main.c
//  randnum_sort
//
//  Created by Bill on 16/11/19.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LIM 10

void get_num(int *,int );
void show_num(int*,int);
void sort_num(int*,int);
int main(int argc, const char * argv[]) {
    int lines[LIM];
    printf("Will generate ten random numbers.\n");
    
    srand((unsigned int)time(0));
    get_num(lines, LIM);
    show_num(lines, LIM);
    printf("Now sorted:\n");
    sort_num(lines,LIM);
    show_num(lines,LIM);
    printf("Done.\n");
    return 0;
}
void get_num(int * lines,int num)
{
    int i;
    for(i = 1;i<=num;i++)
    {
        int n;
        n = rand()%10+1;
        *lines = n;
        lines++;
    }
}
void show_num(int * lines, int num)
{
    int i;
    for(i = 0;i<num;i++)
        printf("%5d",lines[i]);
    putchar('\n');
}
void sort_num(int * lines ,int num)
{
    int i,seek;
    for(i=0;i<num-1;i++)
    {
        for(seek = i+1; seek <num; seek ++)
        {
            int temp;
            if(lines[seek]>lines[i])
            {
                temp = lines[seek];
                lines[seek] = lines[i];
                lines[i] = temp;
            }
        }
    }
}
