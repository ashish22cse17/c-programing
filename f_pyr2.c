#include<stdio.h>
void pyr2(int n);
void main(){
    int n;
    printf("enter the no of row =");
    scanf("%d",&n);
    pyr2(n);
}
void pyr2(int n){
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= ((2*n)-1); j++)
        {
            if (j>(n-i)&&j<(n+i))
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    
}