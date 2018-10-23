//
//  main.c
//  pointer
//
//  Created by Bill on 16/11/6.
//  Copyright © 2016年 Bill. All rights reserved.
//

#include <stdio.h>

int main() {
    int i,j;
    int n,m;
    int try[n][m];
    i = 0;
    printf("Enter a matrix.('f' to finish input)\n");
    while(getchar()!='f')
    {
        j=0;
        while(getchar() != '\n')
        {
            scanf("%d",&try[i][j]);
            j++;
        }
        i++;
    }
    n = i+1;
    m = j+1;
    printf("The matrix is:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            printf("%5d",try[i][j]);
    putchar('\n');
    
    printf("Now is the transfer matrix.\n");
    for(j=0;j<m;j++)
    {
        for (i=0;i<n;i++)
            printf("%5d",try[i][j]);
            putchar('\n');
    }
    return 0;
}
