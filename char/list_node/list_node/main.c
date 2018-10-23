//
//  main.c
//  list_node
//
//  Created by Bill on 16/12/6.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i;
    for(i = 0;i<5;i++)
    {
        if(i==3)
            break;
        
    }
    printf("%d\n",i);
    int j=0;
    while(j<5)
    {
        if(j==3)
            break;
        j++;
    }
    printf("%d\n",j);
    return 0;
}
