#include<stdio.h>
int sum(int n){
    if(n<1)
    return n;
    else
    return n+sum(n-1);
}
int main(){
    int x;
    printf("x=");
    scanf("%d",&x);
    int sum(int x);
    printf("sum is %d\n",sum(x));
    return 0;
}