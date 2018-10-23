//
//  names.h
//  char_try
//
//  Created by Bill on 17/1/19.
//  Copyright © 2017年 Bill. All rights reserved.
//


#ifndef names_h
#define names_h

#include<stdio.h>
#include<string.h>
#define SIZE 10
typedef struct names{
    char fname[40];
    char lname[40];
}Names;

void getname(Names*);
void showname(Names);
#endif
