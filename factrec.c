#include<stdio.h>
int fact(int n){
    if (n==0)
    return 1;
    else if (n==1)
    return 1;
    else
    return n*fact(n-1); 
}
int main(){
    int n,fac;
    printf("enter the number:");
    scanf("%d",&n);
    fac=fact(n);
    printf("factorial is %d",fac);
    return 0;
}