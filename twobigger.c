#include<stdio.h>
int main(){
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    if (a>b)
    {
        printf("a = %d is bigger number",a);
    }
    else
        printf("b= %d is bigger number",b);
    return 0;
}