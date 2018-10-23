
//
//  names.c
//  char_try
//
//  Created by Bill on 17/1/19.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include "names.h"

void getname(Names * pname)
{
    
    int i = 0;
    char *find;
    printf("Please enter first name.\n");
    fgets(pname->fname,SIZE,stdin);
#ifdef qm
    
    while(pname->fname[i]!='\n' && pname->fname[i]!='\0')
        i++;
    if(pname->fname[i] == '\n')
        pname->fname[i] = '\0';
    else
        while(getchar() != '\n')
            continue;
#endif
    find = strchr(pname->fname,'\n');
    if(find)
        *find = '\0';
    printf("Please enter your last name.\n");
    fgets(pname->lname,SIZE,stdin);
    i = 0;
#ifdef qer
    
    while(pname->lname[i]!='\n' && pname->lname[i]!='\0')
        i++;
    if(pname->lname[i] == '\n')
       pname->lname[i] = '\0';
    else
        while(getchar() != '\n')
            continue;
#endif
    find = strchr(pname->lname,'\n');
    if(find)
        *find = '\0';
    printf("End.\n");
}

void showname(Names person)
{
    printf("Welcome %s %s.\n",person.fname,person.lname);
}
