#include<stdio.h>
int main(){
    float l,b,a,p;
    printf("length is =");
    scanf("%f",&l);
    printf("breadth is =");
    scanf("%f",&b);
    a=l*b;
    p=2*(l+b);
    printf("area is =%f",a);
    printf("\nperimeter is =%f",p);
    return 0;
    
}
