//
//  main.c
//  trycod
//
//  Created by Bill on 16/11/25.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"
void showmovies(Item item);
int main()
{
    Item item;
    List movies;
    
    Initialize(&movies);
    puts("Please enter the film name.");
    while(gets(item.fname) != NULL && item.fname[0] != '\0')
    {
        puts("Please enter the scoring.");
        scanf("%d",&item.rating);
        while(getchar()!= '\n')
            continue;
        if(ListIsFull(&movies))
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
    if(ListIsEmpty(&movies))
        printf("No data entered.\n");
    else
    {
        printf("%u info entered.\n", ListItemCount(&movies));
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
