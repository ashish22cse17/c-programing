#include<stdio.h>
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    if(n==0)
    printf("number %d is zero\n",n);

    else{
    if (n<0)
    {
        printf("number %d is negative\n",n);
    }
    else
    {
        printf("number %d is positive\n",n);
    }
    }
    return 0;
    
}