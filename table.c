#include<stdio.h>
int main(){
    int n,i=1,m;
    printf("enter the value of n =");
    scanf("%d",&n);
    do
    {
        m=n*i;
        printf("%d * %d = %d\n",n,i,m);
        i=i+1;
    } while (i<=10);

    return 0;
    
}