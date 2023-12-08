#include<stdio.h>
int fact(int n){
    int f=1;
    for (int i = n; i >= 1; i--)
    {
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("factorial is %d \n",fact(n));

}