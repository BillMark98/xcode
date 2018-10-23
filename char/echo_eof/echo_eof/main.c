//
//  main.c
//  echo_eof
//
//  Created by Bill on 16/11/4.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>

int main()
{
    char ch;
    while((ch = getchar()) != EOF)
        putchar(ch);
    
    return 0;
}
