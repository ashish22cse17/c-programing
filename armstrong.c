#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,n=0,rem;
    float re=0.0;
    printf("num=");
    scanf("%d",&num);
    temp=num;
    for (temp=num; temp!=0; n++)
    {
        temp=temp/10;
    }
    for (temp=num; temp!=0; temp=temp/10)
    {
        rem=temp%10;
        re=re+pow(rem,n);
    }
    if((int)re==num)
    printf("armstrong");
    else
    printf(" not armstrong");
    return 0;
    
}