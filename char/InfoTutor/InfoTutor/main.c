//
//  main.c
//  InfoTutor
//
//  Created by Bill on 2/19/18.
//  Copyright © 2018 Bill. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str[15] = "Hello World!\n";

int main ()
{
    /*
    int Laenge = 0;
    int i = 0;
    char s1[13] = "aer";
    char * strs = (char *) malloc(13*sizeof(char));
    scanf("%s",strs);
    printf("%s\n",strs);
    free(strs);
    printf("%lu\n",strlen(str));
    printf("%c %c %c %c\n",s1[5],s1[6],s1[7],s1[8]);
    /*
    while ( *str++ != '\0' ){
        ++Laenge;
       // i = i+1;
    }
    
    printf("%d: %s", Laenge, str);
    */
    int i,j;
    float matrix[2][2],scalar;
    printf("Please enter number.\n");
    for(i=0;i<2;i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%f",&matrix[i][j]);
        }
    }
    printf("Out.\n");
    for(i=0;i<2;i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%f\t",matrix[i][j]);
        }
        putchar('\n');
    }
    printf("Scalar:\n");
    scanf("%f\n\n",&scalar);
    for(i=0;i<2;i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%f\t",scalar*matrix[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
    return 0;
}

/*
 #include <stdio.h>
 
 char *str = "Hello World!\n";
 
 int main ()
 {
 int Laenge = 0;
 
 while ( *str++ != '\0' ){
 ++Laenge;
 }
 
 str -= Laenge + 1;
 printf("%d: %s", Laenge, str);
 
 return 0;
 }
 */
/*
 #include <stdio.h>
 
 char *str = "Hello World!\n";
 
 int main ()
 {
 int Laenge = 0;
 char *temp = str;
 
 while ( *temp != '\0' ){
 temp++;
 ++Laenge;
 }
 
 printf("%d: %s", Laenge, str);
 
 return 0;
 }*/



