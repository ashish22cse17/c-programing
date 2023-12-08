#include<stdio.h>
int fibo(int n){
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int x;
    printf("no of term =");
    scanf("%d",&x);
    int fibo(int x);
    
     for (int i = 1; i <= x; i++)
    {
        printf("%d, ", fibo(i)); 
    }
    return 0;
}