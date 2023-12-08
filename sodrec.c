#include<stdio.h>
int sum(int n){
    if(n/10==0)
    return n;
    else
    return sum(n%10)+ sum(n/10);
}

int main(){
    int digit;
    printf("Digit=");
    scanf("%d",&digit);
    printf("sum of digit is %d\n",sum(digit));
    return 0;
}