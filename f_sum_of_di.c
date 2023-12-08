#include<stdio.h>
int fsumd(int n){
    int d,s=0;
    while (d>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    return s;
}
int main(){
    int x;
    printf("digit=");
    scanf("%d",&x);
    printf("sum of digit = % d\n",fsumd(x));
    

}