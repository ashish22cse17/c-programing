#include<stdio.h>
int pow(int x,int y){
    if(y==0)
    return 1;
    else
    return (x*pow(x,y-1));
}
int main(){
    int a,b,c;
    printf("enter the base a=");
    scanf("%d",&a);
    printf("enter the power b=");
    scanf("%d",&b);
    c=pow(a,b);
    printf("power is :%d\n",c);
    return 0;
}