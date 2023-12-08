#include<stdio.h>
int main(){
    int m,n,p,q;
    int a[10][10],b[10][10],c[10][10];

printf("-------->>>------>>FIRST MATRIX<<<------<<----------\n");

    printf("enter first matrix order :");
    scanf("%d\n%d",&m ,&n);
    printf("order of matrix is %d * %d\n",m,n);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("enter element of =");
            scanf("%d",&a[i][j]);
        } 
    }
    printf("your first matrix is\n");
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

printf("-------->>>------>>SECOND MATRIX<<<------<<----------\n");


    printf("enter second matrix order :");
    scanf("%d\n%d",&p ,&q);
    printf("order of matrix is %d * %d\n",p,q);
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= q; j++)
        {
            printf("enter element of =");
            scanf("%d",&b[i][j]);
        } 
    }
    printf("your second matrix is\n");
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

    // if (n==p)
    // {
    //    printf("your matrix is of order %d * %d",m,q);
    //    for (int i = 1; i <= m; i++)
    //    {
    //     for (int j =1; j <= q; j++)
    //     {
    //         c[i][j]=a[1][1]*b[1][1] +a[1][2]*b[2][1] + a[1][3]*b[3][1]
    //     }
    //     printf("\n");
    //    }
       

    // }
    // else
    // printf("matrix can't be calculated");
    
    return 0;
}