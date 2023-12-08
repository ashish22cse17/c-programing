#include<stdio.h>
int main(){
    float a;
    printf("a=");
    scanf("%f",&a);
    printf("before typecasting a = %f",a);
    printf("\nafter typecasting a = %d\n",(int)a);
    return 0;

}