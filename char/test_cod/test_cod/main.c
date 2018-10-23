//
//  main.c
//  test_cod
//
//  Created by Bill on 17/1/2.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "roller.h"
#include <time.h>
#include <stdlib.h>
#define MAX 81
#define ANS "GRANT"
void put1(const char*);/* puts 2.0 without adding \n automatically */
char * getupper(char *);
struct film
{
    char fname[MAX];
    int rating;
    struct film* next;
};
int main() {
    char input[MAX];
    struct film * head = NULL;
    struct film * prev, *current;
    puts("Enter a film name.");
    while(gets(input)!= NULL && input[0]!='\0')
    {
        char ch;
        current = (struct film*) malloc(sizeof (struct film));
        if(head == NULL)
            head = current;
        else
            prev-> next = current;
        strcpy(current->fname,input);
        puts("Enter your rating.");
        scanf("%d",&current->rating);
        while((ch = getchar())!= '\n')
              continue;
        current ->next = NULL;
        prev = current;
        puts("Enter another one.");
    }
    puts("The film info entered.");
    if(head == NULL)
        puts("No data entered.");
    else
    {
        current = head;
        while(current )
        {printf("film name: %s"
               "rating: %2d",current->fname,current->rating);
            current = current->next;
            putchar('\n');
        }
    }
    current = head;
    while(current)
    {
        free(current);
        
        puts(current->fname);
        current = current->next;
    }
    
    return 0;
    }



void put1(const char* pt)
{
    while(*pt != '\0')
        putchar(*pt++);
}
char * getupper(char * str)
{
    while(*str)
    { *str = toupper(*str);
    str++;
    }
    return( str);
}
