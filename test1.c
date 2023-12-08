#include<stdio.h>
int main(){
    int array[100];
    int i,j,n,count=0,element_count;
    printf("enter the no of element:");
    scanf("%d",&element_count);
    printf("enter %d number\n",element_count);
    for ( i = 0; i < element_count; i++)
    {
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < element_count; i++)
    {
        for ( j = i+1; j < element_count; j++)
        {
            if (array[i]==array[j])
            {
                count++;
                break;
            }
            
        }
        
    }
    printf("duplicate element count:%d",count);
    return 0;
    
}