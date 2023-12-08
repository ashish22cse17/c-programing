#include<stdio.h>
int main(){
    int n;
    printf("enter the no of row:");
    scanf("%d",&n);
    if(n>=3){
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <=n ; j++)
            {
            
            }
            for (int j = 0; i <= n; j++)
            {
                /* code */
            }
            
            for (int j = 1; i <= n; j++)
            {
                printf("*");
            }
            
           printf("\n"); 
        }
        
    }
    else 
    printf("Z pattern cant be printed");
    return 0;
}