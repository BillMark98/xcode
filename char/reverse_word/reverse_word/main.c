//
//  main.c
//  reverse_word
//
//  Created by Bill on 16/11/25.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define LEN 80
int main()
{
    char str[LEN] ="see you later";
    char temp;
    int len=strlen(str)-1;
    int i,j,wordlen;
    puts(str);
    for(i=0;i<len-i;i++)
    {
        temp = str[i];
        str[i] = str[len -  i];
        str[len - i] = temp;
    }
puts(str);

wordlen=0;
i=0;
do
{
if(!isspace(str[i])&&str[i]!='\0')

                wordlen++;
            else
            {
                    if(wordlen> 0)
                    {
                        for(j=0;j<wordlen-j;j++)
                            {
                                temp = str[i-1-j];
                                str[i-1-j] = str[i-wordlen+j];
                                str[i-wordlen+j] = temp;
                            }
                        wordlen = 0;
                        
                    }
            }
}while(str[i++]!='0');
    puts(str);
    return 0;
}

