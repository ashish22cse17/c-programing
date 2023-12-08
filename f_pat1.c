#include<stdio.h>
void pat(int n);
int main(){
    int x;
    printf("enter no. of row =");
    scanf("%d",&x);
    pat1(x);
    return 0;
}
void pat1(int n){
    for (int i = 0; i <= (n-1); i++)
    {
        for (int j =1 ; j <=(n-i) ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}