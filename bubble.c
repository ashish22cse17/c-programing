#include<stdio.h>
int main(){
    int i,j,t,a[25],n;
    printf("enter the size of array:");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("enter the value");
        scanf("%d",&a[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("shorted array is:");
    for ( i = 0; i < n; i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;
}