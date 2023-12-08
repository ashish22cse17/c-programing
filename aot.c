#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,x,area;
    printf("enter the value of a=");
    scanf("%f",&a);
    printf("enter the value of b=");
    scanf("%f",&b);
    printf("enter the value of c=");
    scanf("%f",&c);
    s=(a+b+c)/2;
    printf("\ns=%f",s);
    x=s*(s-a)*(s-b)*(s-c);
    printf("\nx=%f",x);
    area=pow(x,0.5);
    printf("\narea of triangle is =%f",area);
    return 0;
}