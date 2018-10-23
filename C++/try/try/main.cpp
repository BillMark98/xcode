//
//  main.cpp
//  try
//
//  Created by Bill on 11/20/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
//#include <stdio.h>
#define N 7
void ausgabe(int A[], int n);
int main(int argc, const char * argv[]) {
    /*int koeff[N];
    int i = 0, j = 0;
    for(i=0; i<N;i++) koeff[i] = 0;
    for(i = 0; i < N; i++)
    {
        koeff[(N-1-i)/2] = 1;
        koeff[(N-1+i)/2] = 1;
        if((i+N)%2)
            for(j=(N-1+i)/2-1; j>(N-1-i)/2;j--) koeff[j] += koeff[j-1];
        else
            for(j=(N-1-i)/2+1;j<(N-1+i)/2;j++) koeff[j] += koeff[j+1];
        ausgabe(koeff,N);
        std::cout << std::endl;
    }*/
    char * ar[10];
    char c = 'c';
    ar[0] = &c;
    std::cout << ar[0]<<std::endl;
    char * ch;
    ch = &c;
    printf("%p %c\n",ch,*ch);
    std::cout << *ch <<std::endl;
    return 0;
}
void ausgabe(int A[], int n)
{
    for(int i = 0; i< n; i++)
    {
        //std::cout << A[i] << "  " ;
        if(i % 6 == 5)
        {//  std::cout << std::endl;
        }
    }
}
