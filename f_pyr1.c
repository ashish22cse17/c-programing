#include<stdio.h>
void pyr1(int n){
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= ((2*n)-1); j++)
        {
            if (j>(n-i)&&j<(n+i))
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    
}
int main(){
    int x;
    printf("no of row is =");
    scanf("%d",&x);
    pyr1(x);
    return 0;
}
