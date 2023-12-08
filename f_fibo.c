#include<stdio.h>
void fibo(int n){
    int a=-1,b=1,c;
    for (int i =1; i <= n; i++)
    {
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    } 
}
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    fibo(n);
}