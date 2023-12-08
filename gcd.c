#include<stdio.h>
int gcd(int x, int y){
    if(y%x==0)
    return x;
    else
    return gcd(y%x, x);
}
int main(){
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    if(a<b)
    c=gcd(a,b);
    else
    c=gcd(b,a);
    printf("gcd is %d",c);
    return 0;
}
