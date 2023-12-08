#include<stdio.h>
int main(){
    float p,r,t,si,amount;
    printf("principle is =");
    scanf("%f",&p);
    printf("rate is =");
    scanf("%f",&r);
    printf("time is =");
    scanf("%f",&t);
    si=p*r*t/100;
    printf("your simple intrest id =%f",si);
    amount=p+si;
    printf("\ntotal amount =%f",amount);
    return 0;
}