#include<stdio.h>
int main(){
    int n,f1=0,f2=1,f3=1,f4;
printf("enter the value of n =");
scanf("%d",&n);
printf("%d,",f1);
printf("%d,",f2);
printf("%d,",f3);
for ( f3=2 ; n > f4; )
{
    f4=f3+f2;
    printf("%d,",f4);
    f2=f3;
    f3=f4;
}
    return 0;
}