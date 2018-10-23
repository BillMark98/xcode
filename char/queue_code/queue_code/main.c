//
//  main.c
//  queue_code
//
//  Created by Bill on 17/1/7.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "queue.h"
void showmovies(Item item);
int main()
{
    Item item;
    Queue movies;
    
    Initialize(&movies);
    puts("Please enter the film name.");
    while(gets(item.fname) != NULL && item.fname[0] != '\0')
    {
        puts("Please enter the scoring.");
        scanf("%d",&item.rating);
        while(getchar()!= '\n')
            continue;
        if(QueueIsFull(&movies))
        {
            puts("Sorry. The list is full.");
            break;
        }
        else if ((AddItem(item,&movies)))
        {
            puts("Succeed Adding.");
            puts("Enter another film name.");
        }
        
    }
    if(QueueIsEmpty(&movies))
        printf("No data entered.\n");
    else
    {
        printf("%u info entered.\n", QueueItemCount(&movies));
        printf("The entered list.\n");
        Traverse(&movies, showmovies);
    }
    Cleanup(&movies);
    puts("Bye.");
    return 0;
}
void showmovies(Item item)
{
    printf("film name: %s\n"
           "rating: %d\n", item.fname,item.rating);
}

