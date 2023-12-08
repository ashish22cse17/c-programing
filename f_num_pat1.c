#include<stdio.h>
void pat(int n);
void main(){
    int x;
    printf("enter no. of row =");
    scanf("%d",&x);
    pat(x);
}
void pat(int n){
    for (int i = 0; i <= (n-1); i++)
    {
        for (int j =1 ; j <=(n-i) ; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}