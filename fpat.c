#include<stdio.h>
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= ((2*n)-1); j++)
        {
            if (j>n-i&&j<n+i)
            {
                printf(" *");
            }
            else
            printf("  ");
        }
        printf("\n");
        
    }



   

    
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= ((2*n)-1); j++)
        {
            if (j>n-i+1&&j<n+i-1)
            {
                printf("  ");
            }
            else
            printf(" *");
        }
        printf("\n");
        
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= ((2*n)-1); j++)
        {
            if (j>=n-i+1&&j<=n+i-1)
            {
                printf("  ");
            }
            else
            printf(" *");
        }
        printf("\n");
        
    }




    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= ((2*n)-1); j++)
        {
            if (j>n-i&&j<n+i)
            {
                printf(" *");
            }
            else
            printf("  ");
        }
        printf("\n");
        
    }
    return 0;
}