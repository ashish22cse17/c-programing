#include<stdio.h>
int main(){
    int i,n,num,c=0;
    int a[100];
    printf("enter the size of array:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    printf("enter the number you want to search:");
    scanf("%d",&num);

    for ( i = 0; i < n; i++)
    {
        if(a[i]==num){
        printf("searched no. is at position:%d\n",i+1);  
        c++;
        }
    }
    if(c==0)
    printf("enter no is not found\n");
    else
    printf("number of times finding no is:%d\n",c);

    
    return 0;

}
