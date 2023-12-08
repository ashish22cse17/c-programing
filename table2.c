#include<stdio.h>
int main()
{
    int i,j,a=1;
    for(i=1;i<=100;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d*%d=%d\n",a,j,a*j);
        }
        a++;
        printf("\n");
    }
    return 0;
}