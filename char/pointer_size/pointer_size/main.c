#include<stdio.h>
#include<stdlib.h>
#define SQUARE(x)
int main()
{
    /*
    int ** a;
    int i;
    int (* b)[5] = (int(*)[5])malloc(3*5* sizeof(int));
    a=(int**)malloc(sizeof(int*)*3);
    for(i=0;i<3;i++)
        a[i]=(int*)malloc(sizeof(int)*5);
    //a = (int**) malloc(3 * sizeof(int*));

    //for( i = 0; i < 3; i++)
      //  a[i] = (int*) malloc(5 * sizeof(int));
   // printf("The a has address : %p, a+1 : %p\n",a,a++);
    //printf("The b has address : %p, b+1 : %p\n",b,b++);
    printf("The a has address : %p, \n",a);
    printf("The b has address : %p \n",b);
    for(i = 0; i < 3; i++)
        free(a[i]);
    free(a);
    free(b);
     */
    
    int a = 2;
    int  b = (++a)*(++a);
    printf("%d\n",b);
}
 /*
int main()
{
    int **a;  //用二级指针动态申请二维数组
    int i,j;
    int m,n;
    printf("请输入行数\n");
    scanf("%d",&m);
    printf("请输入列数\n");
    scanf("%d",&n);
    a=(int**)malloc(sizeof(int*)*m);
    for(i=0;i<m;i++)
        a[i]=(int*)malloc(sizeof(int)*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%p\n",&a[i][j]);     //输出每个元素地址，每行的列与列之间的地址时连续的，行与行之间的地址不连续
        }
    }
    for(i=0;i<m;i++)
        free(a[i]);
    
    free(a);
    return 0;
}
*/
