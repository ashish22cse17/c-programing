#include<stdio.h>
void pat2(int n){
    
    for (int i = 1; i <= n; i++)
    {
        for (int j =1 ; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}
void main(){
    int x;
    printf("x=");
    scanf("%d",&x);
    pat2(x);
}