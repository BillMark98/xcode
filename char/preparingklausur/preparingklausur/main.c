//
//  main.c
//  preparingklausur
//
//  Created by Bill on 17/3/21.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
char * string_in(char*,char*);
int main(int argc, const char * argv[]) {
   
    char * str;
    char input[40],output[40];
    
    printf("%.2f\n",pow(2,3));
    return 0;
}
char * string_in(char * father, char * son)
{
    char * ret = NULL;
    bool flag = false;
    
    while(*father)
    {
        if(*father == *son)
        {
            flag = true;
            ret = father;
            while(*son)
            {
                if(*father != *son)
                {
                    flag = false;
                    break;
                }
                father++;
                son++;
            }
            break;
        }
        father++;
        
    }
    return flag ? ret: NULL;
}
