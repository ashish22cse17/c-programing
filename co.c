#include<stdio.h>
#include<math.h>
float main()
{
    float p,r,n,amount,ci;
    printf("enter the value of p=");
    scanf("%f",&p);
    printf("enter the value of r=");
    scanf("%f",&r);
    printf("enter the value of n=");
    scanf("%f",&n);
    amount=p*(pow(1+r/100,n));
    printf("your amount is = %f",amount);
    ci=amount - p;
    printf("\nyour intrest is = %f",ci);
    return 0;

}
