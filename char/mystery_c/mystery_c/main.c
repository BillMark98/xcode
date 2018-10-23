#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertion_sort(int A[],int l, int r);
void quick_sort(int A[],int l, int r,int k);
int partition(int A[],int l, int r);
void quicksort_2(int A[],int l, int r, int k);
void show_array(int A[],int num);
int main(int argc, char * argv[])
{
    int num;
    int i;
    printf("Please enter the number of the random array");
    scanf("%d",&num);
    srand((unsigned)time(NULL));
    while(getchar()!='\n')
        continue;
    int arr[num];
    
    for(i = 0; i < num; i++)
    {
        arr[i] = rand()%20;
        printf("%d %d\n",i+1,arr[i]);
    }
    time_t start1,end1,start2,end2;
    printf("Before\n");
    for(i = 0; i < num; i++)
    {
        printf("%7d",arr[i]);
        if( !(i%6))
            putchar('\n');
    }
    return 0;
}
