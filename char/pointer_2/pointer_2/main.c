#include<stdio.h>
#include<string.h>

void exchange(int*a, int*b)
{
    int temp;
    printf("%d, %d\n", *a, *b);
   temp =  *a;
    *a = *b;
    *b = temp;
    printf("%d, %d\n", *a, *b);
}

int partition(int a[], int l, int r)
{
    int i,j,k,v;
    int si;
    k = r;
    v = a[k];
    i = l;
    j = r - 1;
    
    while(1)
    {
        while(i< r && a[i] <= v) i++;
        while(j >= l && a[j] >= v) j--;
        
        if(i >= j)
        {
            break;
        }
        else
        {
            for(si = 0; si<= r;si++)
                printf("%3d",a[si]);
            putchar('\n');
            printf("%d %d\n", *(a+i),*(a+j));
            exchange((a+i),(a+j));
            
        }for(si = 0; si<= r;si++)
                printf("%3d",a[si]);
            putchar('\n');
    }
    
    exchange((a+i),(a+k));
    return i;
}

void quick_sort(int A[], int l, int r)
{
    int k;
    if (r <= l) return;
    
    k = partition(A,l,r);
    
    quick_sort(A,l, k-1);
    
    quick_sort(A,k+1,r);
}


int main()
{
    int a[8]={45,12,77,23,76,11,83,66};
    int l = 0;
    int r = 7;
    
    quick_sort(a,l,r);
    
    int i;
    for(i = 0; i<8;i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n");
    
    return 0;
    
}

