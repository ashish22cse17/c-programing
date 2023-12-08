#include<stdio.h>
int reverse(int n){
    if(n<10)
    return n;
    else{
        int lastdig = n%10;
        int remainingdig = n/10;
        return (reverse(remainingdig)*10) + lastdig;
    }
}
int main(){
    int n;
    printf("enter the digit you want to reverse: ");
    scanf("%d",&n);
    
    printf("the reverse of %d is %d\n",n,reverse(n));
    return 0;
}