#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        
        for (int  j = 1; j <= i; j++)
        {
            int a=2;
            a=a*j;
            printf("%d  ",a);
        }
        printf("\n");
    }
    return 0;
}