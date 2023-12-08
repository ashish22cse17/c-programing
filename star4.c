#include<stdio.h>
int main(){
    int n;
    printf("enter the no of row :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1;j<=n ; j++)
        {
            if (j<=n-i)
            {
                printf(" ");
            }
            else
            {
                for (int p = 1; p <= j; p++)
                {
                   printf("%d",p);
                }  
            }
        }
        printf("\n");
    }
    return 0;
}