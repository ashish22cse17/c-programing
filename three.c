#include<stdio.h>
int main(){
    int digit,ones,tens,hundred,sum,x;
    printf("digit=");
    scanf("%d",&digit);
    printf("Digit =%d",digit);
    hundred=digit/100;
    x=digit%100;
    ones=x%10;
    tens=x/10;
    printf("\n1st = %d\n",ones);
    printf("2nd = %d\n",tens);
    printf("3rd = %d\n",hundred);
    sum=ones+tens+hundred;
    printf("sum=%d",sum);
    return 0;
}