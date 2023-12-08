#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float d,p,x1,x2;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    p=sqrt(d);
    printf("discrimanant = %f",d);
    printf("\n%f",p);
    if (d>0)
    {
        printf("\nit means quadratic have real roots");
        x1=((-b+p)/(2*a));
        printf("\nfirst root is %f",x1);
        x2=((-b-p)/(2*a));
        printf("\nsecond root is %f",x2);
    }
    else if (d==0)
    {
        printf("\nit means quadratic have real roots");
        x1=((-b+p)/(2*a));
        printf("\nfirst root is %f",x1);
        x2=((-b-p)/(2*a));
        printf("\nsecond root is %f",x2);
    }
    
    {
       printf("it means quadratic have imaginary roots");

    }
    
}